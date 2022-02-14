
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int v_fov; void** flat_range; int h_fov; } ;
typedef TYPE_1__ V360Context ;
struct TYPE_5__ {TYPE_1__* priv; } ;
typedef TYPE_2__ AVFilterContext ;


 float FUNC_0 (int ,float) ;
 float VAR_0 ;
 void* FUNC_1 (float) ;

__attribute__((used)) static int FUNC_2(AVFilterContext *VAR_1)
{
    V360Context *VAR_2 = VAR_1->priv;

    VAR_2->flat_range[0] = FUNC_1(FUNC_0(VAR_2->h_fov, 359.f) * VAR_0 / 720.f);
    VAR_2->flat_range[1] = FUNC_1(FUNC_0(VAR_2->v_fov, 359.f) * VAR_0 / 720.f);

    return 0;
}
