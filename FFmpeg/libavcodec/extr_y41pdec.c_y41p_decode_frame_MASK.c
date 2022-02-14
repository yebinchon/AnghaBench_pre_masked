
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {long long height; int width; } ;
struct TYPE_10__ {int key_frame; int* linesize; int ** data; int pict_type; } ;
struct TYPE_9__ {long long size; int * data; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long long FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_3__*,int ,char*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_3, void *VAR_4,
                             int *VAR_5, AVPacket *VAR_6)
{
    AVFrame *VAR_7 = VAR_4;
    uint8_t *VAR_8 = VAR_6->data;
    uint8_t *VAR_9, *VAR_10, *VAR_11;
    int VAR_12, VAR_13, VAR_14;

    if (VAR_6->size < 3LL * VAR_3->height * FUNC_1(VAR_3->width, 8) / 2) {
        FUNC_2(VAR_3, VAR_0, "Insufficient input data.\n");
        return FUNC_0(VAR_2);
    }

    if ((VAR_14 = FUNC_3(VAR_3, VAR_7, 0)) < 0)
        return VAR_14;

    VAR_7->key_frame = 1;
    VAR_7->pict_type = VAR_1;

    for (VAR_12 = VAR_3->height - 1; VAR_12 >= 0 ; VAR_12--) {
        VAR_9 = &VAR_7->data[0][VAR_12 * VAR_7->linesize[0]];
        VAR_10 = &VAR_7->data[1][VAR_12 * VAR_7->linesize[1]];
        VAR_11 = &VAR_7->data[2][VAR_12 * VAR_7->linesize[2]];
        for (VAR_13 = 0; VAR_13 < VAR_3->width; VAR_13 += 8) {
            *(VAR_10++) = *VAR_8++;
            *(VAR_9++) = *VAR_8++;
            *(VAR_11++) = *VAR_8++;
            *(VAR_9++) = *VAR_8++;

            *(VAR_10++) = *VAR_8++;
            *(VAR_9++) = *VAR_8++;
            *(VAR_11++) = *VAR_8++;
            *(VAR_9++) = *VAR_8++;

            *(VAR_9++) = *VAR_8++;
            *(VAR_9++) = *VAR_8++;
            *(VAR_9++) = *VAR_8++;
            *(VAR_9++) = *VAR_8++;
        }
    }

    *VAR_5 = 1;

    return VAR_6->size;
}
