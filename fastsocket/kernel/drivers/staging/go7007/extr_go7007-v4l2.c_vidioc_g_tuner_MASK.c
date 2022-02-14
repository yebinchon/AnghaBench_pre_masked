
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_tuner {scalar_t__ index; } ;
struct go7007_file {struct go7007* go; } ;
struct go7007 {int i2c_adapter; int i2c_adapter_online; TYPE_1__* board_info; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,struct v4l2_tuner*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_4, void *VAR_5,
    struct v4l2_tuner *VAR_6)
{
 struct go7007 *VAR_7 = ((struct go7007_file *) VAR_5)->go;

 if (!(VAR_7->board_info->flags & VAR_2))
  return -VAR_0;
 if (VAR_6->index != 0)
  return -VAR_0;
 if (!VAR_7->i2c_adapter_online)
  return -VAR_1;

 FUNC_0(&VAR_7->i2c_adapter, VAR_3, VAR_6);

 VAR_6->index = 0;
 return 0;
}
