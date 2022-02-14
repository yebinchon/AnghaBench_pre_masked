
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ath_hw {int dummy; } ;


 int FUNC_0 (struct ath_hw*,int,int*) ;

__attribute__((used)) static bool FUNC_1(struct ath_hw *VAR_0, int VAR_1, u8 *VAR_2,
       int VAR_3)
{
 u32 VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  int VAR_6 = 8 * ((VAR_1 - VAR_5) % 4);
  if (!FUNC_0(VAR_0, (VAR_1 - VAR_5) / 4, &VAR_4))
   return 0;

  VAR_2[VAR_5] = (VAR_4 >> VAR_6) & 0xff;
 }

 return 1;
}
