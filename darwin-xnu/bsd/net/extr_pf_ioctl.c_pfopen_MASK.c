
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int dummy; } ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int
FUNC_3(dev_t VAR_6, int VAR_7, int VAR_8, struct proc *VAR_9)
{
#pragma unused(flags, fmt, p)
 if (FUNC_2(VAR_6) >= VAR_2)
  return (VAR_1);

 if (FUNC_2(VAR_6) == VAR_3) {
  FUNC_0(VAR_4);
  if (VAR_5 != 0) {
   FUNC_1(VAR_4);
   return (VAR_0);
  }
  VAR_5++;
  FUNC_1(VAR_4);
 }
 return (0);
}
