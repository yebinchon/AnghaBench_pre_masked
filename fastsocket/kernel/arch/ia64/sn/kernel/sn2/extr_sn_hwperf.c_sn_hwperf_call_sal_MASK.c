
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct sn_hwperf_op_info {int ret; int v0; scalar_t__ p; TYPE_1__* a; int op; } ;
struct TYPE_2__ {int sz; int arg; } ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(void *VAR_1)
{
 struct sn_hwperf_op_info *VAR_2 = VAR_1;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_2->op,
        VAR_2->a->arg, VAR_2->a->sz,
        (u64) VAR_2->p, 0, 0, VAR_2->v0);
 VAR_2->ret = VAR_3;
}
