
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {int sample_rate; int profile; } ;
struct TYPE_9__ {int flags; int duration; TYPE_1__* priv_data; } ;
struct TYPE_8__ {int startpos; int pc; } ;
typedef int ParseContext ;
typedef TYPE_1__ DCAParseContext ;
typedef TYPE_2__ AVCodecParserContext ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (TYPE_1__*,int const*,int) ;
 int FUNC_2 (TYPE_1__*,int const*,int,int*,int*,int *) ;
 scalar_t__ FUNC_3 (int *,int,int const**,int*) ;

__attribute__((used)) static int FUNC_4(AVCodecParserContext *VAR_1, AVCodecContext *VAR_2,
                     const uint8_t **VAR_3, int *VAR_4,
                     const uint8_t *VAR_5, int VAR_6)
{
    DCAParseContext *VAR_7 = VAR_1->priv_data;
    ParseContext *VAR_8 = &VAR_7->pc;
    int VAR_9, VAR_10, VAR_11;

    if (VAR_1->flags & VAR_0) {
        VAR_9 = VAR_6;
    } else {
        VAR_9 = FUNC_1(VAR_7, VAR_5, VAR_6);

        if (FUNC_3(VAR_8, VAR_9, &VAR_5, &VAR_6) < 0) {
            *VAR_3 = ((void*)0);
            *VAR_4 = 0;
            return VAR_6;
        }


        if (VAR_6 > VAR_7->startpos) {
            VAR_5 += VAR_7->startpos;
            VAR_6 -= VAR_7->startpos;
        }
        VAR_7->startpos = 0;
    }


    if (!FUNC_2(VAR_7, VAR_5, VAR_6, &VAR_10, &VAR_11, &VAR_2->profile)) {
        if (!VAR_2->sample_rate)
            VAR_2->sample_rate = VAR_11;
        VAR_1->duration = FUNC_0(VAR_10, VAR_2->sample_rate, VAR_11);
    } else
        VAR_1->duration = 0;

    *VAR_3 = VAR_5;
    *VAR_4 = VAR_6;
    return VAR_9;
}
