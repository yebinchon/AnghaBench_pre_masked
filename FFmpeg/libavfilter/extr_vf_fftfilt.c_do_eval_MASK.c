
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {double frame_count_out; } ;
struct TYPE_6__ {double* planewidth; double* planeheight; int* rdft_hlen; int* rdft_vlen; int * weight_expr; int ** weight; } ;
typedef TYPE_1__ FFTFILTContext ;
typedef TYPE_2__ AVFilterLink ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int ,double*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(FFTFILTContext *VAR_6, AVFilterLink *VAR_7, int VAR_8)
{
    double VAR_9[VAR_2];
    int VAR_10, VAR_11;

    VAR_9[VAR_1] = VAR_7->frame_count_out;
    VAR_9[VAR_3] = VAR_6->planewidth[VAR_8];
    VAR_9[VAR_0] = VAR_6->planeheight[VAR_8];

    for (VAR_10 = 0; VAR_10 < VAR_6->rdft_hlen[VAR_8]; VAR_10++) {
        VAR_9[VAR_4] = VAR_10;
        for (VAR_11 = 0; VAR_11 < VAR_6->rdft_vlen[VAR_8]; VAR_11++) {
            VAR_9[VAR_5] = VAR_11;
            VAR_6->weight[VAR_8][VAR_10 * VAR_6->rdft_vlen[VAR_8] + VAR_11] =
            FUNC_0(VAR_6->weight_expr[VAR_8], VAR_9, VAR_6);
        }
    }
}
