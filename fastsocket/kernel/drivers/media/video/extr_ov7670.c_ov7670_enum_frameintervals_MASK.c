
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int numerator; int denominator; } ;
struct v4l2_frmivalenum {size_t index; TYPE_1__ discrete; int type; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_3,
  struct v4l2_frmivalenum *VAR_4)
{
 if (VAR_4->index >= FUNC_0(VAR_2))
  return -VAR_0;
 VAR_4->type = VAR_1;
 VAR_4->discrete.numerator = 1;
 VAR_4->discrete.denominator = VAR_2[VAR_4->index];
 return 0;
}
