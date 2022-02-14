
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_18__ {int width; int height; scalar_t__ pix_fmt; TYPE_1__* priv_data; } ;
struct TYPE_17__ {int* linesize; scalar_t__* data; } ;
struct TYPE_16__ {int flags; int size; int data; } ;
struct TYPE_14__ {int avail_in; int total_out; scalar_t__ next_in; int avail_out; int next_out; } ;
struct TYPE_15__ {TYPE_10__ zstream; } ;
typedef TYPE_1__ LclEncContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_4__*,int ,char*,...) ;
 int FUNC_1 (TYPE_10__*,int ) ;
 int FUNC_2 (TYPE_10__*,int) ;
 int FUNC_3 (TYPE_10__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_2__*,int,int ) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_7, AVPacket *VAR_8,
                        const AVFrame *VAR_9, int *VAR_10)
{
    LclEncContext *VAR_11 = VAR_7->priv_data;
    int VAR_12, VAR_13;
    int VAR_14;
    int VAR_15 = FUNC_2(&VAR_11->zstream, VAR_7->width * VAR_7->height * 3);

    if ((VAR_13 = FUNC_4(VAR_7, VAR_8, VAR_15, 0)) < 0)
        return VAR_13;

    if(VAR_7->pix_fmt != VAR_1){
        FUNC_0(VAR_7, VAR_0, "Format not supported!\n");
        return -1;
    }

    VAR_14 = FUNC_3(&VAR_11->zstream);
    if (VAR_14 != VAR_5) {
        FUNC_0(VAR_7, VAR_0, "Deflate reset error: %d\n", VAR_14);
        return -1;
    }
    VAR_11->zstream.next_out = VAR_8->data;
    VAR_11->zstream.avail_out = VAR_8->size;

    for(VAR_12 = VAR_7->height - 1; VAR_12 >= 0; VAR_12--) {
        VAR_11->zstream.next_in = VAR_9->data[0]+VAR_9->linesize[0]*VAR_12;
        VAR_11->zstream.avail_in = VAR_7->width*3;
        VAR_14 = FUNC_1(&VAR_11->zstream, VAR_4);
        if (VAR_14 != VAR_5) {
            FUNC_0(VAR_7, VAR_0, "Deflate error: %d\n", VAR_14);
            return -1;
        }
    }
    VAR_14 = FUNC_1(&VAR_11->zstream, VAR_3);
    if (VAR_14 != VAR_6) {
        FUNC_0(VAR_7, VAR_0, "Deflate error: %d\n", VAR_14);
        return -1;
    }

    VAR_8->size = VAR_11->zstream.total_out;
    VAR_8->flags |= VAR_2;
    *VAR_10 = 1;

    return 0;
}
