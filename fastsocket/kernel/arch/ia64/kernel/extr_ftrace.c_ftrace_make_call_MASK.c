
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dyn_ftrace {unsigned long ip; } ;


 unsigned char* FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (unsigned long,unsigned char*,unsigned char*,int) ;
 unsigned char* FUNC_2 () ;

int FUNC_3(struct dyn_ftrace *VAR_0, unsigned long VAR_1)
{
 unsigned long VAR_2 = VAR_0->ip;
 unsigned char *VAR_3, *VAR_4;

 VAR_3= FUNC_2();
 VAR_4 = FUNC_0(VAR_2, VAR_1);
 return FUNC_1(VAR_2, VAR_3, VAR_4, 1);
}
