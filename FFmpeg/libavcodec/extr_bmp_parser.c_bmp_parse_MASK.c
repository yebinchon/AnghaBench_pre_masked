
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_7__ {int state64; int frame_start_found; int index; } ;
struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {int fsize; int remaining_size; TYPE_3__ pc; } ;
typedef TYPE_1__ BMPParseContext ;
typedef TYPE_2__ AVCodecParserContext ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int) ;
 void* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int,int const**,int*) ;

__attribute__((used)) static int FUNC_4(AVCodecParserContext *VAR_1, AVCodecContext *VAR_2,
                     const uint8_t **VAR_3, int *VAR_4,
                     const uint8_t *VAR_5, int VAR_6)
{
    BMPParseContext *VAR_7 = VAR_1->priv_data;
    uint64_t VAR_8 = VAR_7->pc.state64;
    int VAR_9 = VAR_0;
    int VAR_10 = 0;

    *VAR_4 = 0;

restart:
    if (VAR_7->pc.frame_start_found <= 2+4+4) {
        for (; VAR_10 < VAR_6; VAR_10++) {
            VAR_8 = (VAR_8 << 8) | VAR_5[VAR_10];
            if (VAR_7->pc.frame_start_found == 0) {
                if ((VAR_8 >> 48) == (('B' << 8) | 'M')) {
                    VAR_7->fsize = FUNC_2(VAR_8 >> 16);
                    if (VAR_7->fsize > 17)
                        VAR_7->pc.frame_start_found = 1;
                }
            } else if (VAR_7->pc.frame_start_found == 2+4+4) {

                unsigned VAR_11 = FUNC_2(VAR_8);
                if (VAR_11 < 12 || VAR_11 > 200) {
                    VAR_7->pc.frame_start_found = 0;
                    continue;
                }
                VAR_7->pc.frame_start_found++;
                VAR_7->remaining_size = VAR_7->fsize + VAR_10 - 17;

                if (VAR_7->pc.index + VAR_10 > 17) {
                    VAR_9 = VAR_10 - 17;
                    VAR_8 = 0;
                    break;
                } else {
                    VAR_7->pc.state64 = 0;
                    goto restart;
                }
            } else if (VAR_7->pc.frame_start_found)
                VAR_7->pc.frame_start_found++;
        }
        VAR_7->pc.state64 = VAR_8;
    } else {
        if (VAR_7->remaining_size) {
            VAR_10 = FUNC_1(VAR_7->remaining_size, VAR_6);
            VAR_7->remaining_size -= VAR_10;
            if (VAR_7->remaining_size)
                goto flush;

            VAR_7->pc.frame_start_found = 0;
            goto restart;
        }
    }

flush:
    if (FUNC_3(&VAR_7->pc, VAR_9, &VAR_5, &VAR_6) < 0)
        return VAR_6;

    if (VAR_9 != VAR_0 && VAR_9 < 0)
        VAR_7->pc.frame_start_found = FUNC_0(VAR_7->pc.frame_start_found - VAR_10 - 1, 0);
    else
        VAR_7->pc.frame_start_found = 0;

    *VAR_3 = VAR_5;
    *VAR_4 = VAR_6;
    return VAR_9;
}
