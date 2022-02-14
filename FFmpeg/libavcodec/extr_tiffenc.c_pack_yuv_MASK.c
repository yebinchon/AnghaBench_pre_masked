
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int width; int* subsampling; int height; } ;
typedef TYPE_1__ TiffEncoderContext ;
struct TYPE_6__ {int* linesize; int ** data; } ;
typedef TYPE_2__ AVFrame ;


 size_t FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(TiffEncoderContext *VAR_0, const AVFrame *VAR_1,
                     uint8_t *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, VAR_6;
    int VAR_7 = (VAR_0->width - 1) / VAR_0->subsampling[0] + 1;
    uint8_t *VAR_8 = &VAR_1->data[1][VAR_3 / VAR_0->subsampling[1] * VAR_1->linesize[1]];
    uint8_t *VAR_9 = &VAR_1->data[2][VAR_3 / VAR_0->subsampling[1] * VAR_1->linesize[2]];
    if (VAR_0->width % VAR_0->subsampling[0] || VAR_0->height % VAR_0->subsampling[1]) {
        for (VAR_4 = 0; VAR_4 < VAR_7; VAR_4++) {
            for (VAR_5 = 0; VAR_5 < VAR_0->subsampling[1]; VAR_5++)
                for (VAR_6 = 0; VAR_6 < VAR_0->subsampling[0]; VAR_6++)
                    *VAR_2++ = VAR_1->data[0][FUNC_0(VAR_3 + VAR_5, VAR_0->height-1) * VAR_1->linesize[0] +
                                        FUNC_0(VAR_4 * VAR_0->subsampling[0] + VAR_6, VAR_0->width-1)];
            *VAR_2++ = *VAR_8++;
            *VAR_2++ = *VAR_9++;
        }
    }else{
        for (VAR_4 = 0; VAR_4 < VAR_7; VAR_4++) {
            for (VAR_5 = 0; VAR_5 < VAR_0->subsampling[1]; VAR_5++)
                for (VAR_6 = 0; VAR_6 < VAR_0->subsampling[0]; VAR_6++)
                    *VAR_2++ = VAR_1->data[0][(VAR_3 + VAR_5) * VAR_1->linesize[0] +
                                        VAR_4 * VAR_0->subsampling[0] + VAR_6];
            *VAR_2++ = *VAR_8++;
            *VAR_2++ = *VAR_9++;
        }
    }
}
