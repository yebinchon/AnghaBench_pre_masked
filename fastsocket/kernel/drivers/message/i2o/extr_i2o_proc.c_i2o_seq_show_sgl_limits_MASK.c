
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int work32 ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct seq_file {scalar_t__ private; } ;
struct i2o_device {int dummy; } ;


 int FUNC_0 (struct i2o_device*,int,int,int **,int) ;
 int FUNC_1 (struct seq_file*,int,char*) ;
 int FUNC_2 (struct seq_file*,char*,...) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct i2o_device *VAR_2 = (struct i2o_device *)VAR_0->private;
 static u32 VAR_3[12];
 static u16 *VAR_4 = (u16 *) VAR_3;
 static u8 *VAR_5 = (u8 *) VAR_3;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2, 0xF103, -1, &VAR_3, sizeof(VAR_3));

 if (VAR_6 < 0) {
  FUNC_1(VAR_0, VAR_6,
     "0xF103 SGL Operating Limits");
  return 0;
 }

 FUNC_2(VAR_0, "SGL chain size        : %d\n", VAR_3[0]);
 FUNC_2(VAR_0, "Max SGL chain size    : %d\n", VAR_3[1]);
 FUNC_2(VAR_0, "SGL chain size target : %d\n", VAR_3[2]);
 FUNC_2(VAR_0, "SGL frag count        : %d\n", VAR_4[6]);
 FUNC_2(VAR_0, "Max SGL frag count    : %d\n", VAR_4[7]);
 FUNC_2(VAR_0, "SGL frag count target : %d\n", VAR_4[8]);





 FUNC_2(VAR_0, "SGL data alignment    : %d\n", VAR_4[8]);
 FUNC_2(VAR_0, "SGL addr limit        : %d\n", VAR_5[20]);
 FUNC_2(VAR_0, "SGL addr sizes supported : ");
 if (VAR_5[21] & 0x01)
  FUNC_2(VAR_0, "32 bit ");
 if (VAR_5[21] & 0x02)
  FUNC_2(VAR_0, "64 bit ");
 if (VAR_5[21] & 0x04)
  FUNC_2(VAR_0, "96 bit ");
 if (VAR_5[21] & 0x08)
  FUNC_2(VAR_0, "128 bit ");
 FUNC_2(VAR_0, "\n");




 return 0;
}
