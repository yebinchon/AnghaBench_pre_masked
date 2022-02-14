
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int error; int position; int length; int sector_bits; int nb_sectors; scalar_t__* sectors; TYPE_2__* pb_filesystem; } ;
typedef TYPE_1__ WtvFile ;
struct TYPE_7__ {scalar_t__ error; } ;
typedef TYPE_2__ AVIOContext ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int *,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(void *VAR_2, uint8_t *VAR_3, int VAR_4)
{
    WtvFile *VAR_5 = VAR_2;
    AVIOContext *VAR_6 = VAR_5->pb_filesystem;
    int VAR_7 = 0;

    if (VAR_5->error || VAR_6->error)
        return -1;
    if (VAR_5->position >= VAR_5->length || FUNC_1(VAR_6))
        return VAR_0;

    VAR_4 = FUNC_0(VAR_4, VAR_5->length - VAR_5->position);
    while(VAR_7 < VAR_4) {
        int VAR_8;
        int VAR_9 = (1 << VAR_5->sector_bits) - (VAR_5->position & ((1 << VAR_5->sector_bits) - 1));
        int VAR_10 = FUNC_0(VAR_4 - VAR_7, VAR_9);

        VAR_8 = FUNC_2(VAR_6, VAR_3, VAR_10);
        if (VAR_8 <= 0)
            break;
        VAR_7 += VAR_8;
        VAR_3 += VAR_8;
        VAR_5->position += VAR_8;
        if (VAR_8 == VAR_9) {
            int VAR_11 = VAR_5->position >> VAR_5->sector_bits;
            if (VAR_11 >= VAR_5->nb_sectors ||
                (VAR_5->sectors[VAR_11] != VAR_5->sectors[VAR_11 - 1] + (1 << (VAR_5->sector_bits - VAR_1)) &&
                FUNC_3(VAR_6, VAR_5->sectors[VAR_11], 0) < 0)) {
                VAR_5->error = 1;
                break;
            }
        }
    }
    return VAR_7;
}
