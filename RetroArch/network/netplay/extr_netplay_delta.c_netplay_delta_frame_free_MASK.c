
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct delta_frame {int * simlated_input; int * real_input; int * resolved_input; int * state; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct delta_frame *VAR_1)
{
   uint32_t VAR_2;

   if (VAR_1->state)
   {
      FUNC_0(VAR_1->state);
      VAR_1->state = ((void*)0);
   }

   for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
   {
      FUNC_1(&VAR_1->resolved_input[VAR_2]);
      FUNC_1(&VAR_1->real_input[VAR_2]);
      FUNC_1(&VAR_1->simlated_input[VAR_2]);
   }
}
