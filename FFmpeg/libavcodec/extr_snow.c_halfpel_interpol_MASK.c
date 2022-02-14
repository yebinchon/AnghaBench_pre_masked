
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int* linesize; int** data; } ;
struct TYPE_7__ {int nb_planes; TYPE_1__* avctx; int chroma_v_shift; int chroma_h_shift; } ;
struct TYPE_6__ {int width; int height; } ;
typedef TYPE_2__ SnowContext ;
typedef TYPE_3__ AVFrame ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int**) ;
 int* FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(SnowContext *VAR_2, uint8_t *VAR_3[4][4], AVFrame *VAR_4){
    int VAR_5,VAR_6,VAR_7;

    for(VAR_5=0; VAR_5 < VAR_2->nb_planes; VAR_5++){
        int VAR_8= !!VAR_5;
        int VAR_9= VAR_8 ? FUNC_1(VAR_2->avctx->width, VAR_2->chroma_h_shift) : VAR_2->avctx->width;
        int VAR_10= VAR_8 ? FUNC_1(VAR_2->avctx->height, VAR_2->chroma_v_shift) : VAR_2->avctx->height;
        int VAR_11= VAR_4->linesize[VAR_5];
        uint8_t *VAR_12= VAR_4->data[VAR_5];

        VAR_3[1][VAR_5] = FUNC_3(VAR_11, (VAR_10 + 2 * VAR_0));
        VAR_3[2][VAR_5] = FUNC_3(VAR_11, (VAR_10 + 2 * VAR_0));
        VAR_3[3][VAR_5] = FUNC_3(VAR_11, (VAR_10 + 2 * VAR_0));
        if (!VAR_3[1][VAR_5] || !VAR_3[2][VAR_5] || !VAR_3[3][VAR_5]) {
            FUNC_2(&VAR_3[1][VAR_5]);
            FUNC_2(&VAR_3[2][VAR_5]);
            FUNC_2(&VAR_3[3][VAR_5]);
            return FUNC_0(VAR_1);
        }
        VAR_3[1][VAR_5] += VAR_0 * (1 + VAR_11);
        VAR_3[2][VAR_5] += VAR_0 * (1 + VAR_11);
        VAR_3[3][VAR_5] += VAR_0 * (1 + VAR_11);

        VAR_3[0][VAR_5]= VAR_12;
        for(VAR_7=0; VAR_7<VAR_10; VAR_7++){
            for(VAR_6=0; VAR_6<VAR_9; VAR_6++){
                int VAR_13= VAR_7*VAR_11 + VAR_6;

                VAR_3[1][VAR_5][VAR_13]= (20*(VAR_12[VAR_13] + VAR_12[VAR_13+1]) - 5*(VAR_12[VAR_13-1] + VAR_12[VAR_13+2]) + (VAR_12[VAR_13-2] + VAR_12[VAR_13+3]) + 16 )>>5;
            }
        }
        for(VAR_7=0; VAR_7<VAR_10; VAR_7++){
            for(VAR_6=0; VAR_6<VAR_9; VAR_6++){
                int VAR_14= VAR_7*VAR_11 + VAR_6;

                VAR_3[2][VAR_5][VAR_14]= (20*(VAR_12[VAR_14] + VAR_12[VAR_14+VAR_11]) - 5*(VAR_12[VAR_14-VAR_11] + VAR_12[VAR_14+2*VAR_11]) + (VAR_12[VAR_14-2*VAR_11] + VAR_12[VAR_14+3*VAR_11]) + 16 )>>5;
            }
        }
        VAR_12= VAR_3[1][VAR_5];
        for(VAR_7=0; VAR_7<VAR_10; VAR_7++){
            for(VAR_6=0; VAR_6<VAR_9; VAR_6++){
                int VAR_15= VAR_7*VAR_11 + VAR_6;

                VAR_3[3][VAR_5][VAR_15]= (20*(VAR_12[VAR_15] + VAR_12[VAR_15+VAR_11]) - 5*(VAR_12[VAR_15-VAR_11] + VAR_12[VAR_15+2*VAR_11]) + (VAR_12[VAR_15-2*VAR_11] + VAR_12[VAR_15+3*VAR_11]) + 16 )>>5;
            }
        }


    }
    return 0;
}
