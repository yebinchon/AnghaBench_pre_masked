
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_queryctrl {int id; } ;
struct vcontrol {struct v4l2_queryctrl qc; } ;
struct v4l2_int_device {int dummy; } ;


 int VAR_0 ;
 struct vcontrol* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct v4l2_int_device *VAR_1,
    struct v4l2_queryctrl *VAR_2)
{
 struct vcontrol *VAR_3;

 VAR_3 = FUNC_0(VAR_2->id);

 if (VAR_3 == ((void*)0))
  return -VAR_0;

 *VAR_2 = VAR_3->qc;

 return 0;
}
