
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_9__ {int width; int height; int pix_fmt; } ;
struct TYPE_8__ {int * linesize; int ** data; } ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_2 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_2, AVFrame *VAR_3,
                                const uint8_t *VAR_4, int VAR_5,
                                int VAR_6, int VAR_7)
{
    int VAR_8;
    uint8_t *VAR_9;
    int VAR_10;

    if (VAR_5 < VAR_2->width * VAR_2->height * (int64_t)VAR_7) {
        FUNC_0(VAR_2, VAR_1, "packet too small\n");
        return VAR_0;
    }

    VAR_2->pix_fmt = VAR_6;
    if ((VAR_10 = FUNC_1(VAR_2, VAR_3, 0)) < 0)
        return VAR_10;

    VAR_9 = VAR_3->data[0];
    for (VAR_8 = 0; VAR_8 < VAR_2->height; VAR_8++) {
        FUNC_2(VAR_9, VAR_4, VAR_2->width * VAR_7);
        VAR_4 += VAR_2->width * VAR_7;
        VAR_9 += VAR_3->linesize[0];
    }

    return 0;
}
