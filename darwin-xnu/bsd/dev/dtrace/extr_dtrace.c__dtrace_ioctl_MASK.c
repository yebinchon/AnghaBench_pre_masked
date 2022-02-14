
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ user_addr_t ;
typedef scalar_t__ uint32_t ;
typedef int u_long ;
struct proc {int dummy; } ;
typedef int dev_t ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,scalar_t__,int,int ,int*) ;
 scalar_t__ FUNC_3 (struct proc*) ;

int
FUNC_4(dev_t VAR_0, u_long VAR_1, caddr_t VAR_2, int VAR_3, struct proc *VAR_4)
{
#pragma unused(p)
 int VAR_5, VAR_6 = 0;
    user_addr_t VAR_7;

    if (FUNC_3(VAR_4))
  VAR_7 = *(user_addr_t *)VAR_2;
 else
  VAR_7 = (user_addr_t) *(uint32_t *)VAR_2;

 VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_7, VAR_3, FUNC_1(), &VAR_6);


 if (VAR_5 != 0) {
  FUNC_0( (VAR_5 & 0xfffff000) == 0 );
  return (VAR_5 & 0xfff);
 } else if (VAR_6 != 0) {
  FUNC_0( (VAR_6 & 0xfff00000) == 0 );
  return (((VAR_6 & 0xfffff) << 12));
 } else
  return 0;
}
