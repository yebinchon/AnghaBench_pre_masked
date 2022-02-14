
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int width; int height; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_5__ {int wantPreview; int wantFullScreenPreview; int opacity; int * preview_component; TYPE_1__ previewWindow; } ;
typedef TYPE_2__ RASPIPREVIEW_PARAMETERS ;



void FUNC_0(RASPIPREVIEW_PARAMETERS *VAR_0)
{
   VAR_0->wantPreview = 1;
   VAR_0->wantFullScreenPreview = 1;
   VAR_0->opacity = 255;
   VAR_0->previewWindow.x = 0;
   VAR_0->previewWindow.y = 0;
   VAR_0->previewWindow.width = 1024;
   VAR_0->previewWindow.height = 768;
   VAR_0->preview_component = ((void*)0);
}
