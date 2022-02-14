
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int codec_id; int block_align; } ;
struct TYPE_7__ {int duration; TYPE_1__* priv_data; } ;
struct TYPE_6__ {int block_size; int duration; int remaining; int pc; } ;
typedef int ParseContext ;
typedef TYPE_1__ GSMParseContext ;
typedef TYPE_2__ AVCodecParserContext ;
typedef TYPE_3__ AVCodecContext ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int,int const**,int*) ;

__attribute__((used)) static int FUNC_2(AVCodecParserContext *VAR_4, AVCodecContext *VAR_5,
                     const uint8_t **VAR_6, int *VAR_7,
                     const uint8_t *VAR_8, int VAR_9)
{
    GSMParseContext *VAR_10 = VAR_4->priv_data;
    ParseContext *VAR_11 = &VAR_10->pc;
    int VAR_12;

    if (!VAR_10->block_size) {
        switch (VAR_5->codec_id) {
        case 129:
            VAR_10->block_size = VAR_1;
            VAR_10->duration = VAR_2;
            break;
        case 128:
            VAR_10->block_size = VAR_5->block_align ? VAR_5->block_align
                                               : VAR_3;
            VAR_10->duration = VAR_2 * 2;
            break;
        default:
            FUNC_0(0);
        }
    }

    if (!VAR_10->remaining)
        VAR_10->remaining = VAR_10->block_size;
    if (VAR_10->remaining <= VAR_9) {
        VAR_12 = VAR_10->remaining;
        VAR_10->remaining = 0;
    } else {
        VAR_12 = VAR_0;
        VAR_10->remaining -= VAR_9;
    }

    if (FUNC_1(VAR_11, VAR_12, &VAR_8, &VAR_9) < 0 || !VAR_9) {
        *VAR_6 = ((void*)0);
        *VAR_7 = 0;
        return VAR_9;
    }

    VAR_4->duration = VAR_10->duration;

    *VAR_6 = VAR_8;
    *VAR_7 = VAR_9;
    return VAR_12;
}
