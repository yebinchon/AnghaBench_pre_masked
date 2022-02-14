
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pointer_status {struct pointer_status* next; } ;
struct dinput_input {struct pointer_status pointer_head; } ;



__attribute__((used)) static void FUNC_0(struct dinput_input *VAR_0,
      struct pointer_status *VAR_1)
{
   struct pointer_status *VAR_2 = ((void*)0);

   VAR_1->next = ((void*)0);
   VAR_2 = &VAR_0->pointer_head;

   while (VAR_2->next)
      VAR_2 = VAR_2->next;
   VAR_2->next = VAR_1;
}
