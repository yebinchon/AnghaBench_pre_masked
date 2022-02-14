
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int x; int y; int width; int height; } ;
struct TYPE_5__ {int opacity; TYPE_1__ previewWindow; scalar_t__ wantFullScreenPreview; scalar_t__ wantPreview; } ;
typedef TYPE_2__ RASPIPREVIEW_PARAMETERS ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;

void FUNC_1(RASPIPREVIEW_PARAMETERS *VAR_1)
{
   FUNC_0(VAR_0, "Preview %s, Full screen %s\n", VAR_1->wantPreview ? "Yes" : "No",
           VAR_1->wantFullScreenPreview ? "Yes" : "No");

   FUNC_0(VAR_0, "Preview window %d,%d,%d,%d\nOpacity %d\n", VAR_1->previewWindow.x,
           VAR_1->previewWindow.y, VAR_1->previewWindow.width,
           VAR_1->previewWindow.height, VAR_1->opacity);
}
