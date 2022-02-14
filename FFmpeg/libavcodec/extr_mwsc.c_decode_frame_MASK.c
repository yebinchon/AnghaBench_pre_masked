
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;


typedef int uint8_t ;
struct TYPE_20__ {int avail_in; int total_out; int avail_out; int next_out; int * next_in; } ;
struct TYPE_19__ {int height; int width; TYPE_1__* priv_data; } ;
struct TYPE_18__ {int* linesize; scalar_t__ key_frame; int pict_type; int * data; } ;
struct TYPE_17__ {int size; int * data; } ;
struct TYPE_16__ {TYPE_12__* prev_frame; TYPE_5__ zstream; int decomp_buf; int decomp_size; } ;
struct TYPE_15__ {int* linesize; int * data; } ;
typedef int PutByteContext ;
typedef TYPE_1__ MWSCContext ;
typedef int GetByteContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_12__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_12__*) ;
 int FUNC_2 (TYPE_4__*,int ,char*,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_5__*,int ) ;
 int FUNC_7 (TYPE_5__*) ;
 scalar_t__ FUNC_8 (int *,int *,int *,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_9(AVCodecContext *VAR_8,
                        void *VAR_9, int *VAR_10,
                        AVPacket *VAR_11)
{
    MWSCContext *VAR_12 = VAR_8->priv_data;
    AVFrame *VAR_13 = VAR_9;
    uint8_t *VAR_14 = VAR_11->data;
    int VAR_15 = VAR_11->size;
    GetByteContext VAR_16;
    GetByteContext VAR_17;
    PutByteContext VAR_18;
    int VAR_19;

    VAR_19 = FUNC_7(&VAR_12->zstream);
    if (VAR_19 != VAR_6) {
        FUNC_2(VAR_8, VAR_2, "Inflate reset error: %d\n", VAR_19);
        return VAR_0;
    }
    VAR_12->zstream.next_in = VAR_14;
    VAR_12->zstream.avail_in = VAR_15;
    VAR_12->zstream.next_out = VAR_12->decomp_buf;
    VAR_12->zstream.avail_out = VAR_12->decomp_size;
    VAR_19 = FUNC_6(&VAR_12->zstream, VAR_5);
    if (VAR_19 != VAR_7) {
        FUNC_2(VAR_8, VAR_2, "Inflate error: %d\n", VAR_19);
        return VAR_0;
    }

    if ((VAR_19 = FUNC_5(VAR_8, VAR_13, VAR_1)) < 0)
        return VAR_19;

    FUNC_3(&VAR_16, VAR_12->decomp_buf, VAR_12->zstream.total_out);
    FUNC_3(&VAR_17, VAR_12->prev_frame->data[0], VAR_8->height * VAR_12->prev_frame->linesize[0]);
    FUNC_4(&VAR_18, VAR_13->data[0], VAR_8->height * VAR_13->linesize[0]);

    VAR_13->key_frame = FUNC_8(&VAR_16, &VAR_18, &VAR_17, VAR_8->width, VAR_8->height, VAR_8->width * 3,
                                      VAR_13->linesize[0], VAR_12->prev_frame->linesize[0]);

    VAR_13->pict_type = VAR_13->key_frame ? VAR_3 : VAR_4;

    FUNC_1(VAR_12->prev_frame);
    if ((VAR_19 = FUNC_0(VAR_12->prev_frame, VAR_13)) < 0)
        return VAR_19;

    *VAR_10 = 1;

    return VAR_11->size;
}
