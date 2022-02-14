
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_2__ {int message_available_event; int lock; scalar_t__ initialised; int * open_handle; scalar_t__ num_connections; } ;


 int FUNC_0 (int) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7 () {


   int32_t VAR_1,VAR_2;

   if (!VAR_0.initialised)
      return;

   if(FUNC_1() == 0)
   {
      FUNC_3();

      for(VAR_2 = 0; VAR_2< (int32_t)VAR_0.num_connections; VAR_2++) {
         VAR_1 = FUNC_4( VAR_0.open_handle[VAR_2]);
         FUNC_0(VAR_1 == 0);
      }

      VAR_0.initialised = 0;

      FUNC_2();

      FUNC_6(&VAR_0.lock);
      FUNC_5(&VAR_0.message_available_event);
   }
}
