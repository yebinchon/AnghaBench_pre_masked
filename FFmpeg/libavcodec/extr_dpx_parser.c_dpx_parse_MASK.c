
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_7__ {int state; int frame_start_found; } ;
struct TYPE_6__ {int pict_type; TYPE_1__* priv_data; } ;
struct TYPE_5__ {int is_be; int index; int remaining_size; int fsize; TYPE_3__ pc; } ;
typedef TYPE_1__ DPXParseContext ;
typedef TYPE_2__ AVCodecParserContext ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char,char,char,char) ;
 int FUNC_2 (char,char,char,char) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int,int const**,int*) ;

__attribute__((used)) static int FUNC_5(AVCodecParserContext *VAR_2, AVCodecContext *VAR_3,
                     const uint8_t **VAR_4, int *VAR_5,
                     const uint8_t *VAR_6, int VAR_7)
{
    DPXParseContext *VAR_8 = VAR_2->priv_data;
    uint32_t VAR_9 = VAR_8->pc.state;
    int VAR_10 = VAR_1;
    int VAR_11 = 0;

    VAR_2->pict_type = VAR_0;

    *VAR_5 = 0;
    if (VAR_7 == 0)
        VAR_10 = 0;

    if (!VAR_8->pc.frame_start_found) {
        for (; VAR_11 < VAR_7; VAR_11++) {
            VAR_9 = (VAR_9 << 8) | VAR_6[VAR_11];
            if (VAR_9 == FUNC_1('S','D','P','X') ||
                VAR_9 == FUNC_2('S','D','P','X')) {
                VAR_8->pc.frame_start_found = 1;
                VAR_8->is_be = VAR_9 == FUNC_1('S','D','P','X');
                VAR_8->index = 0;
                break;
            }
        }
        VAR_8->pc.state = VAR_9;
    } else {
        if (VAR_8->remaining_size) {
            VAR_11 = FUNC_0(VAR_8->remaining_size, VAR_7);
            VAR_8->remaining_size -= VAR_11;
            if (VAR_8->remaining_size)
                goto flush;
        }
    }

    for (; VAR_8->pc.frame_start_found && VAR_11 < VAR_7; VAR_11++) {
        VAR_8->pc.state = (VAR_8->pc.state << 8) | VAR_6[VAR_11];
        VAR_8->index++;
        if (VAR_8->index == 17) {
            VAR_8->fsize = VAR_8->is_be ? VAR_8->pc.state : FUNC_3(VAR_8->pc.state);
            if (VAR_8->fsize <= 1664) {
                VAR_8->pc.frame_start_found = 0;
                goto flush;
            }
            if (VAR_8->fsize > VAR_7 - VAR_11 + 19)
                VAR_8->remaining_size = VAR_8->fsize - VAR_7 + VAR_11 - 19;
            else
                VAR_11 += VAR_8->fsize - 19;

            break;
        } else if (VAR_8->index > 17) {
            if (VAR_8->pc.state == FUNC_1('S','D','P','X') ||
                VAR_8->pc.state == FUNC_2('S','D','P','X')) {
                VAR_10 = VAR_11 - 3;
                break;
            }
        }
    }

flush:
    if (FUNC_4(&VAR_8->pc, VAR_10, &VAR_6, &VAR_7) < 0)
        return VAR_7;

    VAR_8->pc.frame_start_found = 0;

    *VAR_4 = VAR_6;
    *VAR_5 = VAR_7;
    return VAR_10;
}
