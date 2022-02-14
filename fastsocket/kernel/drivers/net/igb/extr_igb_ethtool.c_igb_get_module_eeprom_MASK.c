
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct e1000_hw {int dummy; } ;
struct igb_adapter {struct e1000_hw hw; } ;
struct ethtool_eeprom {int offset; int len; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int,int*) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 struct igb_adapter* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_5,
     struct ethtool_eeprom *VAR_6, u8 *VAR_7)
{
 struct igb_adapter *VAR_8 = FUNC_5(VAR_5);
 struct e1000_hw *VAR_9 = &VAR_8->hw;
 u32 VAR_10 = VAR_0;
 u16 *VAR_11;
 u16 VAR_12, VAR_13;
 int VAR_14 = 0;

 if (VAR_6->len == 0)
  return -VAR_1;

 VAR_12 = VAR_6->offset >> 1;
 VAR_13 = (VAR_6->offset + VAR_6->len - 1) >> 1;

 VAR_11 = FUNC_3(sizeof(u16) * (VAR_13 - VAR_12 + 1),
      VAR_4);
 if (!VAR_11)
  return -VAR_3;


 for (VAR_14 = 0; VAR_14 < VAR_13 - VAR_12 + 1; VAR_14++) {
  VAR_10 = FUNC_1(VAR_9, VAR_12 + VAR_14, &VAR_11[VAR_14]);
  if (VAR_10 != VAR_0)

   return -VAR_2;

  FUNC_0(&VAR_11[VAR_14]);
 }

 FUNC_4(VAR_7, (u8 *)VAR_11 + (VAR_6->offset & 1), VAR_6->len);
 FUNC_2(VAR_11);

 return 0;
}
