
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_14__ {int height; void* coded_height; int width; void* coded_width; TYPE_1__* priv_data; } ;
struct TYPE_13__ {int key_frame; } ;
struct TYPE_12__ {int* data; int size; } ;
struct TYPE_11__ {int quant_matrix; } ;
typedef TYPE_1__ SHQContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 void* FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_1__* const,int const*,int,TYPE_3__*,int,int,int,int) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_1,
                                void *VAR_2, int *VAR_3,
                                AVPacket *VAR_4)
{
    SHQContext * const VAR_5 = VAR_1->priv_data;
    const uint8_t *VAR_6 = VAR_4->data;
    int VAR_7 = VAR_4->size;
    AVFrame *VAR_8 = VAR_2;
    uint8_t VAR_9;
    uint32_t VAR_10;
    int VAR_11;

    if (VAR_7 < 4)
        return VAR_0;

    VAR_9 = VAR_6[0];
    if (VAR_9 >= 100) {
        return VAR_0;
    }

    FUNC_2(VAR_5->quant_matrix, 100 - VAR_9);

    VAR_10 = FUNC_0(VAR_6 + 1);
    if (VAR_10 >= VAR_7 - 3) {
        return VAR_0;
    }

    VAR_1->coded_width = FUNC_1(VAR_1->width, 16);
    VAR_1->coded_height = FUNC_1(VAR_1->height, 16);

    if ((VAR_11 = FUNC_4(VAR_1, VAR_8, 0)) < 0) {
        return VAR_11;
    }
    VAR_8->key_frame = 1;

    if (VAR_10 == 4) {
        if ((VAR_11 = FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8, 0, 4, VAR_7, 1)) < 0)
            return VAR_11;
    } else {
        if ((VAR_11 = FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8, 0, 4, VAR_10, 2)) < 0)
            return VAR_11;
        if ((VAR_11 = FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8, 1, VAR_10, VAR_7, 2)) < 0)
            return VAR_11;
    }

    *VAR_3 = 1;
    return VAR_7;
}
