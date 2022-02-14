
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ format; int * linesize; int * data; } ;
struct TYPE_14__ {int err_recognition; TYPE_2__* priv_data; } ;
struct TYPE_13__ {int size; int data; } ;
struct TYPE_12__ {TYPE_7__* jpgframe; TYPE_1__* refframe; int jpeg_avctx; int tilebuffer; } ;
struct TYPE_11__ {int* linesize; scalar_t__* data; } ;
typedef TYPE_2__ TDSCContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_4__*,int ,char*,...) ;
 int FUNC_3 (int ,TYPE_7__*) ;
 int FUNC_4 (int ,TYPE_3__*) ;
 int FUNC_5 (scalar_t__,int,int ,int ,int ,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_4, int VAR_5,
                                 int VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
    TDSCContext *VAR_10 = VAR_4->priv_data;
    AVPacket VAR_11;
    int VAR_12;


    FUNC_1(&VAR_11);
    VAR_11.data = VAR_10->tilebuffer;
    VAR_11.size = VAR_5;

    VAR_12 = FUNC_4(VAR_10->jpeg_avctx, &VAR_11);
    if (VAR_12 < 0) {
        FUNC_2(VAR_4, VAR_2, "Error submitting a packet for decoding\n");
        return VAR_12;
    }

    VAR_12 = FUNC_3(VAR_10->jpeg_avctx, VAR_10->jpgframe);
    if (VAR_12 < 0 || VAR_10->jpgframe->format != VAR_3) {
        FUNC_2(VAR_4, VAR_2,
               "JPEG decoding error (%d).\n", VAR_12);


        if (VAR_4->err_recognition & VAR_1)
            return VAR_0;
        else
            return 0;
    }


    FUNC_5(VAR_10->refframe->data[0] + VAR_6 * 3 + VAR_10->refframe->linesize[0] * VAR_7,
              VAR_10->refframe->linesize[0],
              VAR_10->jpgframe->data[0], VAR_10->jpgframe->linesize[0],
              VAR_10->jpgframe->data[1], VAR_10->jpgframe->data[2],
              VAR_10->jpgframe->linesize[1], VAR_8, VAR_9);

    FUNC_0(VAR_10->jpgframe);

    return 0;
}
