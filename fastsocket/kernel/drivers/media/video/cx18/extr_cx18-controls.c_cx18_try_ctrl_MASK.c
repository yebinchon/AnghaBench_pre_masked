
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_queryctrl {scalar_t__ type; int id; } ;
struct v4l2_ext_control {int id; } ;
struct file {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct file*,void*,struct v4l2_queryctrl*) ;
 int FUNC_1 (struct v4l2_ext_control*,struct v4l2_queryctrl*,char const* const*) ;
 char** FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2,
     struct v4l2_ext_control *VAR_3)
{
 struct v4l2_queryctrl VAR_4;
 const char * const *VAR_5 = ((void*)0);
 int VAR_6;

 VAR_4.id = VAR_3->id;
 VAR_6 = FUNC_0(VAR_1, VAR_2, &VAR_4);
 if (VAR_6)
  return VAR_6;
 if (VAR_4.type == VAR_0)
  VAR_5 = FUNC_2(VAR_4.id);
 return FUNC_1(VAR_3, &VAR_4, VAR_5);
}
