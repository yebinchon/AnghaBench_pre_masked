
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {int magic; int offset; int len; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {int vendor_id; int device_id; TYPE_1__ eeprom; } ;
struct e1000_adapter {struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct e1000_hw*,int,int,int*) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int,int ) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int *,int *,int ) ;
 struct e1000_adapter* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_4,
       struct ethtool_eeprom *VAR_5, u8 *VAR_6)
{
 struct e1000_adapter *VAR_7 = FUNC_5(VAR_4);
 struct e1000_hw *VAR_8 = &VAR_7->hw;
 u16 *VAR_9;
 int VAR_10, VAR_11;
 int VAR_12 = 0;
 u16 VAR_13;

 if (VAR_5->len == 0)
  return -VAR_0;

 VAR_5->magic = VAR_8->vendor_id | (VAR_8->device_id << 16);

 VAR_10 = VAR_5->offset >> 1;
 VAR_11 = (VAR_5->offset + VAR_5->len - 1) >> 1;

 VAR_9 = FUNC_2(sizeof(u16) *
   (VAR_11 - VAR_10 + 1), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 if (VAR_8->eeprom.type == VAR_3)
  VAR_12 = FUNC_0(VAR_8, VAR_10,
         VAR_11 - VAR_10 + 1,
         VAR_9);
 else {
  for (VAR_13 = 0; VAR_13 < VAR_11 - VAR_10 + 1; VAR_13++) {
   VAR_12 = FUNC_0(VAR_8, VAR_10 + VAR_13, 1,
          &VAR_9[VAR_13]);
   if (VAR_12)
    break;
  }
 }


 for (VAR_13 = 0; VAR_13 < VAR_11 - VAR_10 + 1; VAR_13++)
  FUNC_3(&VAR_9[VAR_13]);

 FUNC_4(VAR_6, (u8 *)VAR_9 + (VAR_5->offset & 1),
   VAR_5->len);
 FUNC_1(VAR_9);

 return VAR_12;
}
