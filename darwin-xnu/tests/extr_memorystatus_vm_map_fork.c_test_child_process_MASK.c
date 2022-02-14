
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rusage {int dummy; } ;
typedef int pid_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,int ,int ) ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (char*,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int*,int ,struct rusage*) ;

__attribute__((used)) static void
FUNC_5(pid_t VAR_2, int *VAR_3, struct rusage *VAR_4)
{
 int VAR_5 = 0;
 pid_t VAR_6;

 FUNC_2("  continuing child[%d]\n", VAR_2);

 VAR_5 = FUNC_3(VAR_2, VAR_0);
 VAR_1; FUNC_1(VAR_5, "  kill(%d, SIGCONT) failed", VAR_2);

 FUNC_2("  waiting for child[%d] to exit", VAR_2);

 VAR_6 = FUNC_4(VAR_2, VAR_3, 0, VAR_4);
 VAR_1; FUNC_0(VAR_2, VAR_6, "  wait4(%d, ...) returned %d", VAR_2, VAR_6);
}
