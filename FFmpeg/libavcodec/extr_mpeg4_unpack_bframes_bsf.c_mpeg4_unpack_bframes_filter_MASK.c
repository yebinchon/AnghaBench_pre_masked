
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {TYPE_3__* b_frame_ref; } ;
typedef TYPE_1__ UnpackBFramesBSFContext ;
struct TYPE_18__ {TYPE_1__* priv_data; } ;
struct TYPE_17__ {char* data; int size; } ;
struct TYPE_16__ {char* data; int size; TYPE_3__* buf; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVBufferRef ;
typedef TYPE_4__ AVBSFContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__**) ;
 int FUNC_3 (TYPE_4__*,int ,char*,...) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_7 (char*,int,int*,int*,int*) ;

__attribute__((used)) static int FUNC_8(AVBSFContext *VAR_4, AVPacket *VAR_5)
{
    UnpackBFramesBSFContext *VAR_6 = VAR_4->priv_data;
    int VAR_7 = -1, VAR_8 = 0, VAR_9 = -1, VAR_10 = 0;

    VAR_10 = FUNC_6(VAR_4, VAR_5);
    if (VAR_10 < 0)
        return VAR_10;

    FUNC_7(VAR_5->data, VAR_5->size, &VAR_7, &VAR_8, &VAR_9);
    FUNC_3(VAR_4, VAR_0, "Found %d VOP startcode(s) in this packet.\n", VAR_8);

    if (VAR_9 >= 0) {
        if (VAR_6->b_frame_ref) {
            FUNC_3(VAR_4, VAR_1,
                   "Missing one N-VOP packet, discarding one B-frame.\n");
            FUNC_2(&VAR_6->b_frame_ref);
        }

        VAR_6->b_frame_ref = FUNC_1(VAR_5->buf);
        if (!VAR_6->b_frame_ref) {
            VAR_10 = FUNC_0(VAR_2);
            goto fail;
        }
        VAR_6->b_frame_ref->data = VAR_5->data + VAR_9;
        VAR_6->b_frame_ref->size = VAR_5->size - VAR_9;
    }

    if (VAR_8 > 2) {
        FUNC_3(VAR_4, VAR_1,
       "Found %d VOP headers in one packet, only unpacking one.\n", VAR_8);
    }

    if (VAR_8 == 1 && VAR_6->b_frame_ref) {
        AVBufferRef *VAR_11 = VAR_5->buf;


        VAR_11->data = VAR_5->data;
        VAR_11->size = VAR_5->size;


        VAR_5->buf = VAR_6->b_frame_ref;
        VAR_5->data = VAR_6->b_frame_ref->data;
        VAR_5->size = VAR_6->b_frame_ref->size;


        VAR_6->b_frame_ref = VAR_11;

        if (VAR_6->b_frame_ref->size <= VAR_3) {

            FUNC_3(VAR_4, VAR_0, "Skipping N-VOP.\n");
            FUNC_2(&VAR_6->b_frame_ref);
        }
    } else if (VAR_8 >= 2) {

        VAR_5->size = VAR_9;
    } else if (VAR_7 >= 0) {
        VAR_10 = FUNC_4(VAR_5);
        if (VAR_10 < 0)
            goto fail;
        FUNC_3(VAR_4, VAR_0, "Updating DivX userdata (remove trailing 'p').\n");

        VAR_5->data[VAR_7] = '\0';
    } else {

    }

fail:
    if (VAR_10 < 0)
        FUNC_5(VAR_5);

    return VAR_10;
}
