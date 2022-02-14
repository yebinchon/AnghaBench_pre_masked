
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sizes ;
typedef int service_params ;
typedef int VCHI_SERVICE_HANDLE_T ;
typedef int VCHI_INSTANCE_T ;
typedef scalar_t__ VCHIQ_STATUS_T ;
typedef int VCHIQ_SERVICE_PARAMS_T ;
typedef int VCHIQ_SERVICE_HANDLE_T ;
typedef scalar_t__ VCHIQ_INSTANCE_T ;
struct TYPE_8__ {int iters; } ;
struct TYPE_6__ {int version; int version_min; } ;
struct TYPE_7__ {int service_id; int * callback_param; int callback; TYPE_1__ version; } ;
typedef TYPE_2__ SERVICE_CREATION_T ;


 int FUNC_0 (int *,int,int ,char*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char,char,char,char) ;

 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int,int,int,int const) ;
 int FUNC_3 (int ,int,int,int,int const) ;
 TYPE_5__ VAR_4 ;
 char* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (scalar_t__) ;
 int VAR_7 ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,TYPE_2__*,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__*) ;
 scalar_t__ FUNC_12 (scalar_t__,int *,int *) ;

__attribute__((used)) static VCHIQ_STATUS_T
FUNC_13(void)
{

   VCHIQ_INSTANCE_T VAR_8;
   VCHIQ_SERVICE_HANDLE_T VAR_9;
   VCHI_SERVICE_HANDLE_T VAR_10;
   SERVICE_CREATION_T VAR_11;
   VCHIQ_SERVICE_PARAMS_T VAR_12;
   int VAR_13;

   static int VAR_14[] = { 0, 1024, 2048, 128 };
   unsigned int VAR_15;

   VAR_13 = FUNC_1(VAR_5[0], VAR_5[1], VAR_5[2], VAR_5[3]);

   FUNC_5("Ping test - service:%s, iters:%d, version %d\n", VAR_5, VAR_4.iters, VAR_2);
   if (FUNC_11(&VAR_8) != VAR_1)
   {
      FUNC_5("* failed to open vchiq instance\n");
      return VAR_0;
   }

   FUNC_10(VAR_8);

   FUNC_4(&VAR_11, 0, sizeof(VAR_11));
   VAR_11.version.version = VAR_11.version.version_min = VAR_2;
   VAR_11.service_id = VAR_13;
   VAR_11.callback = VAR_7;
   VAR_11.callback_param = &VAR_10;

   if (FUNC_8((VCHI_INSTANCE_T)VAR_8, &VAR_11, &VAR_10) != VAR_1)
   {
      FUNC_5("* failed to open service - already in use?\n");
      return VAR_0;
   }

   for (VAR_15 = 0; VAR_15 < sizeof(VAR_14)/sizeof(VAR_14[0]); VAR_15++)
   {
      const int VAR_16 = VAR_4.iters;
      FUNC_3(VAR_10, VAR_14[VAR_15], 0, 0, VAR_16);
      FUNC_3(VAR_10, VAR_14[VAR_15], 0, 0, VAR_16);
      FUNC_3(VAR_10, VAR_14[VAR_15], 1, 0, VAR_16);
      FUNC_3(VAR_10, VAR_14[VAR_15], 2, 0, VAR_16);
      FUNC_3(VAR_10, VAR_14[VAR_15], 10, 0, VAR_16);
      FUNC_3(VAR_10, VAR_14[VAR_15], 0, 1, VAR_16);
      FUNC_3(VAR_10, VAR_14[VAR_15], 0, 2, VAR_16);
      FUNC_3(VAR_10, VAR_14[VAR_15], 0, 10, VAR_16);
      FUNC_3(VAR_10, VAR_14[VAR_15], 10, 10, VAR_16);
      FUNC_3(VAR_10, VAR_14[VAR_15], 100, 0, VAR_16/10);
      FUNC_3(VAR_10, VAR_14[VAR_15], 0, 100, VAR_16/10);
      FUNC_3(VAR_10, VAR_14[VAR_15], 100, 100, VAR_16/10);
      FUNC_3(VAR_10, VAR_14[VAR_15], 200, 0, VAR_16/10);
      FUNC_3(VAR_10, VAR_14[VAR_15], 0, 200, VAR_16/10);
      FUNC_3(VAR_10, VAR_14[VAR_15], 200, 200, VAR_16/10);
      FUNC_3(VAR_10, VAR_14[VAR_15], 400, 0, VAR_16/20);
      FUNC_3(VAR_10, VAR_14[VAR_15], 0, 400, VAR_16/20);
      FUNC_3(VAR_10, VAR_14[VAR_15], 400, 400, VAR_16/20);
      FUNC_3(VAR_10, VAR_14[VAR_15], 1000, 0, VAR_16/50);
      FUNC_3(VAR_10, VAR_14[VAR_15], 0, 1000, VAR_16/50);
      FUNC_3(VAR_10, VAR_14[VAR_15], 1000, 1000, VAR_16/50);
   }

   FUNC_7(VAR_10);

   FUNC_0(&VAR_12, VAR_13, VAR_3, "clnt userdata", VAR_2);
   if (FUNC_12(VAR_8, &VAR_12, &VAR_9) != VAR_1)
   {
      FUNC_5("* failed to open service - already in use?\n");
      return VAR_0;
   }

   for (VAR_15 = 0; VAR_15 < sizeof(VAR_14)/sizeof(VAR_14[0]); VAR_15++)
   {
      const int VAR_17 = VAR_4.iters;
      FUNC_2(VAR_9, VAR_14[VAR_15], 0, 0, VAR_17);
      FUNC_2(VAR_9, VAR_14[VAR_15], 0, 0, VAR_17);
      FUNC_2(VAR_9, VAR_14[VAR_15], 1, 0, VAR_17);
      FUNC_2(VAR_9, VAR_14[VAR_15], 2, 0, VAR_17);
      FUNC_2(VAR_9, VAR_14[VAR_15], 10, 0, VAR_17);
      FUNC_2(VAR_9, VAR_14[VAR_15], 0, 1, VAR_17);
      FUNC_2(VAR_9, VAR_14[VAR_15], 0, 2, VAR_17);
      FUNC_2(VAR_9, VAR_14[VAR_15], 0, 10, VAR_17);
      FUNC_2(VAR_9, VAR_14[VAR_15], 10, 10, VAR_17);
      FUNC_2(VAR_9, VAR_14[VAR_15], 100, 0, VAR_17/10);
      FUNC_2(VAR_9, VAR_14[VAR_15], 0, 100, VAR_17/10);
      FUNC_2(VAR_9, VAR_14[VAR_15], 100, 100, VAR_17/10);
      FUNC_2(VAR_9, VAR_14[VAR_15], 200, 0, VAR_17/10);
      FUNC_2(VAR_9, VAR_14[VAR_15], 0, 200, VAR_17/10);
      FUNC_2(VAR_9, VAR_14[VAR_15], 200, 200, VAR_17/10);
      FUNC_2(VAR_9, VAR_14[VAR_15], 400, 0, VAR_17/20);
      FUNC_2(VAR_9, VAR_14[VAR_15], 0, 400, VAR_17/20);
      FUNC_2(VAR_9, VAR_14[VAR_15], 400, 400, VAR_17/20);
      FUNC_2(VAR_9, VAR_14[VAR_15], 1000, 0, VAR_17/50);
      FUNC_2(VAR_9, VAR_14[VAR_15], 0, 1000, VAR_17/50);
      FUNC_2(VAR_9, VAR_14[VAR_15], 1000, 1000, VAR_17/50);
   }

   FUNC_9(VAR_9);

   return VAR_1;
}
