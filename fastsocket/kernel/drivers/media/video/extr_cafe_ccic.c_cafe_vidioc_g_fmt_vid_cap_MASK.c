
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct cafe_camera {int pix_format; } ;



__attribute__((used)) static int FUNC_0(struct file *VAR_0, void *VAR_1,
  struct v4l2_format *VAR_2)
{
 struct cafe_camera *VAR_3 = VAR_1;

 VAR_2->fmt.pix = VAR_3->pix_format;
 return 0;
}
