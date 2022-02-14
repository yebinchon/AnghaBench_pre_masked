
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int multiplier; int values; TYPE_1__* list; } ;
typedef TYPE_2__ vorbis_enc_floor ;
struct TYPE_9__ {float quality; } ;
typedef TYPE_3__ vorbis_enc_context ;
typedef int uint16_t ;
struct TYPE_7__ {size_t sort; int x; } ;


 int VAR_0 ;
 float* VAR_1 ;
 float FUNC_0 (TYPE_2__*,float*,int) ;
 float FUNC_1 (float,int) ;
 float FUNC_2 (float) ;

__attribute__((used)) static void FUNC_3(vorbis_enc_context *VAR_2, vorbis_enc_floor *VAR_3,
                      float *VAR_4, uint16_t *VAR_5, int VAR_6)
{
    int VAR_7 = 255 / VAR_3->multiplier + 1;
    int VAR_8;
    float VAR_9 = 0.0;
    float VAR_10[VAR_0];
    for (VAR_8 = 0; VAR_8 < VAR_3->values; VAR_8++) {
        VAR_10[VAR_8] = FUNC_0(VAR_3, VAR_4, VAR_8);
        VAR_9 += VAR_10[VAR_8];
    }
    VAR_9 /= VAR_3->values;
    VAR_9 /= VAR_2->quality;

    for (VAR_8 = 0; VAR_8 < VAR_3->values; VAR_8++) {
        int VAR_11 = VAR_3->list[VAR_3->list[VAR_8].sort].x;
        float VAR_12 = VAR_10[VAR_8];
        int VAR_13;

        VAR_12 = FUNC_2(VAR_9 * VAR_12) * FUNC_1(1.25f, VAR_11*0.005f);
        for (VAR_13 = 0; VAR_13 < VAR_7 - 1; VAR_13++)
            if (VAR_1[VAR_13 * VAR_3->multiplier] > VAR_12)
                break;
        VAR_5[VAR_3->list[VAR_8].sort] = VAR_13;
    }
}
