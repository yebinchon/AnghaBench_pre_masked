
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * thread_t ;
struct knote {int * kn_hook; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct knote *VAR_0)
{
 thread_t VAR_1 = VAR_0->kn_hook;
 VAR_0->kn_hook = ((void*)0);
 FUNC_0(VAR_1);
}
