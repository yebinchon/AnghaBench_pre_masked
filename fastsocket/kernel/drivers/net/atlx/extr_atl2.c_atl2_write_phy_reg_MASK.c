
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct atl2_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct atl2_hw*,int ) ;
 int FUNC_1 (struct atl2_hw*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;

__attribute__((used)) static s32 FUNC_4(struct atl2_hw *VAR_12, u32 VAR_13, u16 VAR_14)
{
 int VAR_15;
 u32 VAR_16;

 VAR_16 = ((u32)(VAR_14 & VAR_4)) << VAR_5 |
  (VAR_13 & VAR_6) << VAR_7 |
  VAR_9 |
  VAR_8 |
  VAR_2 << VAR_3;
 FUNC_1(VAR_12, VAR_11, VAR_16);

 FUNC_3();

 for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++) {
  FUNC_2(2);
  VAR_16 = FUNC_0(VAR_12, VAR_11);
  if (!(VAR_16 & (VAR_8 | VAR_1)))
   break;

  FUNC_3();
 }

 if (!(VAR_16 & (VAR_8 | VAR_1)))
  return 0;

 return VAR_0;
}
