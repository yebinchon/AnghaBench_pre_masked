
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct TYPE_5__ {int (* read ) (struct e1000_hw*,int,int,int*) ;int (* write ) (struct e1000_hw*,int,int,int*) ;int (* update ) (struct e1000_hw*) ;} ;
struct TYPE_6__ {int word_size; TYPE_2__ ops; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct e1000_hw {int vendor_id; int device_id; TYPE_3__ nvm; TYPE_1__ mac; } ;
struct igb_adapter {struct e1000_hw hw; } ;
struct ethtool_eeprom {int magic; int offset; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct igb_adapter*) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int,int ) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (void*,int *,int ) ;
 struct igb_adapter* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct e1000_hw*,int,int,int*) ;
 int FUNC_8 (struct e1000_hw*,int,int,int*) ;
 int FUNC_9 (struct e1000_hw*,int,int,int*) ;
 int FUNC_10 (struct e1000_hw*) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_5,
     struct ethtool_eeprom *VAR_6, u8 *VAR_7)
{
 struct igb_adapter *VAR_8 = FUNC_6(VAR_5);
 struct e1000_hw *VAR_9 = &VAR_8->hw;
 u16 *VAR_10;
 void *VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15 = 0;
 u16 VAR_16;

 if (VAR_6->len == 0)
  return -VAR_2;

 if (VAR_9->mac.type == VAR_4)
  return -VAR_2;

 if (VAR_6->magic != (VAR_9->vendor_id | (VAR_9->device_id << 16)))
  return -VAR_0;

 VAR_12 = VAR_9->nvm.word_size * 2;

 VAR_13 = VAR_6->offset >> 1;
 VAR_14 = (VAR_6->offset + VAR_6->len - 1) >> 1;
 VAR_10 = FUNC_3(VAR_12, VAR_3);
 if (!VAR_10)
  return -VAR_1;

 VAR_11 = (void *)VAR_10;

 if (VAR_6->offset & 1) {



  VAR_15 = VAR_9->nvm.ops.read(VAR_9, VAR_13, 1,
         &VAR_10[0]);
  VAR_11++;
 }
 if (((VAR_6->offset + VAR_6->len) & 1) && (VAR_15 == 0)) {



  VAR_15 = VAR_9->nvm.ops.read(VAR_9, VAR_14, 1,
       &VAR_10[VAR_14 - VAR_13]);
 }


 for (VAR_16 = 0; VAR_16 < VAR_14 - VAR_13 + 1; VAR_16++)
  FUNC_4(&VAR_10[VAR_16]);

 FUNC_5(VAR_11, VAR_7, VAR_6->len);

 for (VAR_16 = 0; VAR_16 < VAR_14 - VAR_13 + 1; VAR_16++)
  VAR_10[VAR_16] = FUNC_0(VAR_10[VAR_16]);

 VAR_15 = VAR_9->nvm.ops.write(VAR_9, VAR_13,
        VAR_14 - VAR_13 + 1, VAR_10);


 if (VAR_15 == 0)
  VAR_9->nvm.ops.update(VAR_9);

 FUNC_1(VAR_8);
 FUNC_2(VAR_10);
 return VAR_15;
}
