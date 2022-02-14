
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int height; int width; int y; int x; } ;
struct TYPE_5__ {int wantPreview; int wantFullScreenPreview; int opacity; TYPE_1__ previewWindow; } ;
typedef TYPE_2__ RASPIPREVIEW_PARAMETERS ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char const*,int*) ;
 int FUNC_1 (char const*,char*,int*,...) ;

int FUNC_2(RASPIPREVIEW_PARAMETERS *VAR_2, const char *VAR_3, const char *VAR_4)
{
   int VAR_5, VAR_6 = 0, VAR_7;

   if (!VAR_3)
      return 0;

   VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_3, &VAR_7);


   if (VAR_5==-1 || (VAR_5 != -1 && VAR_7 > 0 && VAR_4 == ((void*)0)))
      return 0;

   switch (VAR_5)
   {
   case 128:
   {
      int VAR_8;

      VAR_2->wantPreview = 1;

      VAR_8 = FUNC_1(VAR_4, "%d,%d,%d,%d",
                   &VAR_2->previewWindow.x, &VAR_2->previewWindow.y,
                   &VAR_2->previewWindow.width, &VAR_2->previewWindow.height);


      if (VAR_8 == 0)
         VAR_2->wantFullScreenPreview = 1;
      else
         VAR_2->wantFullScreenPreview = 0;

      VAR_6 = 2;

      break;
   }

   case 130:
      VAR_2->wantPreview = 1;
      VAR_2->wantFullScreenPreview = 1;

      VAR_6 = 1;
      break;

   case 129:
      if (FUNC_1(VAR_4, "%u", &VAR_2->opacity) != 1)
         VAR_2->opacity = 255;
      else
         VAR_6 = 2;
      break;

   case 131:
      VAR_2->wantPreview = 0;
      VAR_6 = 1;
      break;
   }

   return VAR_6;
}
