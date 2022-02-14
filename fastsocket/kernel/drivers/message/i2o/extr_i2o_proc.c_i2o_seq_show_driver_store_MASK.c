
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int work32 ;
typedef int u32 ;
struct seq_file {scalar_t__ private; } ;
struct i2o_controller {int exec; } ;


 int FUNC_0 (int ,int,int,int**,int) ;
 int FUNC_1 (struct seq_file*,int,char*) ;
 int FUNC_2 (struct seq_file*,char*,int,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct i2o_controller *VAR_2 = (struct i2o_controller *)VAR_0->private;
 u32 VAR_3[8];
 int VAR_4;

 VAR_4 =
     FUNC_0(VAR_2->exec, 0x0004, -1, &VAR_3, sizeof(VAR_3));
 if (VAR_4 < 0) {
  FUNC_1(VAR_0, VAR_4, "0x0004 Driver Store");
  return 0;
 }

 FUNC_2(VAR_0, "Module limit  : %d\n"
     "Module count  : %d\n"
     "Current space : %d kB\n"
     "Free space    : %d kB\n",
     VAR_3[0], VAR_3[1], VAR_3[2] >> 10, VAR_3[3] >> 10);

 return 0;
}
