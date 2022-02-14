
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct ath5k_hw* private; } ;
struct reg {int addr; int name; } ;
struct ath5k_hw {int dummy; } ;


 int FUNC_0 (struct ath5k_hw*,int ) ;
 int FUNC_1 (struct seq_file*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct ath5k_hw *VAR_2 = VAR_0->private;
 struct reg *VAR_3 = VAR_1;
 FUNC_1(VAR_0, "%-25s0x%08x\n", VAR_3->name,
  FUNC_0(VAR_2, VAR_3->addr));
 return 0;
}
