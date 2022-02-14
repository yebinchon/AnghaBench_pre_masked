
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ max_latency; } ;
typedef TYPE_1__ rsound_t ;
typedef int int64_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(rsound_t *VAR_0)
{







   if ( VAR_0->max_latency > 0 )
   {

      int VAR_1 = FUNC_2(VAR_0);


      if ( VAR_0->max_latency < VAR_1 )
      {
         int64_t VAR_2 = VAR_1 - VAR_0->max_latency;
         FUNC_0("[RSound] Delay wait: %d ms.\n", (int)VAR_2);
         FUNC_1((int)VAR_2);
      }
   }
}
