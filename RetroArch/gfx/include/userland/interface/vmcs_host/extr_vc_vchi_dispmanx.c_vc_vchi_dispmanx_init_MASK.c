
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef scalar_t__ int32_t ;
typedef int VCOS_THREAD_ATTR_T ;
typedef scalar_t__ VCOS_STATUS_T ;
typedef int VCHI_INSTANCE_T ;
typedef int VCHI_CONNECTION_T ;
struct TYPE_6__ {int initialised; size_t num_connections; int * notify_handle; int * client_handle; int lock; } ;
struct TYPE_5__ {int member_9; int member_8; int member_7; int * member_6; int * member_5; int member_4; int member_3; int * member_2; int member_1; int member_0; } ;
typedef TYPE_1__ SERVICE_CREATION_T ;
typedef int DISPMANX_SERVICE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (int *,char*,int *,int ,int *) ;

void FUNC_11 (VCHI_INSTANCE_T VAR_12, VCHI_CONNECTION_T **VAR_13, uint32_t VAR_14 ) {
   VCOS_STATUS_T VAR_15;
   int32_t VAR_16;
   uint32_t VAR_17;

   if (VAR_5.initialised)
     return;


   FUNC_1( &VAR_5, 0, sizeof(DISPMANX_SERVICE_T) );
   VAR_5.num_connections = VAR_14;

   VAR_15 = FUNC_6(&VAR_5.lock, "HDispmanx");
   FUNC_4(VAR_15 == VAR_2);

   VAR_15 = FUNC_5(&VAR_7, "HDispmanx");
   FUNC_4(VAR_15 == VAR_2);

   VAR_15 = FUNC_5(&VAR_8, "HDispmanx");
   FUNC_4(VAR_15 == VAR_2);

   VAR_5.initialised = 1;

   for (VAR_17=0; VAR_17<VAR_5.num_connections; VAR_17++) {

      VCOS_THREAD_ATTR_T VAR_18;


      SERVICE_CREATION_T VAR_19 = { FUNC_0(VAR_3),
                                                 VAR_0,
                                                 *VAR_13[VAR_17],
                                                 0,
                                                 0,
                                                 VAR_6,
                                                 VAR_7,
                                                 &VAR_4,
                                                 VAR_4,
                                                 VAR_4,
                                                 };

      SERVICE_CREATION_T VAR_20 = { FUNC_0(VAR_3),
                                                  VAR_1,
                                                  *VAR_13[VAR_17],
                                                  0,
                                                  0,
                                                  VAR_9,
                                                  VAR_8,
                                                  &VAR_4,
                                                  VAR_4,
                                                  VAR_4,
                                                   };

      VAR_16 = FUNC_2( VAR_12, &VAR_19, &VAR_5.client_handle[VAR_17] );
      FUNC_4( VAR_16 == 0 );



      VAR_16 = FUNC_2( VAR_12, &VAR_20, &VAR_5.notify_handle[VAR_17] );
      FUNC_4( VAR_16 == 0 );


      FUNC_7(&VAR_18);
      FUNC_8(&VAR_18, 2048);
      FUNC_9(&VAR_18, 1);

      VAR_15 = FUNC_10(&VAR_11, "HDispmanx Notify", &VAR_18, VAR_10, ((void*)0));
      FUNC_4(VAR_15 == VAR_2);


      FUNC_3(VAR_5.client_handle[VAR_17]);
      FUNC_3(VAR_5.notify_handle[VAR_17]);
   }
}
