
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int block_type; void** sb_hybrid; int short_start; scalar_t__ switch_point; } ;
struct TYPE_5__ {int sample_rate_index; } ;
typedef TYPE_1__ MPADecodeContext ;
typedef void* INTFLOAT ;
typedef TYPE_2__ GranuleDef ;


 int** VAR_0 ;
 int FUNC_0 (void**,void**,int) ;

__attribute__((used)) static void FUNC_1(MPADecodeContext *VAR_1, GranuleDef *VAR_2)
{
    int VAR_3, VAR_4, VAR_5;
    INTFLOAT *VAR_6, *VAR_7, *VAR_8;
    INTFLOAT VAR_9[576];

    if (VAR_2->block_type != 2)
        return;

    if (VAR_2->switch_point) {
        if (VAR_1->sample_rate_index != 8)
            VAR_6 = VAR_2->sb_hybrid + 36;
        else
            VAR_6 = VAR_2->sb_hybrid + 72;
    } else {
        VAR_6 = VAR_2->sb_hybrid;
    }

    for (VAR_3 = VAR_2->short_start; VAR_3 < 13; VAR_3++) {
        VAR_5 = VAR_0[VAR_1->sample_rate_index][VAR_3];
        VAR_8 = VAR_6;
        VAR_7 = VAR_9;
        for (VAR_4 = VAR_5; VAR_4 > 0; VAR_4--) {
            *VAR_7++ = VAR_6[0*VAR_5];
            *VAR_7++ = VAR_6[1*VAR_5];
            *VAR_7++ = VAR_6[2*VAR_5];
            VAR_6++;
        }
        VAR_6 += 2 * VAR_5;
        FUNC_0(VAR_8, VAR_9, VAR_5 * 3 * sizeof(*VAR_8));
    }
}
