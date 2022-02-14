
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_queryctrl {scalar_t__ id; int flags; } ;
struct cx8802_dev {int params; int core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,struct v4l2_queryctrl*) ;
 scalar_t__ FUNC_1 (int ,struct v4l2_queryctrl*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct cx8802_dev *VAR_3, struct v4l2_queryctrl *VAR_4)
{
 VAR_4->id = FUNC_2(VAR_2, VAR_4->id);
 if (VAR_4->id == 0)
  return -VAR_0;


 if (FUNC_1(VAR_3->core, VAR_4) == 0)
  return 0;


 if (FUNC_0(&VAR_3->params, VAR_4))
  VAR_4->flags |= VAR_1;
 return 0;
}
