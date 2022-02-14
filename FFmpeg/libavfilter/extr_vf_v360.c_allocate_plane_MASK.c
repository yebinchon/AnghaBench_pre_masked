
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* uv_linesize; int* pr_height; void** ker; void** v; void** u; } ;
typedef TYPE_1__ V360Context ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 void* FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(V360Context *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    VAR_1->u[VAR_4] = FUNC_1(VAR_1->uv_linesize[VAR_4] * VAR_1->pr_height[VAR_4], VAR_2);
    VAR_1->v[VAR_4] = FUNC_1(VAR_1->uv_linesize[VAR_4] * VAR_1->pr_height[VAR_4], VAR_2);
    if (!VAR_1->u[VAR_4] || !VAR_1->v[VAR_4])
        return FUNC_0(VAR_0);
    if (VAR_3) {
        VAR_1->ker[VAR_4] = FUNC_1(VAR_1->uv_linesize[VAR_4] * VAR_1->pr_height[VAR_4], VAR_3);
        if (!VAR_1->ker[VAR_4])
            return FUNC_0(VAR_0);
    }

    return 0;
}
