
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void (* callback ) () ;int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

int FUNC_0 (void (*VAR_4) (void), int VAR_5)
{
 int VAR_6 = 0;
 if (VAR_3 == 32) {
  return -VAR_1;
 }
 if (!VAR_4) {
  return -VAR_0;
 }
 VAR_3++;
 for (; (VAR_2 [VAR_6].callback); VAR_6++);
 VAR_2 [VAR_6].callback = VAR_4;
 VAR_2 [VAR_6].count = VAR_5;
 return 0;
}
