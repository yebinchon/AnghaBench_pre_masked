
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_24__ {int width; int height; scalar_t__ pix_fmt; TYPE_2__* priv_data; } ;
struct TYPE_23__ {int flags; scalar_t__ size; int data; } ;
struct TYPE_22__ {int const* hsample; int const* vsample; int matrix; int pred; int scantable; } ;
struct TYPE_21__ {scalar_t__ buf; } ;
typedef TYPE_1__ PutBitContext ;
typedef TYPE_2__ LJpegEncContext ;
typedef TYPE_3__ AVPacket ;
typedef int AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*,int,int ) ;
 int FUNC_2 (TYPE_4__*,TYPE_1__*,int *,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_7 (TYPE_4__*,TYPE_1__*,int const*) ;
 int FUNC_8 (TYPE_4__*,TYPE_1__*,int const*) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_11(AVCodecContext *VAR_5, AVPacket *VAR_6,
                              const AVFrame *VAR_7, int *VAR_8)
{
    LJpegEncContext *VAR_9 = VAR_5->priv_data;
    PutBitContext VAR_10;
    const int VAR_11 = VAR_5->width;
    const int VAR_12 = VAR_5->height;
    const int VAR_13 = (VAR_11 + VAR_9->hsample[0] - 1) / VAR_9->hsample[0];
    const int VAR_14 = (VAR_12 + VAR_9->vsample[0] - 1) / VAR_9->vsample[0];
    int VAR_15 = VAR_0;
    int VAR_16, VAR_17;

    if( VAR_5->pix_fmt == VAR_1
        || VAR_5->pix_fmt == VAR_2)
        VAR_15 += VAR_11 * VAR_12 * 3 * 4;
    else if(VAR_5->pix_fmt == VAR_3)
        VAR_15 += VAR_11 * VAR_12 * 4 * 4;
    else {
        VAR_15 += VAR_13 * VAR_14 * 3 * 4
                        * VAR_9->hsample[0] * VAR_9->vsample[0];
    }

    if ((VAR_16 = FUNC_1(VAR_5, VAR_6, VAR_15, 0)) < 0)
        return VAR_16;

    FUNC_6(&VAR_10, VAR_6->data, VAR_6->size);

    FUNC_2(VAR_5, &VAR_10, &VAR_9->scantable,
                                   VAR_9->pred, VAR_9->matrix, VAR_9->matrix);

    VAR_17 = FUNC_9(&VAR_10);

    if( VAR_5->pix_fmt == VAR_1
        || VAR_5->pix_fmt == VAR_3
        || VAR_5->pix_fmt == VAR_2)
        VAR_16 = FUNC_7(VAR_5, &VAR_10, VAR_7);
    else
        VAR_16 = FUNC_8(VAR_5, &VAR_10, VAR_7);
    if (VAR_16 < 0)
        return VAR_16;

    FUNC_0();

    FUNC_4(&VAR_10, VAR_17 >> 3);
    FUNC_3(&VAR_10, VAR_17);

    FUNC_5(&VAR_10);
    VAR_6->size = FUNC_10(&VAR_10) - VAR_10.buf;
    VAR_6->flags |= VAR_4;
    *VAR_8 = 1;

    return 0;
}
