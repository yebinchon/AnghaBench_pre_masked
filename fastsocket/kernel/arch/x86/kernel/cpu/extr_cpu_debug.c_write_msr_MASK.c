
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct cpu_private {int reg; int cpu; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct cpu_private *VAR_1, u64 VAR_2)
{
 u32 VAR_3, VAR_4;

 VAR_4 = (VAR_2 >> 32) & 0xffffffff;
 VAR_3 = VAR_2 & 0xffffffff;

 if (!FUNC_0(VAR_1->cpu, VAR_1->reg, VAR_3, VAR_4))
  return 0;

 return -VAR_0;
}
