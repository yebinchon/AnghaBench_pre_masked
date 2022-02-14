
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pointer_status {struct pointer_status* next; } ;
struct dinput_input {struct pointer_status pointer_head; } ;


 int FUNC_0 (struct pointer_status*) ;

__attribute__((used)) static void FUNC_1(struct dinput_input *VAR_0)
{
   struct pointer_status *VAR_1 = &VAR_0->pointer_head;

   while (VAR_1->next)
   {
      struct pointer_status *VAR_2 = VAR_1->next;

      VAR_1->next = VAR_1->next->next;
      FUNC_0(VAR_2);
   }
}
