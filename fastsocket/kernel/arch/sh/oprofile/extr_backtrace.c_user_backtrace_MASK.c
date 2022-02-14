
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long*,unsigned long*,int) ;
 int FUNC_1 (int ,unsigned long*,int) ;
 int FUNC_2 (unsigned long) ;

__attribute__((used)) static unsigned long *
FUNC_3(unsigned long *VAR_1, struct pt_regs *VAR_2)
{
 unsigned long VAR_3;


 if (!FUNC_1(VAR_0, VAR_1, sizeof(unsigned long)))
  return ((void*)0);

 if (FUNC_0(&VAR_3, VAR_1, sizeof(unsigned long)))
  return ((void*)0);


 if (VAR_3 & 3)
  return ((void*)0);

 FUNC_2(VAR_3);

 VAR_1++;

 return VAR_1;
}
