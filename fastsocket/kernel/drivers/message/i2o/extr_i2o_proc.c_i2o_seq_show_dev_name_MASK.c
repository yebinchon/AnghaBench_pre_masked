
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {scalar_t__ private; } ;
struct i2o_device {int device; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct i2o_device *VAR_2 = (struct i2o_device *)VAR_0->private;

 FUNC_1(VAR_0, "%s\n", FUNC_0(&VAR_2->device));

 return 0;
}
