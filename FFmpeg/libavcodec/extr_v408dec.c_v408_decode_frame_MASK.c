
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {int height; int width; scalar_t__ codec_id; } ;
struct TYPE_10__ {int key_frame; int * linesize; int ** data; int pict_type; } ;
struct TYPE_9__ {int size; int * data; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,int ,char*) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_4, void *VAR_5,
                             int *VAR_6, AVPacket *VAR_7)
{
    AVFrame *VAR_8 = VAR_5;
    const uint8_t *VAR_9 = VAR_7->data;
    uint8_t *VAR_10, *VAR_11, *VAR_12, *VAR_13;
    int VAR_14, VAR_15, VAR_16;

    if (VAR_7->size < 4 * VAR_4->height * VAR_4->width) {
        FUNC_1(VAR_4, VAR_1, "Insufficient input data.\n");
        return FUNC_0(VAR_3);
    }

    if ((VAR_16 = FUNC_2(VAR_4, VAR_8, 0)) < 0)
        return VAR_16;

    VAR_8->key_frame = 1;
    VAR_8->pict_type = VAR_2;

    VAR_10 = VAR_8->data[0];
    VAR_11 = VAR_8->data[1];
    VAR_12 = VAR_8->data[2];
    VAR_13 = VAR_8->data[3];

    for (VAR_14 = 0; VAR_14 < VAR_4->height; VAR_14++) {
        for (VAR_15 = 0; VAR_15 < VAR_4->width; VAR_15++) {
            if (VAR_4->codec_id==VAR_0) {
                VAR_12[VAR_15] = *VAR_9++;
                VAR_11[VAR_15] = *VAR_9++;
                VAR_10[VAR_15] = *VAR_9++;
                VAR_13[VAR_15] = *VAR_9++;
            } else {
                VAR_11[VAR_15] = *VAR_9++;
                VAR_10[VAR_15] = *VAR_9++;
                VAR_12[VAR_15] = *VAR_9++;
                VAR_13[VAR_15] = *VAR_9++;
            }
        }

        VAR_10 += VAR_8->linesize[0];
        VAR_11 += VAR_8->linesize[1];
        VAR_12 += VAR_8->linesize[2];
        VAR_13 += VAR_8->linesize[3];
    }

    *VAR_6 = 1;

    return VAR_7->size;
}
