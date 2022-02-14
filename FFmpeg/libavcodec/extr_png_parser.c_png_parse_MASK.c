
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_7__ {int frame_start_found; int state64; int state; } ;
struct TYPE_6__ {int pict_type; TYPE_1__* priv_data; } ;
struct TYPE_5__ {int remaining_size; int chunk_pos; int chunk_length; TYPE_4__ pc; } ;
typedef TYPE_1__ PNGParseContext ;
typedef TYPE_2__ AVCodecParserContext ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char,char,char,char) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_4__*,int,int const**,int*) ;

__attribute__((used)) static int FUNC_3(AVCodecParserContext *VAR_4, AVCodecContext *VAR_5,
                     const uint8_t **VAR_6, int *VAR_7,
                     const uint8_t *VAR_8, int VAR_9)
{
    PNGParseContext *VAR_10 = VAR_4->priv_data;
    int VAR_11 = VAR_1;
    int VAR_12 = 0;

    VAR_4->pict_type = VAR_0;

    *VAR_7 = 0;

    if (!VAR_10->pc.frame_start_found) {
        uint64_t VAR_13 = VAR_10->pc.state64;
        for (; VAR_12 < VAR_9; VAR_12++) {
            VAR_13 = (VAR_13 << 8) | VAR_8[VAR_12];
            if (VAR_13 == VAR_3 || VAR_13 == VAR_2) {
                VAR_12++;
                VAR_10->pc.frame_start_found = 1;
                break;
            }
        }
        VAR_10->pc.state64 = VAR_13;
    } else if (VAR_10->remaining_size) {
        VAR_12 = FUNC_0(VAR_10->remaining_size, VAR_9);
        VAR_10->remaining_size -= VAR_12;
        if (VAR_10->remaining_size)
            goto flush;
        if (VAR_10->chunk_pos == -1) {
            VAR_11 = VAR_12;
            goto flush;
        }
    }

    for (; VAR_10->pc.frame_start_found && VAR_12 < VAR_9; VAR_12++) {
        VAR_10->pc.state = (VAR_10->pc.state << 8) | VAR_8[VAR_12];
        if (VAR_10->chunk_pos == 3) {
            VAR_10->chunk_length = VAR_10->pc.state;
            if (VAR_10->chunk_length > 0x7fffffff) {
                VAR_10->chunk_pos = VAR_10->pc.frame_start_found = 0;
                goto flush;
            }
            VAR_10->chunk_length += 4;
        } else if (VAR_10->chunk_pos == 7) {
            if (VAR_10->chunk_length >= VAR_9 - VAR_12)
                VAR_10->remaining_size = VAR_10->chunk_length - VAR_9 + VAR_12 + 1;
            if (VAR_10->pc.state == FUNC_1('I', 'E', 'N', 'D')) {
                if (VAR_10->remaining_size)
                    VAR_10->chunk_pos = -1;
                else
                    VAR_11 = VAR_10->chunk_length + VAR_12 + 1;
                break;
            } else {
                VAR_10->chunk_pos = 0;
                if (VAR_10->remaining_size)
                    break;
                else
                    VAR_12 += VAR_10->chunk_length;
                continue;
            }
        }
        VAR_10->chunk_pos++;
    }

flush:
    if (FUNC_2(&VAR_10->pc, VAR_11, &VAR_8, &VAR_9) < 0)
        return VAR_9;

    VAR_10->chunk_pos = VAR_10->pc.frame_start_found = 0;

    *VAR_6 = VAR_8;
    *VAR_7 = VAR_9;
    return VAR_11;
}
