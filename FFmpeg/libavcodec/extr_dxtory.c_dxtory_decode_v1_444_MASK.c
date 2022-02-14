
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {long long width; long long height; int pix_fmt; } ;
struct TYPE_8__ {int** data; int * linesize; } ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_3, AVFrame *VAR_4,
                                const uint8_t *VAR_5, int VAR_6)
{
    int VAR_7, VAR_8;
    uint8_t *VAR_9, *VAR_10, *VAR_11;
    int VAR_12;

    if (VAR_6 < VAR_3->width * VAR_3->height * 3LL) {
        FUNC_0(VAR_3, VAR_1, "packet too small\n");
        return VAR_0;
    }

    VAR_3->pix_fmt = VAR_2;
    if ((VAR_12 = FUNC_1(VAR_3, VAR_4, 0)) < 0)
        return VAR_12;

    VAR_9 = VAR_4->data[0];
    VAR_10 = VAR_4->data[1];
    VAR_11 = VAR_4->data[2];
    for (VAR_7 = 0; VAR_7 < VAR_3->height; VAR_7++) {
        for (VAR_8 = 0; VAR_8 < VAR_3->width; VAR_8++) {
            VAR_9[VAR_8] = *VAR_5++;
            VAR_10[VAR_8] = *VAR_5++ ^ 0x80;
            VAR_11[VAR_8] = *VAR_5++ ^ 0x80;
        }
        VAR_9 += VAR_4->linesize[0];
        VAR_10 += VAR_4->linesize[1];
        VAR_11 += VAR_4->linesize[2];
    }

    return 0;
}
