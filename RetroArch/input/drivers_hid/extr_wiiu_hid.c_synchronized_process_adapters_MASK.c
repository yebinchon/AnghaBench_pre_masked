
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wiiu_hid_t ;
struct TYPE_5__ {int state; struct TYPE_5__* next; } ;
typedef TYPE_1__ wiiu_adapter_t ;
struct TYPE_6__ {int lock; TYPE_1__* list; } ;







 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int) ;
 TYPE_4__ VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(wiiu_hid_t *VAR_1)
{
   wiiu_adapter_t *VAR_2 = ((void*)0);
   wiiu_adapter_t *VAR_3 = ((void*)0), *VAR_4 = ((void*)0);
   bool VAR_5 = 0;

   FUNC_0(&(VAR_0.lock));

   for (VAR_2 = VAR_0.list; VAR_2 != ((void*)0); VAR_2 = VAR_4)
   {
     VAR_4 = VAR_2->next;

     switch(VAR_2->state)
     {
       case 130:
          VAR_2->state = FUNC_4(VAR_2);
          break;
       case 128:
       case 129:
       case 132:
          break;
       case 131:

          if (!VAR_3)
             VAR_0.list = VAR_2->next;
          else
             VAR_3->next = VAR_2->next;


          FUNC_3(VAR_2);

          VAR_5 = 1;
          break;
       default:
          FUNC_2("[hid]: Invalid adapter state: %d\n", VAR_2->state);
          break;
     }
     VAR_3 = VAR_5 ? VAR_3 : VAR_2;
     VAR_5 = 0;
   }
   FUNC_1(&(VAR_0.lock));
}
