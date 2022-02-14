
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_2__ {int num_connections; scalar_t__ response_length; scalar_t__ response_buffer; int * open_handle; int message_available_event; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,scalar_t__,size_t) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ,scalar_t__,int,scalar_t__*,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int,int) ;

int FUNC_9 (char *VAR_3, int VAR_4) {
   int VAR_5 = 0;
   int VAR_6 = -1;
   int VAR_7 = 0;
   int32_t VAR_8 = 0;

   if(FUNC_1() == 0)
   {

      FUNC_5();
      do {


         for(VAR_5 = 0; VAR_5 < VAR_2.num_connections; VAR_5++) {


            VAR_6 = (int) FUNC_6( VAR_2.open_handle[VAR_5], VAR_2.response_buffer,
                                              sizeof(VAR_2.response_buffer), &VAR_2.response_length, VAR_0);
            if(VAR_6 == 0) {
               VAR_7 = FUNC_0( *(int *)VAR_2.response_buffer );
               break;
            } else {
               VAR_2.response_length = 0;
            }
         }
      } while(!VAR_2.response_length && FUNC_7(&VAR_2.message_available_event) == VAR_1);

      if(VAR_2.response_length && VAR_8 == 0) {
         VAR_2.response_length -= sizeof(int);
         FUNC_3(VAR_3, VAR_2.response_buffer+sizeof(int), (size_t) FUNC_8((int)VAR_2.response_length, (int)VAR_4));
      }

      FUNC_4();
      FUNC_2();
   }






   return VAR_6;
}
