
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef scalar_t__ int32_t ;
typedef scalar_t__ VCOS_STATUS_T ;
struct TYPE_2__ {int notify_length; scalar_t__ to_exit; int notify_data; int (* notify_fn ) (int ,int,int,int,int,int) ;scalar_t__ physical_address; scalar_t__ logical_address; int * notify_buffer; int * notify_handle; int initialised; } ;
typedef scalar_t__ CEC_DEVICE_TYPE_T ;
typedef TYPE_1__ CECSERVICE_HOST_STATE_T ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int,int,int,int,int) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (int ,int *,int,int*,int ) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static void *FUNC_7(void *VAR_5) {
   int32_t VAR_6;
   CECSERVICE_HOST_STATE_T *VAR_7 = (CECSERVICE_HOST_STATE_T *) VAR_5;

   FUNC_3("CEC service async thread started");
   while(1) {
      VCOS_STATUS_T VAR_8 = FUNC_6(&VAR_2);
      uint32_t VAR_9 = VAR_4 - 1;
      if(VAR_8 != VAR_1 || !VAR_7->initialised || VAR_7->to_exit)
         break;

      do {
         uint32_t VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

         VAR_6 = FUNC_4( VAR_7->notify_handle[0], VAR_7->notify_buffer, sizeof(VAR_7->notify_buffer), &VAR_7->notify_length, VAR_0 );
         if(VAR_6 != 0 || VAR_7->notify_length < sizeof(uint32_t)*5 ) {
            FUNC_5(VAR_7->notify_length == sizeof(uint32_t)*5);
            break;
         }




         VAR_10 = FUNC_1(VAR_7->notify_buffer[0]);
         VAR_11 = FUNC_1(VAR_7->notify_buffer[1]);
         VAR_12 = FUNC_1(VAR_7->notify_buffer[2]);
         VAR_13 = FUNC_1(VAR_7->notify_buffer[3]);
         VAR_14 = FUNC_1(VAR_7->notify_buffer[4]);



         if(FUNC_0(VAR_10) == 135) {
            VAR_7->logical_address = (CEC_DEVICE_TYPE_T) VAR_11;
            VAR_7->physical_address = (uint16_t) (VAR_12 & 0xFFFF);
         }

         switch(FUNC_0(VAR_10)) {
         case 133:
            VAR_9 = 0; break;
         case 128:
            VAR_9 = 1; break;
         case 130:
            VAR_9 = 2; break;
         case 137:
            VAR_9 = 3; break;
         case 136:
            VAR_9 = 4; break;
         case 132:
            VAR_9 = 5; break;
         case 131:
            VAR_9 = 6; break;
         case 135:
            VAR_9 = 7; break;
         case 129:
            VAR_9 = 8; break;
         case 134:
            VAR_9 = 9; break;
         }

         FUNC_3("CEC service callback [%s]: 0x%x, 0x%x, 0x%x, 0x%x",
                         VAR_3[VAR_9], VAR_11, VAR_12, VAR_13, VAR_14);

         if(VAR_7->notify_fn) {
            (*VAR_7->notify_fn)(VAR_7->notify_data, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);
         } else {
            FUNC_3("CEC service: No callback handler specified, callback [%s] swallowed",
                            VAR_3[VAR_9]);
         }

      } while(VAR_6 == 0 && VAR_7->notify_length >= sizeof(uint32_t)*5);
   }

   if(VAR_7->to_exit)
      FUNC_3("CEC service async thread exiting");

   return 0;
}
