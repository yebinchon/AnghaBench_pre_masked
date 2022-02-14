
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* sps; } ;
struct TYPE_7__ {int* is_pcm; TYPE_2__ ps; } ;
struct TYPE_5__ {int log2_min_pu_size; int min_pu_width; int height; int width; } ;
typedef TYPE_3__ HEVCContext ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(HEVCContext *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4 = 1 << VAR_3;
    int VAR_5 = VAR_0->ps.sps->log2_min_pu_size;

    int VAR_6 = VAR_0->ps.sps->min_pu_width;
    int VAR_7 = FUNC_0(VAR_1 + VAR_4, VAR_0->ps.sps->width);
    int VAR_8 = FUNC_0(VAR_2 + VAR_4, VAR_0->ps.sps->height);
    int VAR_9, VAR_10;

    for (VAR_10 = (VAR_2 >> VAR_5); VAR_10 < (VAR_8 >> VAR_5); VAR_10++)
        for (VAR_9 = (VAR_1 >> VAR_5); VAR_9 < (VAR_7 >> VAR_5); VAR_9++)
            VAR_0->is_pcm[VAR_9 + VAR_10 * VAR_6] = 2;
}
