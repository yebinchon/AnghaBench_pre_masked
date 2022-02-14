
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ int32_t ;
typedef scalar_t__ VCOS_STATUS_T ;
typedef int VCHI_INSTANCE_T ;
typedef int VCHI_CONNECTION_T ;
struct TYPE_6__ {int initialised; int num_connections; int * open_handle; int message_available_event; int lock; } ;
struct TYPE_5__ {int member_9; int member_8; int member_7; int * member_6; int * member_5; int member_4; int member_3; int * member_2; int member_1; int member_0; } ;
typedef TYPE_1__ SERVICE_CREATION_T ;
typedef int GENCMD_SERVICE_T ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,TYPE_1__*,int *) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (int *,char*) ;

void FUNC_9 (VCHI_INSTANCE_T VAR_5, VCHI_CONNECTION_T **VAR_6, uint32_t VAR_7 )
{
   VCOS_STATUS_T VAR_8;
   int32_t VAR_9;
   int VAR_10;

   if (VAR_4.initialised)
     return;


   FUNC_3( &VAR_4, 0, sizeof(GENCMD_SERVICE_T) );
   VAR_4.num_connections = (int) VAR_7;

   VAR_8 = FUNC_8(&VAR_4.lock, "HGencmd");
   FUNC_6(VAR_8 == VAR_0);
   VAR_8 = FUNC_7(&VAR_4.message_available_event, "HGencmd");
   FUNC_6(VAR_8 == VAR_0);

   for (VAR_10=0; VAR_10<VAR_4.num_connections; VAR_10++) {


      SERVICE_CREATION_T VAR_11 = { FUNC_1(VAR_2),
                                               FUNC_0("GCMD"),
                                               *VAR_6[VAR_10],
                                               0,
                                               0,
                                               VAR_3,
                                               VAR_4.message_available_event,
                                               &VAR_1,
                                               VAR_1,
                                               VAR_1
                                               };

      VAR_9 = FUNC_5( VAR_5, &VAR_11, &VAR_4.open_handle[VAR_10] );
      FUNC_2( VAR_9 == 0 );
   }

   VAR_4.initialised = 1;
   FUNC_4();
}
