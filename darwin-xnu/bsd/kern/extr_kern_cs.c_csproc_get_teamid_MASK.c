
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int dummy; } ;
struct cs_blob {int dummy; } ;


 char const* FUNC_0 (struct cs_blob*) ;
 struct cs_blob* FUNC_1 (struct proc*) ;

const char *
FUNC_2(struct proc *VAR_0)
{
 struct cs_blob *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 == ((void*)0))
     return ((void*)0);

 return FUNC_0(VAR_1);
}
