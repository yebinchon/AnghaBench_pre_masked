
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _pid {int dummy; } ;
struct cpudata {struct _pid pid; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct cpudata*) ;
 int FUNC_2 (struct cpudata*,int) ;
 int FUNC_3 (struct cpudata*,int) ;
 int FUNC_4 (struct _pid*,int) ;

__attribute__((used)) static inline void FUNC_5(struct cpudata *VAR_0)
{
 int VAR_1;
 struct _pid *VAR_2;
 signed int VAR_3 = 0;
 int VAR_4;

 VAR_2 = &VAR_0->pid;
 VAR_1 = FUNC_1(VAR_0);

 VAR_3 = FUNC_4(VAR_2, VAR_1);

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_3 < 0)
  FUNC_3(VAR_0, VAR_4);
 else
  FUNC_2(VAR_0, VAR_4);
}
