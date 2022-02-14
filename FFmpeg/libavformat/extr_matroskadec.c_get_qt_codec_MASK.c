
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_7__ {scalar_t__ data; } ;
struct TYPE_5__ {scalar_t__ data; scalar_t__ size; TYPE_4__* buf; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__ codec_priv; } ;
typedef TYPE_2__ MatroskaTrack ;
typedef int AVCodecTag ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_4__**,scalar_t__) ;
 int FUNC_3 (int const*,int ) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(MatroskaTrack *VAR_4, uint32_t *VAR_5, enum AVCodecID *VAR_6)
{
    const AVCodecTag *VAR_7;

    VAR_7 = VAR_4->type == VAR_1 ?
            VAR_3 : VAR_2;




    if (FUNC_3(VAR_7, FUNC_0(VAR_4->codec_priv.data))) {
        int VAR_8 = FUNC_2(&VAR_4->codec_priv.buf,
                                    VAR_4->codec_priv.size + 4 + VAR_0);
        if (VAR_8 < 0)
            return VAR_8;

        VAR_4->codec_priv.data = VAR_4->codec_priv.buf->data;
        FUNC_4(VAR_4->codec_priv.data + 4, VAR_4->codec_priv.data, VAR_4->codec_priv.size);
        VAR_4->codec_priv.size += 4;
        FUNC_1(VAR_4->codec_priv.data, VAR_4->codec_priv.size);
    }

    *VAR_5 = FUNC_0(VAR_4->codec_priv.data + 4);
    *VAR_6 = FUNC_3(VAR_7, *VAR_5);

    return 0;
}
