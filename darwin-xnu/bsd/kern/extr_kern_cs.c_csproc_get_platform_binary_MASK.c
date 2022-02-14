
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int dummy; } ;
struct cs_blob {int csb_platform_binary; } ;


 struct cs_blob* FUNC_0 (struct proc*) ;

int
FUNC_1(struct proc *VAR_0)
{
 struct cs_blob *VAR_1;

 VAR_1 = FUNC_0(VAR_0);



 return (VAR_1 == ((void*)0)) ? 0 : VAR_1->csb_platform_binary;
}
