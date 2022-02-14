
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (long) ;
 int FUNC_1 (int ,char*,char volatile*,char volatile*,char volatile,char volatile) ;
 long VAR_1 ;

__attribute__((used)) static void
FUNC_2(void)
{

 volatile char *VAR_2 = ((void*)0);
 long VAR_3 = VAR_1 * 1024L;

 VAR_2 = FUNC_0(VAR_3);





 VAR_2[0] = 0;
 VAR_2[VAR_3 - 1] = 0;






 FUNC_1(VAR_0, "entry stack is at %p, increased to %p, the top and bottom values of "
     "the stack is %d and %d", &VAR_2[0],
   &VAR_2[VAR_3 - 1],
   VAR_2[VAR_3 - 1], VAR_2[0]);


}
