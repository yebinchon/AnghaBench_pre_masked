
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpuidle_device {TYPE_1__** kobjs; } ;
struct TYPE_2__ {int kobj_unregister; int kobj; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void inline FUNC_3(struct cpuidle_device *VAR_0, int VAR_1)
{
 FUNC_1(&VAR_0->kobjs[VAR_1]->kobj);
 FUNC_2(&VAR_0->kobjs[VAR_1]->kobj_unregister);
 FUNC_0(VAR_0->kobjs[VAR_1]);
 VAR_0->kobjs[VAR_1] = ((void*)0);
}
