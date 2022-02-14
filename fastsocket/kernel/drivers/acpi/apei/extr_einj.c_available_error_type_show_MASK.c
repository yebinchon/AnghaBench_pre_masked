
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {int dummy; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 int VAR_2;
 u32 VAR_3 = 0;

 VAR_2 = FUNC_0(&VAR_3);
 if (VAR_2)
  return VAR_2;
 if (VAR_3 & 0x0001)
  FUNC_1(VAR_0, "0x00000001\tProcessor Correctable\n");
 if (VAR_3 & 0x0002)
  FUNC_1(VAR_0, "0x00000002\tProcessor Uncorrectable non-fatal\n");
 if (VAR_3 & 0x0004)
  FUNC_1(VAR_0, "0x00000004\tProcessor Uncorrectable fatal\n");
 if (VAR_3 & 0x0008)
  FUNC_1(VAR_0, "0x00000008\tMemory Correctable\n");
 if (VAR_3 & 0x0010)
  FUNC_1(VAR_0, "0x00000010\tMemory Uncorrectable non-fatal\n");
 if (VAR_3 & 0x0020)
  FUNC_1(VAR_0, "0x00000020\tMemory Uncorrectable fatal\n");
 if (VAR_3 & 0x0040)
  FUNC_1(VAR_0, "0x00000040\tPCI Express Correctable\n");
 if (VAR_3 & 0x0080)
  FUNC_1(VAR_0, "0x00000080\tPCI Express Uncorrectable non-fatal\n");
 if (VAR_3 & 0x0100)
  FUNC_1(VAR_0, "0x00000100\tPCI Express Uncorrectable fatal\n");
 if (VAR_3 & 0x0200)
  FUNC_1(VAR_0, "0x00000200\tPlatform Correctable\n");
 if (VAR_3 & 0x0400)
  FUNC_1(VAR_0, "0x00000400\tPlatform Uncorrectable non-fatal\n");
 if (VAR_3 & 0x0800)
  FUNC_1(VAR_0, "0x00000800\tPlatform Uncorrectable fatal\n");

 return 0;
}
