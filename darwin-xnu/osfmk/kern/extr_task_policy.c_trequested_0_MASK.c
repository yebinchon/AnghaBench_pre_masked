
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef TYPE_1__* task_t ;
struct task_requested_policy {int dummy; } ;
struct TYPE_3__ {int requested_policy; } ;


 int FUNC_0 (int,char*) ;

__attribute__((used)) static uintptr_t
FUNC_1(task_t VAR_0)
{
 FUNC_0(sizeof(struct task_requested_policy) == sizeof(uint64_t), "size invariant violated");

 uintptr_t* VAR_1 = (uintptr_t*)&VAR_0->requested_policy;

 return VAR_1[0];
}
