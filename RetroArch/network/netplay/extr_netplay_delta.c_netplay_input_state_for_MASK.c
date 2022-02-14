
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct netplay_input_state {int dummy; } ;
typedef TYPE_1__* netplay_input_state_t ;
struct TYPE_4__ {int used; size_t size; scalar_t__ client_num; struct TYPE_4__* next; int data; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ,size_t) ;

netplay_input_state_t FUNC_2(netplay_input_state_t *VAR_0,
      uint32_t VAR_1, size_t VAR_2, bool VAR_3, bool VAR_4)
{
   netplay_input_state_t VAR_5;
   while (*VAR_0)
   {
      VAR_5 = *VAR_0;
      if (!VAR_5->used && !VAR_4 && VAR_5->size == VAR_2)
      {
         VAR_5->client_num = VAR_1;
         VAR_5->used = 1;
         FUNC_1(VAR_5->data, 0, VAR_2*sizeof(uint32_t));
         return VAR_5;
      }
      else if (VAR_5->used && VAR_5->client_num == VAR_1)
      {
         if (!VAR_3 && VAR_5->size == VAR_2)
            return VAR_5;
         return ((void*)0);
      }
      VAR_0 = &(VAR_5->next);
   }

   if (VAR_4)
      return ((void*)0);


   VAR_5 = (netplay_input_state_t)FUNC_0(1, sizeof(struct netplay_input_state) + (VAR_2-1) * sizeof(uint32_t));
   if (!VAR_5)
      return ((void*)0);
   *VAR_0 = VAR_5;
   VAR_5->client_num = VAR_1;
   VAR_5->used = 1;
   VAR_5->size = (uint32_t)VAR_2;
   return VAR_5;
}
