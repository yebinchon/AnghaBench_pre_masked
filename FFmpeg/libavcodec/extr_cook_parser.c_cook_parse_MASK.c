
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int extradata_size; int channels; scalar_t__ extradata; } ;
struct TYPE_7__ {int duration; TYPE_1__* priv_data; } ;
struct TYPE_6__ {int duration; } ;
typedef TYPE_1__ CookParseContext ;
typedef TYPE_2__ AVCodecParserContext ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(AVCodecParserContext *VAR_0, AVCodecContext *VAR_1,
                      const uint8_t **VAR_2, int *VAR_3,
                      const uint8_t *VAR_4, int VAR_5)
{
    CookParseContext *VAR_6 = VAR_0->priv_data;

    if (!VAR_6->duration &&
                VAR_1->extradata && VAR_1->extradata_size >= 8 && VAR_1->channels)
        VAR_6->duration = FUNC_0(VAR_1->extradata + 4) / VAR_1->channels;

    VAR_0->duration = VAR_6->duration;



    *VAR_2 = VAR_4;
    *VAR_3 = VAR_5;
    return VAR_5;
}
