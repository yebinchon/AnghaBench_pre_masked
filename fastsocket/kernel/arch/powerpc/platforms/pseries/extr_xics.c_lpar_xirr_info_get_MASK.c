
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 int FUNC_0 (char*,unsigned long) ;
 unsigned long FUNC_1 (unsigned long*) ;

__attribute__((used)) static inline unsigned int FUNC_2(void)
{
 unsigned long VAR_1;
 unsigned long VAR_2;

 VAR_1 = FUNC_1(&VAR_2);
 if (VAR_1 != VAR_0)
  FUNC_0(" bad return code xirr - rc = %lx \n", VAR_1);
 return (unsigned int)VAR_2;
}
