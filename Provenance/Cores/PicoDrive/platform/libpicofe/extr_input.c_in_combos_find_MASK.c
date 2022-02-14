
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int binds ;


 int VAR_0 ;
 size_t FUNC_0 (int,int ) ;

void FUNC_1(const int *VAR_1, int VAR_2, int *VAR_3, int *VAR_4)
{
 int VAR_5, VAR_6;

 *VAR_3 = *VAR_4 = 0;
 for (VAR_5 = 0; VAR_5 < sizeof(VAR_1[0]) * 8; VAR_5++)
 {
  int VAR_7 = 0;
  for (VAR_6 = 0; VAR_6 <= VAR_2; VAR_6++)
   if (VAR_1[FUNC_0(VAR_6, VAR_0)] & (1 << VAR_5))
    VAR_7++;

  if (VAR_7 > 1)
  {

   for (VAR_6 = 0; VAR_6 <= VAR_2; VAR_6++)
   {
    if (VAR_1[FUNC_0(VAR_6, VAR_0)] & (1 << VAR_5)) {
     *VAR_3 |= 1 << VAR_6;
     *VAR_4 |= 1 << VAR_5;
    }
   }
  }
 }
}
