
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uLongf ;
struct TYPE_16__ {int* linesize; scalar_t__* data; } ;
struct TYPE_15__ {int width; int height; int pix_fmt; TYPE_1__* priv_data; } ;
struct TYPE_14__ {int key_frame; int pict_type; } ;
struct TYPE_13__ {int size; int* data; } ;
struct TYPE_12__ {TYPE_8__* current; int inflated_buf; int inflated_size; } ;
typedef TYPE_1__ ScreenpressoContext ;
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
 int VAR_8 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_3__*,TYPE_8__*) ;
 int FUNC_2 (scalar_t__,int,int ,int,int,int) ;
 int FUNC_3 (TYPE_4__*,int ,char*,int) ;
 int FUNC_4 (TYPE_4__*,TYPE_8__*,int ) ;
 int FUNC_5 (scalar_t__,int,int ,int,int,int) ;
 int FUNC_6 (int ,int *,int*,int) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_9, void *VAR_10,
                                     int *VAR_11, AVPacket *VAR_12)
{
    ScreenpressoContext *VAR_13 = VAR_9->priv_data;
    AVFrame *VAR_14 = VAR_10;
    uLongf VAR_15 = VAR_13->inflated_size;
    int VAR_16, VAR_17, VAR_18;
    int VAR_19;


    if (VAR_12->size < 3) {
        FUNC_3(VAR_9, VAR_3, "Packet too small (%d)\n", VAR_12->size);
        return VAR_0;
    }


    FUNC_3(VAR_9, VAR_2, "Compression level %d\n", VAR_12->data[0] >> 4);
    VAR_16 = VAR_12->data[0] & 1;


    VAR_17 = ((VAR_12->data[1] >> 2) & 0x03) + 1;
    switch (VAR_17) {
    case 2:
        VAR_9->pix_fmt = VAR_8;
        break;
    case 3:
        VAR_9->pix_fmt = VAR_7;
        break;
    case 4:
        VAR_9->pix_fmt = VAR_6;
        break;
    default:
        FUNC_3(VAR_9, VAR_3, "Invalid bits per pixel value (%d)\n",
               VAR_17);
        return VAR_0;
    }


    VAR_19 = FUNC_6(VAR_13->inflated_buf, &VAR_15,
                     VAR_12->data + 2, VAR_12->size - 2);
    if (VAR_19) {
        FUNC_3(VAR_9, VAR_3, "Deflate error %d.\n", VAR_19);
        return VAR_1;
    }

    VAR_19 = FUNC_4(VAR_9, VAR_13->current, 0);
    if (VAR_19 < 0)
        return VAR_19;


    VAR_18 = FUNC_0(VAR_9->width * VAR_17, 4);


    if (VAR_16)
        FUNC_2(VAR_13->current->data[0] +
                            VAR_13->current->linesize[0] * (VAR_9->height - 1),
                            -1 * VAR_13->current->linesize[0],
                            VAR_13->inflated_buf, VAR_18,
                            VAR_9->width * VAR_17, VAR_9->height);

    else
        FUNC_5(VAR_13->current->data[0], VAR_13->current->linesize[0],
                          VAR_13->inflated_buf, VAR_18,
                          VAR_9->width * VAR_17, VAR_9->height);


    VAR_19 = FUNC_1(VAR_14, VAR_13->current);
    if (VAR_19 < 0)
        return VAR_19;


    if (VAR_16) {
        VAR_14->pict_type = VAR_4;
        VAR_14->key_frame = 1;
    } else {
        VAR_14->pict_type = VAR_5;
    }
    *VAR_11 = 1;

    return VAR_12->size;
}
