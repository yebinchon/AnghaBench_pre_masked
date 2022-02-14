
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int entry_number; } ;
typedef TYPE_1__ user_desc_t ;


 int FUNC_0 (int*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*) ;

void FUNC_2(int *VAR_6, int *VAR_7) {

 int VAR_8[] = {VAR_2, VAR_3};
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_8); VAR_9++) {
  user_desc_t VAR_10;
  VAR_10.entry_number = VAR_8[VAR_9];

  if (FUNC_1(VAR_4, &VAR_10) == 0) {
   *VAR_7 = VAR_8[VAR_9];
   *VAR_6 = 1;
   return;
  } else {
   if (VAR_5 == VAR_0)
    continue;
   else if (VAR_5 == VAR_1)
    *VAR_6 = 0;
    return;
  }
 }

 *VAR_6 = 0;
}
