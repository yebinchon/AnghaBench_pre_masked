
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct msm_device {int sync; } ;
struct file {struct msm_device* private_data; } ;


 unsigned int FUNC_0 (int ,struct file*,struct poll_table_struct*) ;

__attribute__((used)) static unsigned int FUNC_1(struct file *VAR_0,
 struct poll_table_struct *VAR_1)
{
 struct msm_device *VAR_2 = VAR_0->private_data;
 return FUNC_0(VAR_2->sync, VAR_0, VAR_1);
}
