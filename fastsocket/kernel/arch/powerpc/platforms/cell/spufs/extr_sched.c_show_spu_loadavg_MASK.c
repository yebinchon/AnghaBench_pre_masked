
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_6__ {TYPE_2__* nsproxy; } ;
struct TYPE_5__ {TYPE_1__* pid_ns; } ;
struct TYPE_4__ {int last_pid; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct seq_file*,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int* VAR_3 ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_4, void *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;

 VAR_6 = VAR_3[0] + (VAR_0/200);
 VAR_7 = VAR_3[1] + (VAR_0/200);
 VAR_8 = VAR_3[2] + (VAR_0/200);






 FUNC_4(VAR_4, "%d.%02d %d.%02d %d.%02d %ld/%d %d\n",
  FUNC_1(VAR_6), FUNC_0(VAR_6),
  FUNC_1(VAR_7), FUNC_0(VAR_7),
  FUNC_1(VAR_8), FUNC_0(VAR_8),
  FUNC_3(),
  FUNC_2(&VAR_2),
  VAR_1->nsproxy->pid_ns->last_pid);
 return 0;
}
