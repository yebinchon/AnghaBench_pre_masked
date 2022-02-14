
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct proc {int p_fpdrainwait; } ;


 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*,int *,int,int,int*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct proc *VAR_0, u_int32_t *VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4 = 0;

 FUNC_0(VAR_0);
 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_2, &VAR_4, 0);
 FUNC_1(VAR_0);
 if (VAR_4) {
  FUNC_3(&VAR_0->p_fpdrainwait);
 }
 return (VAR_3);
}
