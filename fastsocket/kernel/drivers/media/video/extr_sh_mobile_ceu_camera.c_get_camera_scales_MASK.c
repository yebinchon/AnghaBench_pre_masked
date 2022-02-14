
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_rect {int height; int width; } ;
struct TYPE_3__ {int height; int width; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; int type; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct v4l2_subdev*,int ,int ,struct v4l2_format*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_3, struct v4l2_rect *VAR_4,
        unsigned int *VAR_5, unsigned int *VAR_6)
{
 struct v4l2_format VAR_7;
 int VAR_8;

 VAR_7.type = VAR_0;

 VAR_8 = FUNC_1(VAR_3, VAR_2, VAR_1, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 *VAR_5 = FUNC_0(VAR_4->width, VAR_7.fmt.pix.width);
 *VAR_6 = FUNC_0(VAR_4->height, VAR_7.fmt.pix.height);

 return 0;
}
