
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sigset_t ;
typedef int int64_t ;
struct TYPE_7__ {int verbose; } ;
struct TYPE_6__ {int abort; } ;
struct TYPE_8__ {int timeout; int waitMethod; int onTime; int offTime; TYPE_2__ common_settings; int bCapturing; TYPE_1__ callback_data; } ;
typedef TYPE_3__ RASPIVIDYUV_STATE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 () ;
 char FUNC_2 () ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int*) ;
 int VAR_4 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(RASPIVIDYUV_STATE *VAR_5)
{
   int VAR_6 = 1;
   static int64_t VAR_7 = -1;


   int64_t VAR_8 = FUNC_1()/1000;

   if (VAR_7 == -1)
      VAR_7 = VAR_8 + VAR_5->timeout;


   if (VAR_8 >= VAR_7 && VAR_5->timeout != 0)
      VAR_6 = 0;

   switch (VAR_5->waitMethod)
   {
   case 130:
      (void)FUNC_3(VAR_5, VAR_5->timeout);
      return 0;

   case 132:
   {

      while (!VAR_5->callback_data.abort)

         FUNC_8(VAR_0);

      return 0;
   }

   case 128:
   {
      int VAR_9;

      if (VAR_5->bCapturing)
         VAR_9 = FUNC_3(VAR_5, VAR_5->onTime);
      else
         VAR_9 = FUNC_3(VAR_5, VAR_5->offTime);

      if (VAR_9)
         return 0;
      else
         return VAR_6;
   }

   case 131:
   {
      char VAR_10;

      if (VAR_5->common_settings.verbose)
         FUNC_0(VAR_4, "Press Enter to %s, X then ENTER to exit\n", VAR_5->bCapturing ? "pause" : "capture");

      VAR_10 = FUNC_2();
      if (VAR_10 == 'x' || VAR_10 == 'X')
         return 0;
      else
         return VAR_6;
   }

   case 129:
   {

      sigset_t VAR_11;
      int VAR_12;
      int VAR_13 = 0;

      FUNC_6( &VAR_11 );
      FUNC_5( &VAR_11, VAR_1 );



      FUNC_4( VAR_2, &VAR_11, ((void*)0) );

      if (VAR_5->common_settings.verbose)
      {
         FUNC_0(VAR_4, "Waiting for SIGUSR1 to %s\n", VAR_5->bCapturing ? "pause" : "capture");
      }

      VAR_13 = FUNC_7( &VAR_11, &VAR_12 );

      if (VAR_5->common_settings.verbose && VAR_13 != 0)
         FUNC_0(VAR_4, "Bad signal received - error %d\n", VAR_3);

      return VAR_6;
   }

   }

   return VAR_6;
}
