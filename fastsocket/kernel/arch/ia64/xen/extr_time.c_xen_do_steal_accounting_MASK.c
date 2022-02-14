
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_3(unsigned long *VAR_0)
{
 unsigned long VAR_1;
 VAR_1 = FUNC_0(*VAR_0);
 *VAR_0 += VAR_1;
 if (FUNC_2(*VAR_0, FUNC_1()) && VAR_1)
  return 1;

 return 0;
}
