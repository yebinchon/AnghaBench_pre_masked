
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* sps; } ;
struct TYPE_7__ {int* is_pcm; TYPE_2__ ps; } ;
struct TYPE_5__ {int log2_min_pu_size; int min_pu_width; int min_pu_height; } ;
typedef TYPE_3__ HEVCContext ;



__attribute__((used)) static int FUNC_0(HEVCContext *VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3 = VAR_0->ps.sps->log2_min_pu_size;
    int VAR_4, VAR_5;

    if (VAR_1 < 0 || VAR_2 < 0)
        return 2;

    VAR_4 = VAR_1 >> VAR_3;
    VAR_5 = VAR_2 >> VAR_3;

    if (VAR_4 >= VAR_0->ps.sps->min_pu_width || VAR_5 >= VAR_0->ps.sps->min_pu_height)
        return 2;
    return VAR_0->is_pcm[VAR_5 * VAR_0->ps.sps->min_pu_width + VAR_4];
}
