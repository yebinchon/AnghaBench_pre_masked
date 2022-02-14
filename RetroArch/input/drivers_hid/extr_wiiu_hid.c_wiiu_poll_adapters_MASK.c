
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wiiu_hid_t ;
struct TYPE_4__ {scalar_t__ state; struct TYPE_4__* next; } ;
typedef TYPE_1__ wiiu_adapter_t ;
struct TYPE_5__ {int lock; TYPE_1__* list; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_3__ VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(wiiu_hid_t *VAR_4)
{
   wiiu_adapter_t *VAR_5;
   FUNC_0(&(VAR_3.lock));

   for (VAR_5 = VAR_3.list; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
   {
      if (VAR_5->state == VAR_2)
         FUNC_2(VAR_5);

      if (VAR_5->state == VAR_0)
         VAR_5->state = VAR_1;
   }

   FUNC_1(&(VAR_3.lock));
}
