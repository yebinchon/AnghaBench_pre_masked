
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int done; int result; int ctx; int ret; } ;
typedef TYPE_1__ finalise_sha_param_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_1)
{
    finalise_sha_param_t *VAR_2 = (finalise_sha_param_t *)VAR_1;

    for (int VAR_3 = 0; VAR_3 < 5; VAR_3++) {
        FUNC_0(0, FUNC_2(&VAR_2->ctx, VAR_0, 100));
    }

    VAR_2->ret = FUNC_1(&VAR_2->ctx, VAR_2->result);
    VAR_2->done = 1;
    FUNC_3(((void*)0));
}
