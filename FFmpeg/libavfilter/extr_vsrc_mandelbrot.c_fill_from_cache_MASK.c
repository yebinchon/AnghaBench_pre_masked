
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {TYPE_2__* priv; } ;
struct TYPE_6__ {int cache_used; double start_x; int w; int cache_allocated; TYPE_1__* next_cache; TYPE_1__* point_cache; scalar_t__ morphamp; } ;
struct TYPE_5__ {double* p; int val; } ;
typedef TYPE_1__ Point ;
typedef TYPE_2__ MBContext ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (double) ;

__attribute__((used)) static void FUNC_1(AVFilterContext *VAR_0, uint32_t *VAR_1, int *VAR_2, int *VAR_3, double VAR_4, double VAR_5){
    MBContext *VAR_6 = VAR_0->priv;
    if(VAR_6->morphamp)
        return;
    for(; *VAR_2 < VAR_6->cache_used; (*VAR_2)++){
        Point *VAR_7= &VAR_6->point_cache[*VAR_2];
        int VAR_8;
        if(VAR_7->p[1] > VAR_4)
            break;
        VAR_8= FUNC_0((VAR_7->p[0] - VAR_6->start_x) / VAR_5 + VAR_6->w/2);
        if(VAR_8<0 || VAR_8 >= VAR_6->w)
            continue;
        if(VAR_1) VAR_1[VAR_8] = VAR_7->val;
        if(VAR_3 && *VAR_3 < VAR_6->cache_allocated)
            VAR_6->next_cache[(*VAR_3)++]= *VAR_7;
    }
}
