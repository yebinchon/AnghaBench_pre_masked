
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_16__ {char const* format; int encoding; } ;
struct TYPE_15__ {int verbose; } ;
struct TYPE_11__ {int height; int width; int y; int x; } ;
struct TYPE_14__ {int opacity; TYPE_2__ previewWindow; } ;
struct TYPE_13__ {int verbose; int opacity; int preview_height; int preview_width; int preview_y; int preview_x; int height; int width; int y; int x; int gl_win_defined; } ;
struct TYPE_10__ {int quality; int height; int width; int enable; } ;
struct TYPE_12__ {int quality; int wantRAW; int frameStart; int datetime; int timestamp; int timeout; int demoInterval; int demoMode; int timelapse; int fullResPreview; int useGL; int glCapture; int burstCaptureMode; int restart_interval; TYPE_7__ common_settings; TYPE_5__ raspitex_state; TYPE_6__ preview_parameters; int camera_parameters; int frameNextMethod; int enableExifTags; int encoding; TYPE_1__ thumbnailConfig; int linkname; } ;
typedef TYPE_3__ RASPISTILL_STATE ;
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
 TYPE_9__* VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char const*,char const*) ;
 int FUNC_3 (int ,int ,char const*,int*) ;
 int FUNC_4 (TYPE_7__*,char const*,char const*,int *) ;
 int FUNC_5 (TYPE_6__*,char const*,char const*) ;
 int FUNC_6 (TYPE_5__*,char const*,char const*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char const*,char*,int*,...) ;
 int VAR_14 ;
 int FUNC_9 (TYPE_3__*,char const*) ;
 int FUNC_10 (char const*,char const*) ;
 int FUNC_11 (char const*) ;
 int FUNC_12 (int ,char const*,int) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(int VAR_15, const char **VAR_16, RASPISTILL_STATE *VAR_17)
{



   int VAR_18 = 1;
   int VAR_19;

   for (VAR_19 = 1; VAR_19 < VAR_15 && VAR_18; VAR_19++)
   {
      int VAR_20, VAR_21;

      if (!VAR_16[VAR_19])
         continue;

      if (VAR_16[VAR_19][0] != '-')
      {
         VAR_18 = 0;
         continue;
      }


      VAR_18 = 1;

      VAR_20 = FUNC_3(VAR_9, VAR_10, &VAR_16[VAR_19][1], &VAR_21);


      if (VAR_20 != -1 && VAR_21 > 0 && (VAR_19 + 1 >= VAR_15) )
         continue;


      switch (VAR_20)
      {
      case 135:
         if (FUNC_8(VAR_16[VAR_19 + 1], "%u", &VAR_17->quality) == 1)
         {
            if (VAR_17->quality > 100)
            {
               FUNC_0(VAR_14, "Setting max quality = 100\n");
               VAR_17->quality = 100;
            }
            VAR_19++;
         }
         else
            VAR_18 = 0;
         break;

      case 134:
         VAR_17->wantRAW = 1;
         break;

      case 136 :
      {
         int VAR_22 = FUNC_11(VAR_16[VAR_19+1]);
         if (VAR_22)
         {
            VAR_17->linkname = FUNC_1(VAR_22 + 10);
            FUNC_13(VAR_17->linkname);
            if (VAR_17->linkname)
               FUNC_12(VAR_17->linkname, VAR_16[VAR_19 + 1], VAR_22+1);
            VAR_19++;
         }
         else
            VAR_18 = 0;
         break;

      }

      case 141:
      {
         if (FUNC_8(VAR_16[VAR_19 + 1], "%d", &VAR_17->frameStart) == 1)
         {
            VAR_19++;
         }
         else
            VAR_18 = 0;
         break;
      }

      case 145:
         VAR_17->datetime = 1;
         break;

      case 130:
         VAR_17->timestamp = 1;
         break;

      case 128:
      {
         if (FUNC_8(VAR_16[VAR_19 + 1], "%d", &VAR_17->timeout) == 1)
         {

            if (VAR_17->timeout == 0 && VAR_17->frameNextMethod == VAR_4)
               VAR_17->frameNextMethod = VAR_0;

            VAR_19++;
         }
         else
            VAR_18 = 0;
         break;
      }

      case 131 :
         if ( FUNC_10( VAR_16[ VAR_19 + 1 ], "none" ) == 0 )
         {
            VAR_17->thumbnailConfig.enable = 0;
         }
         else
         {
            FUNC_8(VAR_16[VAR_19 + 1], "%d:%d:%d",
                   &VAR_17->thumbnailConfig.width,
                   &VAR_17->thumbnailConfig.height,
                   &VAR_17->thumbnailConfig.quality);
         }
         VAR_19++;
         break;

      case 144:
      {


         if (VAR_19 + 1 < VAR_15 && VAR_16[VAR_19+1][0] != '-')
         {
            if (FUNC_8(VAR_16[VAR_19 + 1], "%u", &VAR_17->demoInterval) == 1)
            {

               VAR_17->demoMode = 1;
               VAR_19++;
            }
            else
               VAR_18 = 0;
         }
         else
         {
            VAR_17->demoMode = 1;
         }

         break;
      }

      case 143 :
      {
         int VAR_23 = FUNC_11(VAR_16[VAR_19 + 1]);
         VAR_18 = 0;

         if (VAR_23)
         {
            int VAR_24;
            for (VAR_24=0; VAR_24<VAR_13; VAR_24++)
            {
               if (FUNC_10(VAR_12[VAR_24].format, VAR_16[VAR_19+1]) == 0)
               {
                  VAR_17->encoding = VAR_12[VAR_24].encoding;
                  VAR_18 = 1;
                  VAR_19++;
                  break;
               }
            }
         }
         break;
      }

      case 142:
         if ( FUNC_10( VAR_16[ VAR_19 + 1 ], "none" ) == 0 )
         {
            VAR_17->enableExifTags = 0;
         }
         else
         {
            FUNC_9(VAR_17, VAR_16[VAR_19+1]);
         }
         VAR_19++;
         break;

      case 129:
         if (FUNC_8(VAR_16[VAR_19 + 1], "%u", &VAR_17->timelapse) != 1)
            VAR_18 = 0;
         else
         {
            if (VAR_17->timelapse)
               VAR_17->frameNextMethod = VAR_5;
            else
               VAR_17->frameNextMethod = VAR_1;

            VAR_19++;
         }
         break;

      case 140:
         VAR_17->fullResPreview = 1;
         break;

      case 137:
         VAR_17->frameNextMethod = VAR_2;

         if (VAR_17->timeout == -1)
            VAR_17->timeout = 0;

         break;

      case 132:
         VAR_17->frameNextMethod = VAR_3;

         FUNC_7(VAR_6, VAR_11);
         FUNC_7(VAR_7, VAR_11);

         if (VAR_17->timeout == -1)
            VAR_17->timeout = 0;

         break;

      case 139:
         VAR_17->useGL = 1;
         break;

      case 138:
         VAR_17->glCapture = 1;
         break;

      case 146:
         VAR_17->burstCaptureMode=1;
         break;

      case 133:
      {
         if (FUNC_8(VAR_16[VAR_19 + 1], "%u", &VAR_17->restart_interval) == 1)
         {
            VAR_19++;
         }
         else
            VAR_18 = 0;
         break;
      }

      default:
      {



         const char *VAR_25 = (VAR_19 + 1 < VAR_15) ? VAR_16[VAR_19 + 1] : ((void*)0);
         int VAR_26 = FUNC_2(&VAR_17->camera_parameters, &VAR_16[VAR_19][1], VAR_25);


         if (!VAR_26)
            VAR_26 = FUNC_4(&VAR_17->common_settings, &VAR_16[VAR_19][1], VAR_25, &VAR_8);


         if (!VAR_26)
            VAR_26 = FUNC_5(&VAR_17->preview_parameters, &VAR_16[VAR_19][1], VAR_25);


         if (!VAR_26)
            VAR_26 = FUNC_6(&VAR_17->raspitex_state, &VAR_16[VAR_19][1], VAR_25);


         if (!VAR_26)
            VAR_18 = 0;
         else
            VAR_19 += VAR_26 - 1;

         break;
      }
      }
   }


   if (! VAR_17->raspitex_state.gl_win_defined)
   {
      VAR_17->raspitex_state.x = VAR_17->preview_parameters.previewWindow.x;
      VAR_17->raspitex_state.y = VAR_17->preview_parameters.previewWindow.y;
      VAR_17->raspitex_state.width = VAR_17->preview_parameters.previewWindow.width;
      VAR_17->raspitex_state.height = VAR_17->preview_parameters.previewWindow.height;
   }


   VAR_17->raspitex_state.preview_x = VAR_17->preview_parameters.previewWindow.x;
   VAR_17->raspitex_state.preview_y = VAR_17->preview_parameters.previewWindow.y;
   VAR_17->raspitex_state.preview_width = VAR_17->preview_parameters.previewWindow.width;
   VAR_17->raspitex_state.preview_height = VAR_17->preview_parameters.previewWindow.height;
   VAR_17->raspitex_state.opacity = VAR_17->preview_parameters.opacity;
   VAR_17->raspitex_state.verbose = VAR_17->common_settings.verbose;

   if (!VAR_18)
   {
      FUNC_0(VAR_14, "Invalid command line option (%s)\n", VAR_16[VAR_19-1]);
      return 1;
   }

   return 0;
}
