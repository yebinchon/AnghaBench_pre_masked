
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_16__ {int palette_has_changed; int const** data; } ;
struct TYPE_15__ {TYPE_1__* priv_data; } ;
struct TYPE_14__ {int size; int * data; } ;
struct TYPE_13__ {int size; TYPE_5__* frame; int const* pal; scalar_t__ palette_video; int const* data; } ;
typedef TYPE_1__ CinepakContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (void*,TYPE_5__*) ;
 int FUNC_2 (TYPE_3__*,int ,char*,...) ;
 int * FUNC_3 (TYPE_2__*,int ,int*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_5__*,int ) ;
 int FUNC_7 (int const*,int const*,int) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_4,
                                void *VAR_5, int *VAR_6,
                                AVPacket *VAR_7)
{
    const uint8_t *VAR_8 = VAR_7->data;
    int VAR_9 = 0, VAR_10 = VAR_7->size;
    CinepakContext *VAR_11 = VAR_4->priv_data;
    int VAR_12;

    VAR_11->data = VAR_8;
    VAR_11->size = VAR_10;

    if (VAR_11->size < 10)
        return VAR_0;

    VAR_12 = FUNC_0 (&VAR_11->data[8]);


    if (!VAR_12 && (!VAR_11->palette_video || !FUNC_3(VAR_7, VAR_3, ((void*)0))))
        return VAR_10;

    if ((VAR_9 = FUNC_5(VAR_11)) < 0) {
        FUNC_2(VAR_4, VAR_2, "cinepak_predecode_check failed\n");
        return VAR_9;
    }

    if ((VAR_9 = FUNC_6(VAR_4, VAR_11->frame, 0)) < 0)
        return VAR_9;

    if (VAR_11->palette_video) {
        int VAR_13;
        const uint8_t *VAR_14 = FUNC_3(VAR_7, VAR_3, &VAR_13);
        if (VAR_14 && VAR_13 == VAR_1) {
            VAR_11->frame->palette_has_changed = 1;
            FUNC_7(VAR_11->pal, VAR_14, VAR_1);
        } else if (VAR_14) {
            FUNC_2(VAR_4, VAR_2, "Palette size %d is wrong\n", VAR_13);
        }
    }

    if ((VAR_9 = FUNC_4(VAR_11)) < 0) {
        FUNC_2(VAR_4, VAR_2, "cinepak_decode failed\n");
    }

    if (VAR_11->palette_video)
        FUNC_7 (VAR_11->frame->data[1], VAR_11->pal, VAR_1);

    if ((VAR_9 = FUNC_1(VAR_5, VAR_11->frame)) < 0)
        return VAR_9;

    *VAR_6 = 1;


    return VAR_10;
}
