
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct TYPE_3__ {int height; int width; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct em28xx_fh {struct em28xx* dev; } ;
struct em28xx {int norm; int v4l2_dev; int vscale; int hscale; int height; int width; } ;


 int FUNC_0 (struct em28xx*) ;
 int VAR_0 ;
 int FUNC_1 (struct em28xx*) ;
 int FUNC_2 (struct em28xx*,int ,int ,int *,int *) ;
 int VAR_1 ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int FUNC_4 (struct file*,void*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_2, void *VAR_3, v4l2_std_id *VAR_4)
{
 struct em28xx_fh *VAR_5 = VAR_3;
 struct em28xx *VAR_6 = VAR_5->dev;
 struct v4l2_format VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_6);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_6->norm = *VAR_4;


 VAR_7.fmt.pix.width = VAR_6->width;
 VAR_7.fmt.pix.height = VAR_6->height;
 FUNC_4(VAR_2, VAR_3, &VAR_7);


 VAR_6->width = VAR_7.fmt.pix.width;
 VAR_6->height = VAR_7.fmt.pix.height;
 FUNC_2(VAR_6, VAR_6->width, VAR_6->height, &VAR_6->hscale, &VAR_6->vscale);

 FUNC_1(VAR_6);
 FUNC_3(&VAR_6->v4l2_dev, 0, VAR_0, VAR_1, VAR_6->norm);

 return 0;
}
