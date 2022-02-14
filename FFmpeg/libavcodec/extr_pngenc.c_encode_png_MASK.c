
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_12__ {int width; int height; TYPE_1__* priv_data; } ;
struct TYPE_11__ {int flags; scalar_t__ size; scalar_t__ data; } ;
struct TYPE_10__ {int bits_per_pixel; scalar_t__ bytestream_start; scalar_t__ bytestream; scalar_t__ bytestream_end; int zstream; } ;
typedef TYPE_1__ PNGEncContext ;
typedef TYPE_2__ AVPacket ;
typedef int AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char,char,char,char) ;
 int VAR_5 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_3__*,int const*) ;
 int FUNC_5 (TYPE_3__*,int const*) ;
 int FUNC_6 (TYPE_3__*,TYPE_2__*,size_t,int ) ;
 int FUNC_7 (scalar_t__*,int ,int *,int ) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_6, AVPacket *VAR_7,
                      const AVFrame *VAR_8, int *VAR_9)
{
    PNGEncContext *VAR_10 = VAR_6->priv_data;
    int VAR_11;
    int VAR_12;
    size_t VAR_13;

    VAR_12 = FUNC_3(&VAR_10->zstream, (VAR_6->width * VAR_10->bits_per_pixel + 7) >> 3);
    VAR_13 =
        VAR_0 +
        VAR_6->height * (
            VAR_12 +
            12 * (((int64_t)VAR_12 + VAR_4 - 1) / VAR_4)
        );
    if (VAR_13 > VAR_3)
        return FUNC_0(VAR_2);
    VAR_11 = FUNC_6(VAR_6, VAR_7, VAR_13, 0);
    if (VAR_11 < 0)
        return VAR_11;

    VAR_10->bytestream_start =
    VAR_10->bytestream = VAR_7->data;
    VAR_10->bytestream_end = VAR_7->data + VAR_7->size;

    FUNC_1(VAR_10->bytestream, VAR_5);
    VAR_10->bytestream += 8;

    VAR_11 = FUNC_5(VAR_6, VAR_8);
    if (VAR_11 < 0)
        return VAR_11;

    VAR_11 = FUNC_4(VAR_6, VAR_8);
    if (VAR_11 < 0)
        return VAR_11;

    FUNC_7(&VAR_10->bytestream, FUNC_2('I', 'E', 'N', 'D'), ((void*)0), 0);

    VAR_7->size = VAR_10->bytestream - VAR_10->bytestream_start;
    VAR_7->flags |= VAR_1;
    *VAR_9 = 1;

    return 0;
}
