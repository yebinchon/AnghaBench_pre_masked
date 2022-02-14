
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int timeout; int timelapse; int onlyLuma; int fullResPreview; int burstCaptureMode; int preview_parameters; int common_settings; int camera_parameters; int encoding; int frameNextMethod; int linkname; } ;
typedef TYPE_1__ RASPISTILLYUV_STATE ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char const*,char const*) ;
 int FUNC_3 (int ,int ,char const*,int*) ;
 int FUNC_4 (int *,char const*,char const*,int *) ;
 int FUNC_5 (int *,char const*,char const*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char const*,char*,int*) ;
 int VAR_13 ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (int ,char const*,int) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(int VAR_14, const char **VAR_15, RASPISTILLYUV_STATE *VAR_16)
{



   int VAR_17 = 1;
   int VAR_18;

   for (VAR_18 = 1; VAR_18 < VAR_14 && VAR_17; VAR_18++)
   {
      int VAR_19, VAR_20;

      if (!VAR_15[VAR_18])
         continue;

      if (VAR_15[VAR_18][0] != '-')
      {
         VAR_17 = 0;
         continue;
      }


      VAR_17 = 1;

      VAR_19 = FUNC_3(VAR_10, VAR_11, &VAR_15[VAR_18][1], &VAR_20);


      if (VAR_19 != -1 && VAR_20 > 0 && (VAR_18 + 1 >= VAR_14) )
         continue;


      switch (VAR_19)
      {
      case 134 :
      {
         int VAR_21 = FUNC_8(VAR_15[VAR_18+1]);
         if (VAR_21)
         {
            VAR_16->linkname = FUNC_1(VAR_21 + 10);
            FUNC_10(VAR_16->linkname);
            if (VAR_16->linkname)
               FUNC_9(VAR_16->linkname, VAR_15[VAR_18 + 1], VAR_21+1);
            VAR_18++;
         }
         else
            VAR_17 = 0;
         break;

      }

      case 130:
      {
         if (FUNC_7(VAR_15[VAR_18 + 1], "%d", &VAR_16->timeout) == 1)
         {

            if (VAR_16->timeout == 0 && VAR_16->frameNextMethod == VAR_4)
               VAR_16->frameNextMethod = VAR_0;

            VAR_18++;
         }
         else
            VAR_17 = 0;
         break;
      }

      case 131:
         if (FUNC_7(VAR_15[VAR_18 + 1], "%u", &VAR_16->timelapse) != 1)
            VAR_17 = 0;
         else
         {
            if (VAR_16->timelapse)
               VAR_16->frameNextMethod = VAR_5;
            else
               VAR_16->frameNextMethod = VAR_1;

            VAR_18++;
         }
         break;

      case 128:
         if (VAR_16->onlyLuma)
         {
            FUNC_0(VAR_13, "--luma and --rgb/--bgr are mutually exclusive\n");
            VAR_17 = 0;
         }
         VAR_16->encoding = VAR_7;
         break;

      case 136:
         VAR_16->fullResPreview = 1;
         break;

      case 135:
         VAR_16->frameNextMethod = VAR_2;

         if (VAR_16->timeout == -1)
            VAR_16->timeout = 0;

         break;

      case 132:
         VAR_16->frameNextMethod = VAR_3;

         FUNC_6(VAR_8, VAR_12);

         if (VAR_16->timeout == -1)
            VAR_16->timeout = 0;

         break;

      case 137:
         VAR_16->burstCaptureMode=1;
         break;

      case 133:
         if (VAR_16->encoding)
         {
            FUNC_0(VAR_13, "--luma and --rgb are mutually exclusive\n");
            VAR_17 = 0;
         }
         VAR_16->onlyLuma = 1;
         break;

      case 129:
         if (VAR_16->onlyLuma)
         {
            FUNC_0(VAR_13, "--luma and --rgb/--bgr are mutually exclusive\n");
            VAR_17 = 0;
         }
         VAR_16->encoding = VAR_6;
         break;

      default:
      {



         const char *VAR_22 = (VAR_18 + 1 < VAR_14) ? VAR_15[VAR_18 + 1] : ((void*)0);

         int VAR_23 = (FUNC_2(&VAR_16->camera_parameters, &VAR_15[VAR_18][1], VAR_22));


         if (!VAR_23)
            VAR_23 = FUNC_4(&VAR_16->common_settings, &VAR_15[VAR_18][1], VAR_22, &VAR_9);


         if (!VAR_23)
            VAR_23 = FUNC_5(&VAR_16->preview_parameters, &VAR_15[VAR_18][1], VAR_22);


         if (!VAR_23)
            VAR_17 = 0;
         else
            VAR_18 += VAR_23 - 1;

         break;
      }
      }
   }

   if (!VAR_17)
   {
      FUNC_0(VAR_13, "Invalid command line option (%s)\n", VAR_15[VAR_18-1]);
      return 1;
   }

   return 0;
}
