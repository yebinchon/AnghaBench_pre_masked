
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct fadump_reg_entry {scalar_t__ reg_id; int reg_value; } ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (struct pt_regs*,scalar_t__,int ) ;
 int FUNC_2 (struct pt_regs*,int ,int) ;

__attribute__((used)) static struct fadump_reg_entry*
FUNC_3(struct fadump_reg_entry *VAR_0, struct pt_regs *VAR_1)
{
 FUNC_2(VAR_1, 0, sizeof(struct pt_regs));

 while (VAR_0->reg_id != FUNC_0("CPUEND")) {
  FUNC_1(VAR_1, VAR_0->reg_id,
     VAR_0->reg_value);
  VAR_0++;
 }
 VAR_0++;
 return VAR_0;
}
