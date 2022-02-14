
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct affinity_set {int dummy; } ;
typedef TYPE_1__* affinity_set_t ;
struct TYPE_5__ {int aset_threads; } ;


 int FUNC_0 (char*,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(affinity_set_t VAR_0)
{
 FUNC_1(FUNC_3(&VAR_0->aset_threads));

 FUNC_0("affinity_set_free(%p)\n", VAR_0);
 FUNC_2(VAR_0, sizeof(struct affinity_set));
}
