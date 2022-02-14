
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_11__ {scalar_t__ codec_tag; } ;
struct TYPE_10__ {scalar_t__ format; int width; int height; int linesize; scalar_t__ data; } ;
struct TYPE_9__ {int* data; int flags; int size; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int*,int ,int const**,int ,scalar_t__,int,int,int) ;
 int FUNC_4 (scalar_t__,int,int,int) ;
 int FUNC_5 (TYPE_3__*,TYPE_1__*,int,int) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_3, AVPacket *VAR_4,
                      const AVFrame *VAR_5, int *VAR_6)
{
    int VAR_7 = FUNC_4(VAR_5->format,
                                       VAR_5->width, VAR_5->height, 1);

    if (VAR_7 < 0)
        return VAR_7;

    if ((VAR_7 = FUNC_5(VAR_3, VAR_4, VAR_7, VAR_7)) < 0)
        return VAR_7;
    if ((VAR_7 = FUNC_3(VAR_4->data, VAR_4->size,
                                       (const uint8_t **)VAR_5->data, VAR_5->linesize,
                                       VAR_5->format,
                                       VAR_5->width, VAR_5->height, 1)) < 0)
        return VAR_7;

    if(VAR_3->codec_tag == FUNC_1("yuv2") && VAR_7 > 0 &&
       VAR_5->format == VAR_1) {
        int VAR_8;
        for(VAR_8 = 1; VAR_8 < VAR_5->height*VAR_5->width*2; VAR_8 += 2)
            VAR_4->data[VAR_8] ^= 0x80;
    } else if (VAR_3->codec_tag == FUNC_1("b64a") && VAR_7 > 0 &&
        VAR_5->format == VAR_0) {
        uint64_t VAR_9;
        int VAR_10;
        for (VAR_10 = 0; VAR_10 < VAR_5->height * VAR_5->width; VAR_10++) {
            VAR_9 = FUNC_0(&VAR_4->data[8 * VAR_10]);
            FUNC_2(&VAR_4->data[8 * VAR_10], VAR_9 << 48 | VAR_9 >> 16);
        }
    }
    VAR_4->flags |= VAR_2;
    *VAR_6 = 1;
    return 0;
}
