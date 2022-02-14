
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_dcb_config {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbe_hw*,int ,int *,int *,int *,int *) ;
 int FUNC_1 (struct ixgbe_hw*,int ,int *,int *,int *,int *,int *) ;
 int FUNC_2 (struct ixgbe_dcb_config*,int ,int *) ;
 int FUNC_3 (struct ixgbe_dcb_config*,int ,int *) ;
 int FUNC_4 (struct ixgbe_dcb_config*,int *) ;
 int FUNC_5 (struct ixgbe_dcb_config*,int *) ;
 int FUNC_6 (struct ixgbe_dcb_config*,int ,int *) ;
 int FUNC_7 (struct ixgbe_dcb_config*,int ,int *) ;




s32 FUNC_8(struct ixgbe_hw *VAR_2,
                        struct ixgbe_dcb_config *VAR_3)
{
 s32 VAR_4 = 0;
 u8 VAR_5;
 u8 VAR_6[VAR_1];
 u8 VAR_7[VAR_1];
 u8 VAR_8[VAR_1];
 u16 VAR_9[VAR_1];
 u16 VAR_10[VAR_1];


 FUNC_5(VAR_3, &VAR_5);
 FUNC_7(VAR_3, VAR_0, VAR_9);
 FUNC_4(VAR_3, VAR_10);
 FUNC_2(VAR_3, VAR_0, VAR_7);
 FUNC_6(VAR_3, VAR_0, VAR_6);
 FUNC_3(VAR_3, VAR_0, VAR_8);

 switch (VAR_2->mac.type) {
 case 130:
  VAR_4 = FUNC_0(VAR_2, VAR_5, VAR_9, VAR_10,
      VAR_7, VAR_6);
  break;
 case 129:
 case 128:
  VAR_4 = FUNC_1(VAR_2, VAR_5, VAR_9, VAR_10,
      VAR_7, VAR_6, VAR_8);
  break;
 default:
  break;
 }
 return VAR_4;
}
