
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int dummy; } ;
struct cs_blob {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (struct cs_blob*) ;
 struct cs_blob* FUNC_1 (struct proc*) ;

unsigned int
FUNC_2(struct proc *VAR_1)
{
 struct cs_blob *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 == ((void*)0))
     return VAR_0;

 return FUNC_0(VAR_2);
}
