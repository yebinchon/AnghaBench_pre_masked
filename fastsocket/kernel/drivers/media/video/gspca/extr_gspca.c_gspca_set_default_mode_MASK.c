
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nmodes; struct gspca_ctrl* ctrls; TYPE_1__* cam_mode; } ;
struct gspca_dev {int curr_mode; TYPE_3__* sd_desc; TYPE_2__ cam; int pixfmt; int height; int width; } ;
struct gspca_ctrl {int def; int val; } ;
struct TYPE_6__ {int nctrls; } ;
struct TYPE_4__ {int pixelformat; int height; int width; } ;



__attribute__((used)) static void FUNC_0(struct gspca_dev *VAR_0)
{
 struct gspca_ctrl *VAR_1;
 int VAR_2;

 VAR_2 = VAR_0->cam.nmodes - 1;
 VAR_0->curr_mode = VAR_2;
 VAR_0->width = VAR_0->cam.cam_mode[VAR_2].width;
 VAR_0->height = VAR_0->cam.cam_mode[VAR_2].height;
 VAR_0->pixfmt = VAR_0->cam.cam_mode[VAR_2].pixelformat;



 VAR_1 = VAR_0->cam.ctrls;
 if (VAR_1 != ((void*)0)) {
  for (VAR_2 = 0;
       VAR_2 < VAR_0->sd_desc->nctrls;
       VAR_2++, VAR_1++)
   VAR_1->val = VAR_1->def;
 }
}
