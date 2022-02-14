
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct proc {int dummy; } ;
typedef int dev_t ;
typedef int caddr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int*) ;

int
FUNC_2(dev_t VAR_0, u_long VAR_1, caddr_t VAR_2, int VAR_3, struct proc *VAR_4)
{
#pragma unused(dev,fflag,p)
 int VAR_5, VAR_6 = 0;

 VAR_5 = FUNC_1(VAR_1, VAR_2, &VAR_6);

 if (VAR_5 != 0) {
  FUNC_0( (VAR_5 & 0xfffff000) == 0 );
  return (VAR_5 & 0xfff);
 } else if (VAR_6 != 0) {
  FUNC_0( (VAR_6 & 0xfff00000) == 0 );
  return (((VAR_6 & 0xfffff) << 12));
 } else
  return 0;
}
