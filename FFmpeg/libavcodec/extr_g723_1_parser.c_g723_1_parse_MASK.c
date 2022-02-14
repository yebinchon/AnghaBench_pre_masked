
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int channels; } ;
struct TYPE_7__ {int duration; TYPE_1__* priv_data; } ;
struct TYPE_6__ {int pc; } ;
typedef int ParseContext ;
typedef TYPE_1__ G723_1ParseContext ;
typedef TYPE_2__ AVCodecParserContext ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int *,int,int const**,int*) ;
 int* VAR_1 ;

__attribute__((used)) static int FUNC_2(AVCodecParserContext *VAR_2, AVCodecContext *VAR_3,
                        const uint8_t **VAR_4, int *VAR_5,
                        const uint8_t *VAR_6, int VAR_7)
{
    G723_1ParseContext *VAR_8 = VAR_2->priv_data;
    ParseContext *VAR_9 = &VAR_8->pc;
    int VAR_10 = VAR_0;

    if (VAR_7 > 0)
        VAR_10 = VAR_1[VAR_6[0] & 3] * FUNC_0(1, VAR_3->channels);

    if (FUNC_1(VAR_9, VAR_10, &VAR_6, &VAR_7) < 0 || !VAR_7) {
        *VAR_4 = ((void*)0);
        *VAR_5 = 0;
        return VAR_7;
    }

    VAR_2->duration = 240;

    *VAR_4 = VAR_6;
    *VAR_5 = VAR_7;
    return VAR_10;
}
