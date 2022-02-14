
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct TYPE_4__ {int * cam_mode; } ;
struct gspca_dev {int curr_mode; TYPE_2__ cam; } ;
struct file {int dummy; } ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1,
       struct v4l2_format *VAR_2)
{
 struct gspca_dev *VAR_3 = VAR_1;
 int VAR_4;

 VAR_4 = VAR_3->curr_mode;
 FUNC_0(&VAR_2->fmt.pix, &VAR_3->cam.cam_mode[VAR_4],
  sizeof VAR_2->fmt.pix);
 return 0;
}
