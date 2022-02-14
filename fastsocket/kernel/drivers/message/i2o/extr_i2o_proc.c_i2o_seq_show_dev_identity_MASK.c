
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


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct i2o_device*,int,int,int **,int) ;
 int FUNC_3 (struct seq_file*,int,char*) ;
 int FUNC_4 (struct seq_file*,int *,int) ;
 int FUNC_5 (struct seq_file*,char*,...) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_0, void *VAR_1)
{
 struct i2o_device *VAR_2 = (struct i2o_device *)VAR_0->private;
 static u32 VAR_3[128];

 static u16 *VAR_4 = (u16 *) VAR_3;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2, 0xF100, -1, &VAR_3, sizeof(VAR_3));

 if (VAR_5 < 0) {
  FUNC_3(VAR_0, VAR_5, "0xF100 Device Identity");
  return 0;
 }

 FUNC_5(VAR_0, "Device Class  : %s\n", FUNC_1(VAR_4[0]));
 FUNC_5(VAR_0, "Owner TID     : %0#5x\n", VAR_4[2]);
 FUNC_5(VAR_0, "Parent TID    : %0#5x\n", VAR_4[3]);
 FUNC_5(VAR_0, "Vendor info   : %s\n",
     FUNC_0((u8 *) (VAR_3 + 2), 16));
 FUNC_5(VAR_0, "Product info  : %s\n",
     FUNC_0((u8 *) (VAR_3 + 6), 16));
 FUNC_5(VAR_0, "Description   : %s\n",
     FUNC_0((u8 *) (VAR_3 + 10), 16));
 FUNC_5(VAR_0, "Product rev.  : %s\n",
     FUNC_0((u8 *) (VAR_3 + 14), 8));

 FUNC_5(VAR_0, "Serial number : ");
 FUNC_4(VAR_0, (u8 *) (VAR_3 + 16),



       sizeof(VAR_3) - (16 * sizeof(u32)) - 2);
 FUNC_5(VAR_0, "\n");

 return 0;
}
