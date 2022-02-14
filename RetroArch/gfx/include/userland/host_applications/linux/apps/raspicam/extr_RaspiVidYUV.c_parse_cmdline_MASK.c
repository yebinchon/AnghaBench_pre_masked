
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int timeout; int demoInterval; int demoMode; int onTime; int offTime; int bCapturing; int useRGB; int onlyLuma; int save_pts; int netListen; int preview_parameters; int common_settings; int camera_parameters; int pts_filename; int waitMethod; int framerate; } ;
typedef TYPE_1__ RASPIVIDYUV_STATE ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char const*,char const*) ;
 int FUNC_3 (int ,int ,char const*,int*) ;
 int FUNC_4 (char const*,int ,int ) ;
 int FUNC_5 (int *,char const*,char const*,int *) ;
 int FUNC_6 (int *,char const*,char const*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char const*,char*,int*,...) ;
 int VAR_12 ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (int ,char const*,int) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(int VAR_13, const char **VAR_14, RASPIVIDYUV_STATE *VAR_15)
{



   int VAR_16 = 1;
   int VAR_17;

   for (VAR_17 = 1; VAR_17 < VAR_13 && VAR_16; VAR_17++)
   {
      int VAR_18, VAR_19;

      if (!VAR_14[VAR_17])
         continue;

      if (VAR_14[VAR_17][0] != '-')
      {
         VAR_16 = 0;
         continue;
      }


      VAR_16 = 1;

      VAR_18 = FUNC_3(VAR_7, VAR_8, &VAR_14[VAR_17][1], &VAR_19);


      if (VAR_18 != -1 && VAR_19 > 0 && (VAR_17 + 1 >= VAR_13) )
         continue;


      switch (VAR_18)
      {
      case 129:
      {
         if (FUNC_8(VAR_14[VAR_17 + 1], "%d", &VAR_15->timeout) == 1)
         {

            if (VAR_15->timeout == 0 && VAR_15->waitMethod == VAR_3)
               VAR_15->waitMethod = VAR_1;

            VAR_17++;
         }
         else
            VAR_16 = 0;
         break;
      }

      case 138:
      {


         if (VAR_17 + 1 < VAR_13 && VAR_14[VAR_17+1][0] != '-')
         {
            if (FUNC_8(VAR_14[VAR_17 + 1], "%u", &VAR_15->demoInterval) == 1)
            {

               if (VAR_15->demoInterval == 0)
                  VAR_15->demoInterval = 250;

               VAR_15->demoMode = 1;
               VAR_17++;
            }
            else
               VAR_16 = 0;
         }
         else
         {
            VAR_15->demoMode = 1;
         }

         break;
      }

      case 137:
      {
         if (FUNC_8(VAR_14[VAR_17 + 1], "%u", &VAR_15->framerate) == 1)
         {

            VAR_17++;
         }
         else
            VAR_16 = 0;
         break;
      }

      case 130:
      {
         if (FUNC_8(VAR_14[VAR_17 + 1], "%u,%u", &VAR_15->onTime, &VAR_15->offTime) == 2)
         {
            VAR_17++;

            if (VAR_15->onTime < 1000)
               VAR_15->onTime = 1000;

            if (VAR_15->offTime < 1000)
               VAR_15->offTime = 1000;

            VAR_15->waitMethod = VAR_5;

            if (VAR_15->timeout == -1)
               VAR_15->timeout = 0;
         }
         else
            VAR_16 = 0;
         break;
      }

      case 135:
         VAR_15->waitMethod = VAR_2;

         if (VAR_15->timeout == -1)
            VAR_15->timeout = 0;

         break;

      case 131:
         VAR_15->waitMethod = VAR_4;

         FUNC_7(VAR_0, VAR_9);

         if (VAR_15->timeout == -1)
            VAR_15->timeout = 0;

         break;

      case 136:
      {
         VAR_15->bCapturing = FUNC_4(VAR_14[VAR_17 + 1], VAR_10, VAR_11);

         if( VAR_15->bCapturing == -1)
            VAR_15->bCapturing = 0;

         VAR_17++;
         break;
      }

      case 133:
         if (VAR_15->useRGB)
         {
            FUNC_0(VAR_12, "--luma and --rgb are mutually exclusive\n");
            VAR_16 = 0;
         }
         VAR_15->onlyLuma = 1;
         break;

      case 128:
         if (VAR_15->onlyLuma)
         {
            FUNC_0(VAR_12, "--luma and --rgb are mutually exclusive\n");
            VAR_16 = 0;
         }
         VAR_15->useRGB = 1;
         break;

      case 132:
      {
         VAR_15->save_pts = 1;
         int VAR_20 = FUNC_9(VAR_14[VAR_17 + 1]);
         if (VAR_20)
         {
            VAR_15->pts_filename = FUNC_1(VAR_20 + 1);
            FUNC_11(VAR_15->pts_filename);
            if (VAR_15->pts_filename)
               FUNC_10(VAR_15->pts_filename, VAR_14[VAR_17 + 1], VAR_20+1);
            VAR_17++;
         }
         else
            VAR_16 = 0;
         break;
      }

      case 134:
      {
         VAR_15->netListen = 1;

         break;
      }

      default:
      {



         const char *VAR_21 = (VAR_17 + 1 < VAR_13) ? VAR_14[VAR_17 + 1] : ((void*)0);
         int VAR_22 = (FUNC_2(&VAR_15->camera_parameters, &VAR_14[VAR_17][1], VAR_21));


         if (!VAR_22)
            VAR_22 = FUNC_5(&VAR_15->common_settings, &VAR_14[VAR_17][1], VAR_21, &VAR_6);


         if (!VAR_22)
            VAR_22 = FUNC_6(&VAR_15->preview_parameters, &VAR_14[VAR_17][1], VAR_21);


         if (!VAR_22)
            VAR_16 = 0;
         else
            VAR_17 += VAR_22 - 1;

         break;
      }
      }
   }

   if (!VAR_16)
   {
      FUNC_0(VAR_12, "Invalid command line option (%s)\n", VAR_14[VAR_17-1]);
      return 1;
   }

   return 0;
}
