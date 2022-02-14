
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int wiiu_hid_t ;
struct TYPE_6__ {scalar_t__ type; struct TYPE_6__* next; } ;
typedef TYPE_1__ wiiu_attach_event ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(wiiu_hid_t *VAR_1, wiiu_attach_event *VAR_2)
{
   wiiu_attach_event *VAR_3, *VAR_4 = ((void*)0);

   if (!VAR_1 || !VAR_2)
      return;

   for (VAR_3 = VAR_2; VAR_3 != ((void*)0); VAR_3 = VAR_4)
   {
      VAR_4 = VAR_3->next;
      if (VAR_3->type == VAR_0)
         FUNC_1(VAR_1, VAR_3);
      else
         FUNC_2(VAR_1, VAR_3);
      FUNC_0(VAR_3);
   }
}
