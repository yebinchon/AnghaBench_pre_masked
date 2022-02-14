
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bkt_hash; } ;
union ixgbe_atr_input {TYPE_1__ formatted; } ;
typedef int u32 ;
typedef int u16 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 int FUNC_3 (int) ;

s32 FUNC_4(struct ixgbe_hw *VAR_8,
       union ixgbe_atr_input *VAR_9,
       u16 VAR_10)
{
 u32 VAR_11;
 u32 VAR_12 = 0;
 u32 VAR_13;
 s32 VAR_14 = 0;


 VAR_11 = VAR_9->formatted.bkt_hash;
 VAR_11 |= VAR_10 << VAR_7;
 FUNC_2(VAR_8, VAR_6, VAR_11);


 FUNC_1(VAR_8);


 FUNC_2(VAR_8, VAR_1, VAR_3);

 for (VAR_13 = 10; VAR_13; VAR_13--) {

  FUNC_3(10);

  VAR_12 = FUNC_0(VAR_8, VAR_1);
  if (!(VAR_12 & VAR_2))
   break;
 }

 if (!VAR_13)
  VAR_14 = VAR_0;


 if (VAR_12 & VAR_5) {
  FUNC_2(VAR_8, VAR_6, VAR_11);
  FUNC_1(VAR_8);
  FUNC_2(VAR_8, VAR_1,
    VAR_4);
 }

 return VAR_14;
}
