
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pointer_status {int pointer_id; struct pointer_status* next; } ;
struct dinput_input {struct pointer_status pointer_head; } ;


 int FUNC_0 (struct pointer_status*) ;

__attribute__((used)) static void FUNC_1(struct dinput_input *VAR_0, int VAR_1)
{
   struct pointer_status *VAR_2 = &VAR_0->pointer_head;

   while (VAR_2 && VAR_2->next)
   {
      if (VAR_2->next->pointer_id == VAR_1)
      {
         struct pointer_status *VAR_3 = VAR_2->next;

         VAR_2->next = VAR_2->next->next;
         FUNC_0(VAR_3);
      }
      VAR_2 = VAR_2->next;
   }
}
