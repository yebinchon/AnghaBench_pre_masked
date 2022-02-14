
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {int pix_fmt; } ;
struct TYPE_12__ {unsigned int* linesize; int ** data; int pict_type; } ;
struct TYPE_11__ {int size; int * data; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_3__*,int ,char*) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__* const,int ) ;
 int FUNC_4 (TYPE_3__*,unsigned int,unsigned int) ;
 int FUNC_5 (int *,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_5, void *VAR_6, int *VAR_7,
                            AVPacket *VAR_8) {
    const uint8_t *VAR_9 = VAR_8->data;
    const uint8_t *VAR_10 = VAR_8->data + VAR_8->size;
    AVFrame * const VAR_11 = VAR_6;
    unsigned int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
    int VAR_18;
    uint8_t *VAR_19;

    if (VAR_10 - VAR_9 < 14)
        return VAR_0;
    VAR_12 = FUNC_0(VAR_9);
    VAR_13 = FUNC_0(VAR_9+8);
    VAR_14 = FUNC_0(VAR_9+10);
    VAR_17 = FUNC_0(VAR_9+12) >> 3;

    if (VAR_17 != 2) {
        FUNC_2(VAR_5, "Image format not RGB15");
        return VAR_1;
    }

    VAR_5->pix_fmt = VAR_4;

    if (VAR_10 - VAR_9 < VAR_12)
        return VAR_0;
    if (VAR_12 != 0x2c)
        FUNC_2(VAR_5, "offset != 0x2c");

    VAR_9 += VAR_12;

    if (VAR_10 - VAR_9 < VAR_13 * VAR_17)
        return VAR_0;

    if ((VAR_18 = FUNC_4(VAR_5, VAR_13, VAR_14)) < 0)
        return VAR_18;

    if ((VAR_18 = FUNC_3(VAR_5, VAR_11, 0)) < 0)
        return VAR_18;

    VAR_11->pict_type = VAR_3;

    VAR_19 = VAR_11->data[0];
    VAR_16 = VAR_11->linesize[0];

    for (VAR_15 = 0; VAR_15 < VAR_14 && VAR_10 - VAR_9 >= VAR_13 * VAR_17; VAR_15++) {
        FUNC_5(VAR_19, VAR_9, VAR_13*VAR_17);
        VAR_19 += VAR_16;
        VAR_9 += VAR_13*VAR_17;
    }

    *VAR_7 = 1;

    if (VAR_15 < VAR_14) {
        FUNC_1(VAR_5, VAR_2, "incomplete packet\n");
        return VAR_8->size;
    }

    return VAR_12 + VAR_13*VAR_14*VAR_17;
}
