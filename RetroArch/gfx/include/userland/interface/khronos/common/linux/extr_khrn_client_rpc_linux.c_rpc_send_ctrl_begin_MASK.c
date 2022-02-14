
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ merge_pos; scalar_t__ merge_end; } ;
typedef TYPE_1__ CLIENT_THREAD_STATE_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;

void FUNC_3(CLIENT_THREAD_STATE_T *VAR_1, uint32_t VAR_2)
{


   FUNC_2(VAR_2 == FUNC_1(VAR_2));
   if ((VAR_1->merge_pos + VAR_2) > VAR_0) {
      FUNC_0(VAR_1);
   }

   VAR_1->merge_end = VAR_1->merge_pos + VAR_2;
}
