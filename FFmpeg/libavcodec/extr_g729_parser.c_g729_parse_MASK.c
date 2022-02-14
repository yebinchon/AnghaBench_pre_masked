
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int bit_rate; scalar_t__ codec_id; int channels; int frame_size; } ;
struct TYPE_7__ {int duration; TYPE_1__* priv_data; } ;
struct TYPE_6__ {int block_size; int remaining; int duration; int pc; } ;
typedef int ParseContext ;
typedef TYPE_1__ G729ParseContext ;
typedef TYPE_2__ AVCodecParserContext ;
typedef TYPE_3__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int,int const**,int*) ;

__attribute__((used)) static int FUNC_1(AVCodecParserContext *VAR_4, AVCodecContext *VAR_5,
                     const uint8_t **VAR_6, int *VAR_7,
                     const uint8_t *VAR_8, int VAR_9)
{
    G729ParseContext *VAR_10 = VAR_4->priv_data;
    ParseContext *VAR_11 = &VAR_10->pc;
    int VAR_12;

    if (!VAR_10->block_size) {

        VAR_10->block_size = (VAR_5->bit_rate < 8000) ? VAR_2 : VAR_3;
        if (VAR_5->codec_id == VAR_0)
            VAR_10->block_size++;
        VAR_10->block_size *= VAR_5->channels;
        VAR_10->duration = VAR_5->frame_size;
    }

    if (!VAR_10->block_size) {
        *VAR_6 = VAR_8;
        *VAR_7 = VAR_9;
        return VAR_9;
    }

    if (!VAR_10->remaining)
        VAR_10->remaining = VAR_10->block_size;
    if (VAR_10->remaining <= VAR_9) {
        VAR_12 = VAR_10->remaining;
        VAR_10->remaining = 0;
    } else {
        VAR_12 = VAR_1;
        VAR_10->remaining -= VAR_9;
    }

    if (FUNC_0(VAR_11, VAR_12, &VAR_8, &VAR_9) < 0 || !VAR_9) {
        *VAR_6 = ((void*)0);
        *VAR_7 = 0;
        return VAR_9;
    }

    VAR_4->duration = VAR_10->duration;

    *VAR_6 = VAR_8;
    *VAR_7 = VAR_9;
    return VAR_12;
}
