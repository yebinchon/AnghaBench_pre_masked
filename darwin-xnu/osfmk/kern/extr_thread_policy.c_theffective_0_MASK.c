
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef TYPE_1__* thread_t ;
struct thread_effective_policy {int dummy; } ;
struct TYPE_3__ {int effective_policy; } ;


 int FUNC_0 (int,char*) ;

uintptr_t
FUNC_1(thread_t VAR_0)
{
 FUNC_0(sizeof(struct thread_effective_policy) == sizeof(uint64_t), "size invariant violated");

 uintptr_t* VAR_1 = (uintptr_t*)(void*)&VAR_0->effective_policy;
 return VAR_1[0];
}
