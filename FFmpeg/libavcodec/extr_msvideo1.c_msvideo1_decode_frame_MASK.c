
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_16__ {int palette_has_changed; } ;
struct TYPE_15__ {int width; int height; TYPE_1__* priv_data; } ;
struct TYPE_14__ {int size; int * data; } ;
struct TYPE_13__ {int size; TYPE_9__* frame; scalar_t__ mode_8bit; int pal; int const* buf; } ;
typedef TYPE_1__ Msvideo1Context ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*,TYPE_9__*) ;
 int FUNC_1 (TYPE_3__*,int ,char*,...) ;
 int * FUNC_2 (TYPE_2__*,int ,int*) ;
 int FUNC_3 (TYPE_3__*,TYPE_9__*,int ) ;
 int FUNC_4 (int ,int const*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_4,
                                void *VAR_5, int *VAR_6,
                                AVPacket *VAR_7)
{
    const uint8_t *VAR_8 = VAR_7->data;
    int VAR_9 = VAR_7->size;
    Msvideo1Context *VAR_10 = VAR_4->priv_data;
    int VAR_11;

    VAR_10->buf = VAR_8;
    VAR_10->size = VAR_9;


    if (VAR_9 < (VAR_4->width/4) * (VAR_4->height/4) / 512) {
        FUNC_1(VAR_4, VAR_2, "Packet is too small\n");
        return VAR_0;
    }

    if ((VAR_11 = FUNC_3(VAR_4, VAR_10->frame, 0)) < 0)
        return VAR_11;

    if (VAR_10->mode_8bit) {
        int VAR_12;
        const uint8_t *VAR_13 = FUNC_2(VAR_7, VAR_3, &VAR_12);

        if (VAR_13 && VAR_12 == VAR_1) {
            FUNC_4(VAR_10->pal, VAR_13, VAR_1);
            VAR_10->frame->palette_has_changed = 1;
        } else if (VAR_13) {
            FUNC_1(VAR_4, VAR_2, "Palette size %d is wrong\n", VAR_12);
        }
    }

    if (VAR_10->mode_8bit)
        FUNC_6(VAR_10);
    else
        FUNC_5(VAR_10);

    if ((VAR_11 = FUNC_0(VAR_5, VAR_10->frame)) < 0)
        return VAR_11;

    *VAR_6 = 1;


    return VAR_9;
}
