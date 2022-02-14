
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ulong ;
struct i2o_cfg_info {scalar_t__ q_id; int fasync; struct i2o_cfg_info* next; } ;
struct file {int private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct file*,int,int *) ;
 int FUNC_1 () ;
 struct i2o_cfg_info* VAR_1 ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(int VAR_2, struct file *VAR_3, int VAR_4)
{
 ulong VAR_5 = (ulong) VAR_3->private_data;
 struct i2o_cfg_info *VAR_6;
 int VAR_7 = -VAR_0;

 FUNC_1();
 for (VAR_6 = VAR_1; VAR_6; VAR_6 = VAR_6->next)
  if (VAR_6->q_id == VAR_5)
   break;

 if (VAR_6)
  VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, &VAR_6->fasync);
 FUNC_2();
 return VAR_7;
}
