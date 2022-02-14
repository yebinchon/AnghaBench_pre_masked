
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_14__ {void* f; } ;
typedef TYPE_2__ ThreadFrame ;
struct TYPE_17__ {int num_x_slices; int mb_height; int mb_width; scalar_t__ slice_width; TYPE_1__* frame; } ;
struct TYPE_16__ {TYPE_5__* priv_data; } ;
struct TYPE_15__ {int size; int * data; } ;
struct TYPE_13__ {int key_frame; int pict_type; } ;
typedef int GetByteContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVCodecContext ;
typedef TYPE_5__ AICContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_5__*,int const*,int) ;
 int FUNC_2 (TYPE_5__*,int,int,int const*,int) ;
 int FUNC_3 (TYPE_4__*,int ,char*,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int const*,int) ;
 int FUNC_6 (TYPE_4__*,TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_4, void *VAR_5, int *VAR_6,
                            AVPacket *VAR_7)
{
    AICContext *VAR_8 = VAR_4->priv_data;
    const uint8_t *VAR_9 = VAR_7->data;
    int VAR_10 = VAR_7->size;
    GetByteContext VAR_11;
    uint32_t VAR_12;
    int VAR_13, VAR_14, VAR_15;
    int VAR_16;
    ThreadFrame VAR_17 = { .f = VAR_5 };

    VAR_8->frame = VAR_5;
    VAR_8->frame->pict_type = VAR_3;
    VAR_8->frame->key_frame = 1;

    VAR_12 = FUNC_0(VAR_0 + VAR_8->num_x_slices * VAR_8->mb_height * 2, 4);

    if (VAR_10 < VAR_12) {
        FUNC_3(VAR_4, VAR_2, "Too small frame\n");
        return VAR_1;
    }

    VAR_15 = FUNC_1(VAR_8, VAR_9, VAR_10);
    if (VAR_15 < 0) {
        FUNC_3(VAR_4, VAR_2, "Invalid header\n");
        return VAR_15;
    }

    if ((VAR_15 = FUNC_6(VAR_4, &VAR_17, 0)) < 0)
        return VAR_15;

    FUNC_5(&VAR_11, VAR_9 + VAR_0,
                     VAR_8->num_x_slices * VAR_8->mb_height * 2);

    for (VAR_14 = 0; VAR_14 < VAR_8->mb_height; VAR_14++) {
        for (VAR_13 = 0; VAR_13 < VAR_8->mb_width; VAR_13 += VAR_8->slice_width) {
            VAR_16 = FUNC_4(&VAR_11) * 4;
            if (VAR_16 + VAR_12 > VAR_10 || !VAR_16) {
                FUNC_3(VAR_4, VAR_2,
                       "Incorrect slice size %d at %d.%d\n", VAR_16, VAR_13, VAR_14);
                return VAR_1;
            }

            VAR_15 = FUNC_2(VAR_8, VAR_13, VAR_14, VAR_9 + VAR_12, VAR_16);
            if (VAR_15 < 0) {
                FUNC_3(VAR_4, VAR_2,
                       "Error decoding slice at %d.%d\n", VAR_13, VAR_14);
                return VAR_15;
            }

            VAR_12 += VAR_16;
        }
    }

    *VAR_6 = 1;

    return VAR_7->size;
}
