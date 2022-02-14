
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int work32 ;
typedef int u8 ;
typedef int u32 ;
typedef char* u16 ;
struct seq_file {scalar_t__ private; } ;
struct i2o_controller {int exec; } ;


 int FUNC_0 (int ,int,int,int**,int) ;
 int FUNC_1 (struct seq_file*,int,char*) ;
 int FUNC_2 (struct seq_file*,char*,...) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct i2o_controller *VAR_2 = (struct i2o_controller *)VAR_0->private;
 static u32 VAR_3[5];
 static u8 *VAR_4 = (u8 *) VAR_3;
 static u16 *VAR_5 = (u16 *) VAR_3;
 int VAR_6;
 u32 VAR_7;

 static char *VAR_8[] = {
  "Intel 80960 series",
  "AMD2900 series",
  "Motorola 68000 series",
  "ARM series",
  "MIPS series",
  "Sparc series",
  "PowerPC series",
  "Intel x86 series"
 };

 VAR_6 =
     FUNC_0(VAR_2->exec, 0x0000, -1, &VAR_3, sizeof(VAR_3));

 if (VAR_6 < 0) {
  FUNC_1(VAR_0, VAR_6, "0x0000 IOP Hardware");
  return 0;
 }

 FUNC_2(VAR_0, "I2O Vendor ID    : %0#6x\n", VAR_5[0]);
 FUNC_2(VAR_0, "Product ID       : %0#6x\n", VAR_5[1]);
 FUNC_2(VAR_0, "CPU              : ");
 if (VAR_4[16] > 8)
  FUNC_2(VAR_0, "Unknown\n");
 else
  FUNC_2(VAR_0, "%s\n", VAR_8[VAR_4[16]]);


 FUNC_2(VAR_0, "RAM              : %dkB\n", VAR_3[1] >> 10);
 FUNC_2(VAR_0, "Non-Volatile Mem : %dkB\n", VAR_3[2] >> 10);

 VAR_7 = VAR_3[3];
 FUNC_2(VAR_0, "Capabilities : 0x%08x\n", VAR_7);
 FUNC_2(VAR_0, "   [%s] Self booting\n",
     (VAR_7 & 0x00000001) ? "+" : "-");
 FUNC_2(VAR_0, "   [%s] Upgradable IRTOS\n",
     (VAR_7 & 0x00000002) ? "+" : "-");
 FUNC_2(VAR_0, "   [%s] Supports downloading DDMs\n",
     (VAR_7 & 0x00000004) ? "+" : "-");
 FUNC_2(VAR_0, "   [%s] Supports installing DDMs\n",
     (VAR_7 & 0x00000008) ? "+" : "-");
 FUNC_2(VAR_0, "   [%s] Battery-backed RAM\n",
     (VAR_7 & 0x00000010) ? "+" : "-");

 return 0;
}
