
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ VCOS_STATUS_T ;
typedef scalar_t__ VCHIQ_STATUS_T ;
struct TYPE_3__ {int callback; int fourcc; void* version_min; void* version; int * userdata; } ;
typedef TYPE_1__ VCHIQ_SERVICE_PARAMS_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*,int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;

void FUNC_10()
{
   VCOS_STATUS_T VAR_16 = FUNC_7(&VAR_6, ((void*)0));
   FUNC_0(VAR_16);
   FUNC_6(VAR_16 == VAR_4);

   if (FUNC_3(&VAR_12) != VAR_3)
   {
      FUNC_8("* failed to open vchiq device");

      FUNC_1(1);
   }

   FUNC_9("gldemo: connecting");

   if (FUNC_2(VAR_12) != VAR_3)
   {
      FUNC_8("* failed to connect");

      FUNC_1(1);
   }

   VCHIQ_STATUS_T VAR_17, VAR_18, VAR_19;
   VCHIQ_SERVICE_PARAMS_T VAR_20;

   VAR_20.userdata = ((void*)0);
   VAR_20.version = VAR_5;
   VAR_20.version_min = VAR_5;

   VAR_20.fourcc = VAR_0;
   VAR_20.callback = VAR_7;
   VAR_17 = FUNC_4(VAR_12, &VAR_20, &VAR_13);

   VAR_20.fourcc = VAR_2;
   VAR_20.callback = VAR_10;
   VAR_18 = FUNC_4(VAR_12, &VAR_20, &VAR_15);

   VAR_20.fourcc = VAR_1;
   VAR_20.callback = VAR_8;
   VAR_19 = FUNC_4(VAR_12, &VAR_20, &VAR_14);

   if (VAR_17 != VAR_3 ||
       VAR_18 != VAR_3 ||
       VAR_19 != VAR_3)
   {
      FUNC_8("* failed to add service - already in use?");

      FUNC_1(1);
   }
   FUNC_5(&VAR_11, 64);
   FUNC_5(&VAR_9, 64);

   FUNC_9("gldemo: connected");







}
