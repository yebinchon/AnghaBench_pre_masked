
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_18__ {int avail_out; int * next_out; int avail_in; scalar_t__ next_in; } ;
struct TYPE_17__ {int height; TYPE_3__* priv_data; } ;
struct TYPE_16__ {scalar_t__ data; } ;
struct TYPE_15__ {TYPE_2__* frame1; TYPE_6__ zstream; int stride; TYPE_1__* frame2; int gb; } ;
struct TYPE_14__ {int* linesize; int ** data; } ;
struct TYPE_13__ {int* linesize; int ** data; } ;
typedef TYPE_3__ RASCContext ;
typedef int GetByteContext ;
typedef TYPE_4__ AVPacket ;
typedef TYPE_5__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_5__*,int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned int) ;
 unsigned int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_5__*,TYPE_4__*,unsigned int) ;
 int FUNC_6 (TYPE_6__*,int ) ;
 int FUNC_7 (TYPE_6__*) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_6,
                       AVPacket *VAR_7, unsigned VAR_8)
{
    RASCContext *VAR_9 = VAR_6->priv_data;
    GetByteContext *VAR_10 = &VAR_9->gb;
    uint8_t *VAR_11;
    unsigned VAR_12;
    int VAR_13, VAR_14;

    VAR_12 = FUNC_4(VAR_10);
    if (FUNC_2(VAR_10) == 0x65) {
        VAR_14 = FUNC_5(VAR_6, VAR_7, VAR_8);
        if (VAR_14 < 0)
            return VAR_14;
    }

    if (!VAR_9->frame2->data[0])
        return VAR_1;

    VAR_13 = FUNC_7(&VAR_9->zstream);
    if (VAR_13 != VAR_3) {
        FUNC_0(VAR_6, VAR_2, "Inflate reset error: %d\n", VAR_13);
        return VAR_0;
    }

    VAR_9->zstream.next_in = VAR_7->data + FUNC_4(VAR_10);
    VAR_9->zstream.avail_in = FUNC_1(VAR_10);

    VAR_11 = VAR_9->frame2->data[0] + (VAR_6->height - 1) * VAR_9->frame2->linesize[0];
    for (int VAR_15 = 0; VAR_15 < VAR_6->height; VAR_15++) {
        VAR_9->zstream.next_out = VAR_11;
        VAR_9->zstream.avail_out = VAR_9->stride;

        VAR_13 = FUNC_6(&VAR_9->zstream, VAR_5);
        if (VAR_13 != VAR_3 && VAR_13 != VAR_4) {
            FUNC_0(VAR_6, VAR_2,
                   "Inflate failed with return code: %d.\n", VAR_13);
            return VAR_1;
        }

        VAR_11 -= VAR_9->frame2->linesize[0];
    }

    VAR_11 = VAR_9->frame1->data[0] + (VAR_6->height - 1) * VAR_9->frame1->linesize[0];
    for (int VAR_16 = 0; VAR_16 < VAR_6->height; VAR_16++) {
        VAR_9->zstream.next_out = VAR_11;
        VAR_9->zstream.avail_out = VAR_9->stride;

        VAR_13 = FUNC_6(&VAR_9->zstream, VAR_5);
        if (VAR_13 != VAR_3 && VAR_13 != VAR_4) {
            FUNC_0(VAR_6, VAR_2,
                   "Inflate failed with return code: %d.\n", VAR_13);
            return VAR_1;
        }

        VAR_11 -= VAR_9->frame1->linesize[0];
    }

    FUNC_3(VAR_10, VAR_8 - (FUNC_4(VAR_10) - VAR_12));

    return 0;
}
