
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int height; int width; scalar_t__ top; scalar_t__ left; } ;
struct v4l2_crop {int type; TYPE_1__ c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct v4l2_subdev *VAR_3, struct v4l2_crop *VAR_4)
{
 VAR_4->c.left = 0;
 VAR_4->c.top = 0;
 VAR_4->c.width = VAR_2;
 VAR_4->c.height = VAR_1;
 VAR_4->type = VAR_0;

 return 0;
}
