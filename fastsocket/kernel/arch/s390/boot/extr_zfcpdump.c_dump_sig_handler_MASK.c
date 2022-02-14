
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int siginfo_t ;
typedef int __sighandler_t ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 () ;

__attribute__((used)) static __sighandler_t FUNC_2(int VAR_0, siginfo_t *VAR_1, void*VAR_2)
{
 FUNC_0("Got signal: %i\n", VAR_0);
 FUNC_0("Dump failed!\n");
 FUNC_1();
 return 0;
}
