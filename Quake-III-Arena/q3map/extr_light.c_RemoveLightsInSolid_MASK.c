
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; scalar_t__ w; int origin; } ;
typedef TYPE_1__ light_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

void FUNC_4(void)
{
 light_t *VAR_1, *VAR_2;
 int VAR_3 = 0;

 VAR_2 = ((void*)0);
 for ( VAR_1 = VAR_0 ; VAR_1 ; ) {
  if (FUNC_1(VAR_1->origin))
  {
   if (VAR_2) VAR_2->next = VAR_1->next;
   else VAR_0 = VAR_1->next;
   if (VAR_1->w)
    FUNC_0(VAR_1->w);
   FUNC_3(VAR_1);
   VAR_3++;
   if (VAR_2)
    VAR_1 = VAR_2->next;
   else
    VAR_1 = VAR_0;
  }
  else
  {
   VAR_2 = VAR_1;
   VAR_1 = VAR_1->next;
  }
 }
 FUNC_2 (" %7i lights in solid\n", VAR_3);
}
