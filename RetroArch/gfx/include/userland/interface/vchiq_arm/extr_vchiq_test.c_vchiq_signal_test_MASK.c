
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ VCHIQ_STATUS_T ;
typedef int VCHIQ_SERVICE_PARAMS_T ;
typedef int VCHIQ_SERVICE_HANDLE_T ;
typedef int VCHIQ_INSTANCE_T ;
struct TYPE_2__ {int iters; } ;


 int FUNC_0 (int *,int,int ,char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char,char,char,char) ;

 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 char* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int**,int,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int *,int *) ;

__attribute__((used)) static VCHIQ_STATUS_T
FUNC_9(void)
{

   VCHIQ_INSTANCE_T VAR_8;
   VCHIQ_SERVICE_HANDLE_T VAR_9;
   VCHIQ_SERVICE_PARAMS_T VAR_10;
   int VAR_11;

   static int VAR_12[] = { 0, 1024, 2048, 128 };

   VAR_11 = FUNC_1(VAR_6[0], VAR_6[1], VAR_6[2], VAR_6[3]);

   FUNC_2("signal test - service:%s, iters:%d, version %d\n", VAR_6, VAR_5.iters, VAR_3);
   if (FUNC_7(&VAR_8) != VAR_2)
   {
      FUNC_2("* failed to open vchiq instance\n");
      return VAR_1;
   }

   FUNC_6(VAR_8);

   FUNC_0(&VAR_10, VAR_11, VAR_4, "clnt userdata", VAR_3);
   if (FUNC_8(VAR_8, &VAR_10, &VAR_9) != VAR_2)
   {
      FUNC_2("* failed to open service - already in use?\n");
      return VAR_1;
   }

   FUNC_4(VAR_9, &VAR_12, 16, 0, VAR_0);

   FUNC_5(VAR_9);

   return VAR_2;
}
