
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t int8_t ;
struct TYPE_7__ {size_t qscale; int linesize; int uvlinesize; int ** dest; } ;
struct TYPE_6__ {int* avail_cache; int intra_types_stride; int chroma_vlc; int luma_vlc; TYPE_2__ s; } ;
typedef TYPE_1__ RV34DecContext ;
typedef TYPE_2__ MpegEncContext ;


 int FUNC_0 (int*,int,int,int,int ,int) ;
 int* VAR_0 ;
 size_t** VAR_1 ;
 int FUNC_1 (TYPE_1__*,int *,int,int,int,int,int,int) ;
 int FUNC_2 (TYPE_1__*,int *,int,int ,int,int,int) ;
 int* VAR_2 ;

__attribute__((used)) static void FUNC_3(RV34DecContext *VAR_3, int8_t *VAR_4, int VAR_5)
{
    MpegEncContext *VAR_6 = &VAR_3->s;
    uint8_t *VAR_7 = VAR_6->dest[0];
    int VAR_8[6*8] = {0};
    int VAR_9, VAR_10, VAR_11;
    int VAR_12, VAR_13, VAR_14;


    if(VAR_3->avail_cache[1])
        VAR_8[0] = 1;
    if(VAR_3->avail_cache[2])
        VAR_8[1] = VAR_8[2] = 1;
    if(VAR_3->avail_cache[3])
        VAR_8[3] = VAR_8[4] = 1;
    if(VAR_3->avail_cache[4])
        VAR_8[5] = 1;
    if(VAR_3->avail_cache[5])
        VAR_8[8] = VAR_8[16] = 1;
    if(VAR_3->avail_cache[9])
        VAR_8[24] = VAR_8[32] = 1;

    VAR_13 = VAR_2[VAR_6->qscale];
    for(VAR_10 = 0; VAR_10 < 4; VAR_10++){
        VAR_12 = 9 + VAR_10*8;
        for(VAR_9 = 0; VAR_9 < 4; VAR_9++, VAR_5 >>= 1, VAR_7 += 4, VAR_12++){
            FUNC_1(VAR_3, VAR_7, VAR_6->linesize, VAR_0[VAR_4[VAR_9]], VAR_8[VAR_12-8], VAR_8[VAR_12-1], VAR_8[VAR_12+7], VAR_8[VAR_12-7]);
            VAR_8[VAR_12] = 1;
            if(!(VAR_5 & 1)) continue;

            FUNC_2(VAR_3, VAR_7, VAR_6->linesize,
                               VAR_3->luma_vlc, 0, VAR_13, VAR_13);
        }
        VAR_7 += VAR_6->linesize * 4 - 4*4;
        VAR_4 += VAR_3->intra_types_stride;
    }

    VAR_4 -= VAR_3->intra_types_stride * 4;

    VAR_14 = VAR_2[VAR_1[1][VAR_6->qscale]];
    VAR_13 = VAR_2[VAR_1[0][VAR_6->qscale]];

    for(VAR_11 = 0; VAR_11 < 2; VAR_11++){
        VAR_7 = VAR_6->dest[1+VAR_11];
        FUNC_0(VAR_3->avail_cache + 6, 2, 2, 4, 0, 4);

        for(VAR_10 = 0; VAR_10 < 2; VAR_10++){
            int* VAR_15 = VAR_3->avail_cache + 6 + VAR_10*4;
            for(VAR_9 = 0; VAR_9 < 2; VAR_9++, VAR_5 >>= 1, VAR_15++){
                int VAR_16 = VAR_0[VAR_4[VAR_9*2+VAR_10*2*VAR_3->intra_types_stride]];
                FUNC_1(VAR_3, VAR_7+4*VAR_9, VAR_6->uvlinesize, VAR_16, VAR_15[-4], VAR_15[-1], !VAR_9 && !VAR_10, VAR_15[-3]);
                VAR_15[0] = 1;

                if(!(VAR_5&1)) continue;

                FUNC_2(VAR_3, VAR_7 + 4*VAR_9, VAR_6->uvlinesize,
                                   VAR_3->chroma_vlc, 1, VAR_14, VAR_13);
            }

            VAR_7 += 4*VAR_6->uvlinesize;
        }
    }
}
