
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_11__ {int bits_per_coded_sample; int width; int height; } ;
struct TYPE_10__ {int size; scalar_t__ data; } ;
typedef TYPE_1__ AVPacket ;
typedef int AVFormatContext ;
typedef TYPE_2__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__**) ;
 int FUNC_6 (scalar_t__,scalar_t__,int) ;
 int FUNC_7 (scalar_t__,int ,int) ;

int FUNC_8(AVFormatContext *VAR_1, AVPacket **VAR_2, AVCodecParameters *VAR_3, int VAR_4)
{
    int VAR_5;
    AVPacket *VAR_6 = *VAR_2;
    int64_t VAR_7 = VAR_3->bits_per_coded_sample != 15 ? VAR_3->bits_per_coded_sample : 16;
    int VAR_8 = (VAR_3->width * VAR_7 + 7) >> 3;
    int VAR_9 = VAR_8 * VAR_3->height + 1024;
    int VAR_10 = VAR_7 == 8 && VAR_6->size == VAR_9;
    int VAR_11 = VAR_10 ? VAR_8 * VAR_3->height : VAR_6->size;
    int VAR_12 = VAR_11 / VAR_3->height;
    int VAR_13 = VAR_4 - FUNC_1(VAR_4, VAR_12);
    int VAR_14;
    AVPacket *VAR_15;

    if (VAR_6->size == VAR_4 * VAR_3->height)
        return 0;
    if (VAR_11 != VAR_12 * VAR_3->height)
        return 0;

    VAR_15 = FUNC_3();
    if (!VAR_15)
        return FUNC_0(VAR_0);

    VAR_5 = FUNC_2(VAR_15, VAR_4 * VAR_3->height);
    if (VAR_5 < 0)
        goto fail;

    VAR_5 = FUNC_4(VAR_15, VAR_6);
    if (VAR_5 < 0)
        goto fail;

    for (VAR_14 = 0; VAR_14<VAR_3->height; VAR_14++) {
        FUNC_6(VAR_15->data + VAR_14*VAR_4, VAR_6->data + VAR_14*VAR_12, FUNC_1(VAR_4, VAR_12));
        FUNC_7(VAR_15->data + VAR_14*VAR_4 + VAR_4 - VAR_13, 0, VAR_13);
    }

    *VAR_2 = VAR_15;
    return 1 + VAR_10;
fail:
    FUNC_5(&VAR_15);

    return VAR_5;
}
