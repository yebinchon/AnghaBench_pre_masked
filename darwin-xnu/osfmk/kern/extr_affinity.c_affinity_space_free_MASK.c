
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct affinity_space {int dummy; } ;
typedef TYPE_1__* affinity_space_t ;
struct TYPE_5__ {int aspc_lock; int aspc_affinities; } ;


 int FUNC_0 (char*,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(affinity_space_t VAR_1)
{
 FUNC_1(FUNC_4(&VAR_1->aspc_affinities));

 FUNC_3(&VAR_1->aspc_lock, &VAR_0);
 FUNC_0("affinity_space_free(%p)\n", VAR_1);
 FUNC_2(VAR_1, sizeof(struct affinity_space));
}
