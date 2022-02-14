
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct card_info {int unsafe; scalar_t__ nmodes; scalar_t__ (* probe ) () ;} ;


 scalar_t__ FUNC_0 () ;
 struct card_info* VAR_0 ;
 struct card_info* VAR_1 ;

void FUNC_1(int VAR_2)
{
 struct card_info *VAR_3;
 static u8 VAR_4[2];

 if (VAR_4[VAR_2])
  return;

 VAR_4[VAR_2] = 1;

 for (VAR_3 = VAR_0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_3->unsafe == VAR_2) {
   if (VAR_3->probe)
    VAR_3->nmodes = VAR_3->probe();
   else
    VAR_3->nmodes = 0;
  }
 }
}
