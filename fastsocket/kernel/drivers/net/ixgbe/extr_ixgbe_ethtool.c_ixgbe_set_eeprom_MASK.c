
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int (* read ) (struct ixgbe_hw*,int,int*) ;int (* write_buffer ) (struct ixgbe_hw*,int,int,int*) ;int (* update_checksum ) (struct ixgbe_hw*) ;} ;
struct TYPE_4__ {int word_size; TYPE_1__ ops; } ;
struct ixgbe_hw {int vendor_id; int device_id; TYPE_2__ eeprom; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; } ;
struct ethtool_eeprom {int magic; int offset; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int,int ) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (void*,int *,int ) ;
 struct ixgbe_adapter* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct ixgbe_hw*,int,int*) ;
 int FUNC_7 (struct ixgbe_hw*,int,int*) ;
 int FUNC_8 (struct ixgbe_hw*,int,int,int*) ;
 int FUNC_9 (struct ixgbe_hw*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_3,
       struct ethtool_eeprom *VAR_4, u8 *VAR_5)
{
 struct ixgbe_adapter *VAR_6 = FUNC_5(VAR_3);
 struct ixgbe_hw *VAR_7 = &VAR_6->hw;
 u16 *VAR_8;
 void *VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13 = 0;
 u16 VAR_14;

 if (VAR_4->len == 0)
  return -VAR_0;

 if (VAR_4->magic != (VAR_7->vendor_id | (VAR_7->device_id << 16)))
  return -VAR_0;

 VAR_10 = VAR_7->eeprom.word_size * 2;

 VAR_11 = VAR_4->offset >> 1;
 VAR_12 = (VAR_4->offset + VAR_4->len - 1) >> 1;
 VAR_8 = FUNC_2(VAR_10, VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_9 = VAR_8;

 if (VAR_4->offset & 1) {




  VAR_13 = VAR_7->eeprom.ops.read(VAR_7, VAR_11, &VAR_8[0]);
  if (VAR_13)
   goto err;

  VAR_9++;
 }
 if ((VAR_4->offset + VAR_4->len) & 1) {




  VAR_13 = VAR_7->eeprom.ops.read(VAR_7, VAR_12,
       &VAR_8[VAR_12 - VAR_11]);
  if (VAR_13)
   goto err;
 }


 for (VAR_14 = 0; VAR_14 < VAR_12 - VAR_11 + 1; VAR_14++)
  FUNC_3(&VAR_8[VAR_14]);

 FUNC_4(VAR_9, VAR_5, VAR_4->len);

 for (VAR_14 = 0; VAR_14 < VAR_12 - VAR_11 + 1; VAR_14++)
  FUNC_0(&VAR_8[VAR_14]);

 VAR_13 = VAR_7->eeprom.ops.write_buffer(VAR_7, VAR_11,
           VAR_12 - VAR_11 + 1,
           VAR_8);


 if (VAR_13 == 0)
  VAR_7->eeprom.ops.update_checksum(VAR_7);

err:
 FUNC_1(VAR_8);
 return VAR_13;
}
