
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* list; scalar_t__ next; scalar_t__ local_use; } ;
typedef TYPE_1__ image_transform ;


 int FUNC_0 () ;
 TYPE_1__ VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void
FUNC_1(void)
{
   image_transform *VAR_2 = VAR_1;
   int VAR_3 = 0;

   while (VAR_2 != &VAR_0)
   {
      VAR_2->local_use = 0;
      VAR_2->next = 0;
      VAR_2 = VAR_2->list;
      ++VAR_3;
   }




   if (VAR_3 > 32) FUNC_0();
}
