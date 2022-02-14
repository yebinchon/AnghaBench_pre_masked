
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int profile; int show_existing_frame; int refresh_frame_flags; void* show_frame; void* frame_type; void* frame_to_show; TYPE_1__* packet; } ;
typedef TYPE_2__ VP9RawReorderFrame ;
struct TYPE_4__ {int size; int data; } ;
typedef int GetBitContext ;
typedef int AVBSFContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*,...) ;
 void* FUNC_1 (int *,int) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(AVBSFContext *VAR_2, VP9RawReorderFrame *VAR_3)
{
    GetBitContext VAR_4;
    int VAR_5;

    unsigned int VAR_6;
    unsigned int VAR_7, VAR_8, VAR_9;
    unsigned int VAR_10;
    unsigned int VAR_11;

    VAR_5 = FUNC_3(&VAR_4, VAR_3->packet->data, 8 * VAR_3->packet->size);
    if (VAR_5)
        return VAR_5;

    VAR_6 = FUNC_1(&VAR_4, 2);
    if (VAR_6 != 2) {
        FUNC_0(VAR_2, VAR_1, "Invalid frame marker: %u.\n",
               VAR_6);
        return VAR_0;
    }

    VAR_7 = FUNC_2(&VAR_4);
    VAR_8 = FUNC_2(&VAR_4);
    VAR_3->profile = (VAR_8 << 1) | VAR_7;
    if (VAR_3->profile == 3) {
        VAR_9 = FUNC_2(&VAR_4);
        if (VAR_9 != 0) {
            FUNC_0(VAR_2, VAR_1, "Profile reserved_zero bit set: "
                   "unsupported profile or invalid bitstream.\n");
            return VAR_0;
        }
    }

    VAR_3->show_existing_frame = FUNC_2(&VAR_4);
    if (VAR_3->show_existing_frame) {
        VAR_3->frame_to_show = FUNC_1(&VAR_4, 3);
        return 0;
    }

    VAR_3->frame_type = FUNC_2(&VAR_4);
    VAR_3->show_frame = FUNC_2(&VAR_4);
    VAR_10 = FUNC_2(&VAR_4);

    if (VAR_3->frame_type == 0) {
        VAR_11 = FUNC_1(&VAR_4, 24);
        if (VAR_11 != 0x498342) {
            FUNC_0(VAR_2, VAR_1, "Invalid frame sync code: %06x.\n",
                   VAR_11);
            return VAR_0;
        }
        VAR_3->refresh_frame_flags = 0xff;
    } else {
        unsigned int VAR_12;

        if (VAR_3->show_frame == 0)
            VAR_12 = FUNC_2(&VAR_4);
        else
            VAR_12 = 0;
        if (VAR_10 == 0) {

            FUNC_4(&VAR_4, 2);
        }
        if (VAR_12) {
            VAR_11 = FUNC_1(&VAR_4, 24);
            if (VAR_11 != 0x498342) {
                FUNC_0(VAR_2, VAR_1, "Invalid frame sync code: "
                       "%06x.\n", VAR_11);
                return VAR_0;
            }
            if (VAR_3->profile > 0) {
                unsigned int VAR_13;
                if (VAR_3->profile >= 2) {

                    FUNC_4(&VAR_4, 1);
                }
                VAR_13 = FUNC_1(&VAR_4, 3);
                if (VAR_13 != 7 ) {

                    FUNC_4(&VAR_4, 1);
                    if (VAR_3->profile == 1 || VAR_3->profile == 3) {

                        FUNC_4(&VAR_4, 3);
                    }
                } else {
                    if (VAR_3->profile == 1 || VAR_3->profile == 3)
                        FUNC_4(&VAR_4, 1);
                }
            }
            VAR_3->refresh_frame_flags = FUNC_1(&VAR_4, 8);
        } else {
            VAR_3->refresh_frame_flags = FUNC_1(&VAR_4, 8);
        }
    }

    return 0;
}
