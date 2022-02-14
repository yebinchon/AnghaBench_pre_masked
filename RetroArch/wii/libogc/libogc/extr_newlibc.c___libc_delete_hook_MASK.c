
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct _reent {int dummy; } ;
struct TYPE_4__ {scalar_t__ libc_reent; } ;
typedef TYPE_1__ lwp_cntrl ;


 struct _reent* VAR_0 ;
 int FUNC_0 (struct _reent*) ;
 int FUNC_1 (struct _reent*) ;
 struct _reent VAR_1 ;

int FUNC_2(lwp_cntrl *VAR_2, lwp_cntrl *VAR_3)
{
 struct _reent *VAR_4;

 if(VAR_2==VAR_3)
  VAR_4 = VAR_0;
 else
  VAR_4 = (struct _reent*)VAR_3->libc_reent;

 if(VAR_4 && VAR_4!=&VAR_1) {
  FUNC_0(VAR_4);
  FUNC_1(VAR_4);
 }
 VAR_3->libc_reent = 0;

 if(VAR_2==VAR_3) VAR_0 = 0;

 return 1;
}
