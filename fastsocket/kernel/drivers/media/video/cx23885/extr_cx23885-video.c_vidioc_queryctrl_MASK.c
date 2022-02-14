
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_queryctrl {scalar_t__ id; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_queryctrl*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3,
    struct v4l2_queryctrl *VAR_4)
{
 VAR_4->id = FUNC_2(VAR_1, VAR_4->id);
 if (FUNC_1(VAR_4->id == 0))
  return -VAR_0;
 return FUNC_0(VAR_4);
}
