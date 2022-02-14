
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigcontext {int dummy; } ;
struct faultinfo {int dummy; } ;


 int FUNC_0 (struct faultinfo,struct sigcontext*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;

void __attribute__ ((__section__ (".__syscall_stub")))
FUNC_2(int VAR_1)
{
 struct sigcontext *VAR_2 = (struct sigcontext *) (&VAR_1 + 1);

 FUNC_0(*((struct faultinfo *) VAR_0), VAR_2);

 FUNC_1();
}
