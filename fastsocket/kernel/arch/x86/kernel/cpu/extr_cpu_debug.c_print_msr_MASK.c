
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {struct cpu_private* private; } ;
struct cpu_private {unsigned int cpu; unsigned int reg; scalar_t__ file; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int,unsigned int*,unsigned int*,int,unsigned int) ;
 int FUNC_2 (struct seq_file*,unsigned int,int ,int ) ;
 scalar_t__ FUNC_3 (unsigned int,unsigned int,int *,int *) ;

__attribute__((used)) static void FUNC_4(struct seq_file *VAR_1, unsigned VAR_2, unsigned VAR_3)
{
 unsigned VAR_4, VAR_5, VAR_6;
 struct cpu_private *VAR_7;
 u32 VAR_8, VAR_9;
 int VAR_10;

 if (VAR_1) {
  VAR_7 = VAR_1->private;
  if (VAR_7->file) {
   if (!FUNC_3(VAR_7->cpu, VAR_7->reg,
            &VAR_8, &VAR_9))
    FUNC_2(VAR_1, VAR_7->reg, VAR_8, VAR_9);
   return;
  }
 }

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_0); VAR_10++) {
  if (!FUNC_1(VAR_2, &VAR_5, &VAR_6, VAR_10, VAR_3))
   continue;

  for (VAR_4 = VAR_5; VAR_4 <= VAR_6; VAR_4++) {
   if (FUNC_3(VAR_2, VAR_4, &VAR_8, &VAR_9))
    continue;
   FUNC_2(VAR_1, VAR_4, VAR_8, VAR_9);
  }
 }
}
