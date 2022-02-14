
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_15__ {void* f; } ;
typedef TYPE_1__ ThreadFrame ;
struct TYPE_19__ {TYPE_2__* priv_data; } ;
struct TYPE_18__ {int key_frame; int pict_type; } ;
struct TYPE_17__ {char* data; int size; } ;
struct TYPE_16__ {int first_field; scalar_t__ frame_type; TYPE_4__* frame; } ;
typedef TYPE_2__ ProresContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (TYPE_5__*,int ,char*) ;
 int FUNC_2 (TYPE_2__*,char const*,int,TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,char const*,int) ;
 int FUNC_5 (TYPE_5__*,TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_3, void *VAR_4, int *VAR_5,
                        AVPacket *VAR_6)
{
    ProresContext *VAR_7 = VAR_3->priv_data;
    ThreadFrame VAR_8 = { .f = VAR_4 };
    AVFrame *VAR_9 = VAR_4;
    const uint8_t *VAR_10 = VAR_6->data;
    int VAR_11 = VAR_6->size;
    int VAR_12, VAR_13, VAR_14;

    if (VAR_11 < 28 || FUNC_0(VAR_10 + 4) != FUNC_0("icpf")) {
        FUNC_1(VAR_3, VAR_1, "invalid frame header\n");
        return VAR_0;
    }

    VAR_7->frame = VAR_9;
    VAR_7->frame->pict_type = VAR_2;
    VAR_7->frame->key_frame = 1;
    VAR_7->first_field = 1;

    VAR_10 += 8;
    VAR_11 -= 8;

    VAR_12 = FUNC_2(VAR_7, VAR_10, VAR_11, VAR_3);
    if (VAR_12 < 0)
        return VAR_12;

    VAR_10 += VAR_12;
    VAR_11 -= VAR_12;

 decode_picture:
    VAR_13 = FUNC_4(VAR_3, VAR_10, VAR_11);
    if (VAR_13 < 0) {
        FUNC_1(VAR_3, VAR_1, "error decoding picture header\n");
        return VAR_13;
    }

    if (VAR_7->first_field)
        if ((VAR_14 = FUNC_5(VAR_3, &VAR_8, 0)) < 0)
            return VAR_14;

    if ((VAR_14 = FUNC_3(VAR_3)) < 0) {
        FUNC_1(VAR_3, VAR_1, "error decoding picture\n");
        return VAR_14;
    }

    VAR_10 += VAR_13;
    VAR_11 -= VAR_13;

    if (VAR_7->frame_type && VAR_11 > 0 && VAR_7->first_field) {
        VAR_7->first_field = 0;
        goto decode_picture;
    }

    *VAR_5 = 1;

    return VAR_6->size;
}
