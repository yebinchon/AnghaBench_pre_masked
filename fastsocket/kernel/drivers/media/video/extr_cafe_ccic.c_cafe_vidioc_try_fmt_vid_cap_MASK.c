
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_pix_format {int bytesperline; int width; int sizeimage; int height; int pixelformat; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct TYPE_2__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct cafe_format_struct {int bpp; int mbus_code; int pixelformat; } ;
struct cafe_camera {int s_mutex; } ;


 struct cafe_format_struct* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct cafe_camera*,int ,int ,struct v4l2_mbus_framefmt*) ;
 int VAR_0 ;
 int FUNC_4 (struct v4l2_mbus_framefmt*,struct v4l2_pix_format*,int ) ;
 int FUNC_5 (struct v4l2_pix_format*,struct v4l2_mbus_framefmt*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(struct file *VAR_2, void *VAR_3,
  struct v4l2_format *VAR_4)
{
 struct cafe_camera *VAR_5 = VAR_3;
 struct cafe_format_struct *VAR_6;
 struct v4l2_pix_format *VAR_7 = &VAR_4->fmt.pix;
 struct v4l2_mbus_framefmt VAR_8;
 int VAR_9;

 VAR_6 = FUNC_0(VAR_7->pixelformat);
 VAR_7->pixelformat = VAR_6->pixelformat;
 FUNC_4(&VAR_8, VAR_7, VAR_6->mbus_code);
 FUNC_1(&VAR_5->s_mutex);
 VAR_9 = FUNC_3(VAR_5, VAR_1, VAR_0, &VAR_8);
 FUNC_2(&VAR_5->s_mutex);
 FUNC_5(VAR_7, &VAR_8);
 VAR_7->bytesperline = VAR_7->width * VAR_6->bpp;
 VAR_7->sizeimage = VAR_7->height * VAR_7->bytesperline;
 return VAR_9;
}
