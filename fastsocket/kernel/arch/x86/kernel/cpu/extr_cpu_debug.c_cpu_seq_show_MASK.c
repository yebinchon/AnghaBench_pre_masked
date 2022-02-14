
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct cpu_private* private; } ;
struct cpu_private {size_t type; int cpu; int file; } ;
struct TYPE_2__ {int flag; } ;






 int VAR_0 ;

 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct seq_file*,int ,int) ;
 int VAR_7 ;
 int FUNC_1 (struct seq_file*,char*) ;
 int FUNC_2 (int ,int ,struct seq_file*,int) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_8, void *VAR_9)
{
 struct cpu_private *VAR_10 = VAR_8->private;

 if (VAR_10 == ((void*)0))
  return -VAR_1;

 switch (VAR_2[VAR_10->type].flag) {
 case 128:
  FUNC_2(VAR_10->cpu, VAR_7, VAR_8, 1);
  break;
 case 131:
  FUNC_2(VAR_10->cpu, VAR_4, VAR_8, 1);
  break;
 case 129:
  FUNC_2(VAR_10->cpu, VAR_6, VAR_8, 1);
  break;
 case 130:
  if (VAR_10->file == VAR_0)
   FUNC_2(VAR_10->cpu, VAR_5, VAR_8, 1);
  FUNC_0(VAR_8, VAR_10->cpu, VAR_2[VAR_10->type].flag);
  break;
 case 132:
  if (VAR_10->file == VAR_0)
   FUNC_2(VAR_10->cpu, VAR_3, VAR_8, 1);
  FUNC_0(VAR_8, VAR_10->cpu, VAR_2[VAR_10->type].flag);
  break;

 default:
  FUNC_0(VAR_8, VAR_10->cpu, VAR_2[VAR_10->type].flag);
  break;
 }
 FUNC_1(VAR_8, "\n");

 return 0;
}
