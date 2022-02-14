
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct _reent {int dummy; } ;
struct TYPE_4__ {struct _reent* libc_reent; } ;
typedef TYPE_1__ lwp_cntrl ;


 int FUNC_0 (struct _reent*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int,int) ;

int FUNC_3(lwp_cntrl *VAR_0,lwp_cntrl *VAR_1)
{
 struct _reent *VAR_2;

 VAR_2 = (struct _reent*)FUNC_2(1,sizeof(struct _reent));
 if(!VAR_2) FUNC_1();

 FUNC_0((VAR_2));

 VAR_1->libc_reent = VAR_2;
 return 1;
}
