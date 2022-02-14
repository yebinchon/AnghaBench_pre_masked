
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_queryctrl {scalar_t__* name; int id; } ;
struct v4l2_control {scalar_t__* name; int id; } ;
struct go7007_file {struct go7007* go; } ;
struct go7007 {int i2c_adapter; int i2c_adapter_online; } ;
struct file {int dummy; } ;
typedef int query ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,struct v4l2_queryctrl*) ;
 int FUNC_1 (struct v4l2_queryctrl*,int ,int) ;
 int FUNC_2 (struct v4l2_queryctrl*,struct go7007*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4,
    struct v4l2_control *VAR_5)
{
 struct go7007 *VAR_6 = ((struct go7007_file *) VAR_4)->go;
 struct v4l2_queryctrl VAR_7;

 if (!VAR_6->i2c_adapter_online)
  return -VAR_0;

 FUNC_1(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.id = VAR_5->id;
 FUNC_0(&VAR_6->i2c_adapter, VAR_2, &VAR_7);
 if (VAR_7.name[0] == 0)
  return FUNC_2(VAR_5, VAR_6);
 FUNC_0(&VAR_6->i2c_adapter, VAR_1, VAR_5);

 return 0;
}
