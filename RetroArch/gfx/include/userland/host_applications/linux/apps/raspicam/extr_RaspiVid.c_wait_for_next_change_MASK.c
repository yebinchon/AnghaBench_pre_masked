
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sigset_t ;
typedef int int64_t ;
struct TYPE_10__ {int verbose; } ;
struct TYPE_9__ {int roi; } ;
struct TYPE_8__ {int abort; } ;
struct TYPE_11__ {int timeout; int waitMethod; int onTime; int offTime; TYPE_3__ common_settings; int bCapturing; TYPE_2__ camera_parameters; int camera_component; TYPE_1__ callback_data; } ;
typedef TYPE_4__ RASPIVID_STATE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_4__*) ;
 int VAR_6 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 () ;
 char FUNC_3 () ;
 int FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (int ,int *,int *) ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int*) ;
 int VAR_7 ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(RASPIVID_STATE *VAR_8)
{
   int VAR_9 = 1;
   static int64_t VAR_10 = -1;


   int64_t VAR_11 = FUNC_2()/1000;

   if (VAR_10 == -1)
      VAR_10 = VAR_11 + VAR_8->timeout;


   if (VAR_11 >= VAR_10 && VAR_8->timeout != 0)
      VAR_9 = 0;

   switch (VAR_8->waitMethod)
   {
   case 130:
      (void)FUNC_4(VAR_8, VAR_8->timeout);
      return 0;

   case 132:
   {

      while (!VAR_8->callback_data.abort)

         FUNC_10(VAR_0);

      return 0;
   }

   case 128:
   {
      int VAR_12;

      if (VAR_8->bCapturing)
         VAR_12 = FUNC_4(VAR_8, VAR_8->onTime);
      else
         VAR_12 = FUNC_4(VAR_8, VAR_8->offTime);

      if (VAR_12)
         return 0;
      else
         return VAR_9;
   }

   case 131:
   {
      char VAR_13;

      if (VAR_8->common_settings.verbose)
         FUNC_1(VAR_7, "Press Enter to %s, X then ENTER to exit, [i,o,r] then ENTER to change zoom\n", VAR_8->bCapturing ? "pause" : "capture");

      VAR_13 = FUNC_3();
      if (VAR_13 == 'x' || VAR_13 == 'X')
         return 0;
      else if (VAR_13 == 'i' || VAR_13 == 'I')
      {
         if (VAR_8->common_settings.verbose)
            FUNC_1(VAR_7, "Starting zoom in\n");

         FUNC_6(VAR_8->camera_component, VAR_3, &(VAR_8->camera_parameters).roi);

         if (VAR_8->common_settings.verbose)
            FUNC_0(VAR_8);
      }
      else if (VAR_13 == 'o' || VAR_13 == 'O')
      {
         if (VAR_8->common_settings.verbose)
            FUNC_1(VAR_7, "Starting zoom out\n");

         FUNC_6(VAR_8->camera_component, VAR_4, &(VAR_8->camera_parameters).roi);

         if (VAR_8->common_settings.verbose)
            FUNC_0(VAR_8);
      }
      else if (VAR_13 == 'r' || VAR_13 == 'R')
      {
         if (VAR_8->common_settings.verbose)
            FUNC_1(VAR_7, "starting reset zoom\n");

         FUNC_6(VAR_8->camera_component, VAR_5, &(VAR_8->camera_parameters).roi);

         if (VAR_8->common_settings.verbose)
            FUNC_0(VAR_8);
      }

      return VAR_9;
   }

   case 129:
   {

      sigset_t VAR_14;
      int VAR_15;
      int VAR_16 = 0;

      FUNC_8( &VAR_14 );
      FUNC_7( &VAR_14, VAR_1 );



      FUNC_5( VAR_2, &VAR_14, ((void*)0) );

      if (VAR_8->common_settings.verbose)
      {
         FUNC_1(VAR_7, "Waiting for SIGUSR1 to %s\n", VAR_8->bCapturing ? "pause" : "capture");
      }

      VAR_16 = FUNC_9( &VAR_14, &VAR_15 );

      if (VAR_8->common_settings.verbose && VAR_16 != 0)
         FUNC_1(VAR_7, "Bad signal received - error %d\n", VAR_6);

      return VAR_9;
   }

   }

   return VAR_9;
}
