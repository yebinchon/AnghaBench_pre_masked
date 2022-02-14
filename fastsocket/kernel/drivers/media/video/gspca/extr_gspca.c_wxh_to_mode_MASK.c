
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nmodes; TYPE_1__* cam_mode; } ;
struct gspca_dev {TYPE_2__ cam; } ;
struct TYPE_3__ {int width; int height; } ;



__attribute__((used)) static int FUNC_0(struct gspca_dev *VAR_0,
   int VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = VAR_0->cam.nmodes; --VAR_3 > 0; ) {
  if (VAR_1 >= VAR_0->cam.cam_mode[VAR_3].width
      && VAR_2 >= VAR_0->cam.cam_mode[VAR_3].height)
   break;
 }
 return VAR_3;
}
