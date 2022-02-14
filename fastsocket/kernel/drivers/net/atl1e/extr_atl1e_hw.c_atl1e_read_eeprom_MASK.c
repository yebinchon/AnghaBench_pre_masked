
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atl1e_hw {int dummy; } ;


 int FUNC_0 (struct atl1e_hw*,int ) ;
 int FUNC_1 (struct atl1e_hw*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;

bool FUNC_3(struct atl1e_hw *VAR_5, u32 VAR_6, u32 *VAR_7)
{
 int VAR_8;
 u32 VAR_9;

 if (VAR_6 & 3)
  return 0;

 FUNC_1(VAR_5, VAR_1, 0);
 VAR_9 = (VAR_6 & VAR_2) << VAR_3;
 FUNC_1(VAR_5, VAR_0, VAR_9);

 for (VAR_8 = 0; VAR_8 < 10; VAR_8++) {
  FUNC_2(2);
  VAR_9 = FUNC_0(VAR_5, VAR_0);
  if (VAR_9 & VAR_4)
   break;
 }
 if (VAR_9 & VAR_4) {
  *VAR_7 = FUNC_0(VAR_5, VAR_1);
  return 1;
 }
 return 0;
}
