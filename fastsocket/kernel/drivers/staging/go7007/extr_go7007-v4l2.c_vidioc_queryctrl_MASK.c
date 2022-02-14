
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_queryctrl {int * name; } ;
struct go7007_file {struct go7007* go; } ;
struct go7007 {int i2c_adapter; int i2c_adapter_online; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,struct v4l2_queryctrl*) ;
 int FUNC_1 (struct v4l2_queryctrl*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
      struct v4l2_queryctrl *VAR_4)
{
 struct go7007 *VAR_5 = ((struct go7007_file *) VAR_3)->go;

 if (!VAR_5->i2c_adapter_online)
  return -VAR_0;

 FUNC_0(&VAR_5->i2c_adapter, VAR_1, VAR_4);

 return (!VAR_4->name[0]) ? FUNC_1(VAR_4) : 0;
}
