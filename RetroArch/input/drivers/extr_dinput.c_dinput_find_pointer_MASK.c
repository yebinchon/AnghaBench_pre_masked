
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pointer_status {int pointer_id; struct pointer_status* next; } ;
struct TYPE_2__ {struct pointer_status* next; } ;
struct dinput_input {TYPE_1__ pointer_head; } ;



__attribute__((used)) static struct pointer_status *FUNC_0(
      struct dinput_input *VAR_0, int VAR_1)
{
   struct pointer_status *VAR_2 = VAR_0->pointer_head.next;

   while (VAR_2)
   {
      if (VAR_2->pointer_id == VAR_1)
         break;
      VAR_2 = VAR_2->next;
   }

   return VAR_2;
}
