
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int size_in_bits; } ;
struct TYPE_12__ {int workaround_bugs; int pict_type; int mb_num; TYPE_3__ gb; scalar_t__ partitioned_frame; } ;
struct TYPE_13__ {int resync_marker; TYPE_1__ m; } ;
typedef TYPE_1__ MpegEncContext ;
typedef TYPE_2__ Mpeg4DecContext ;
typedef TYPE_3__ GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int* VAR_2 ;
 int FUNC_3 (TYPE_3__*,int) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (TYPE_3__*,int) ;

__attribute__((used)) static inline int FUNC_8(Mpeg4DecContext *VAR_3)
{
    MpegEncContext *VAR_4 = &VAR_3->m;
    int VAR_5 = FUNC_5(&VAR_4->gb);
    int VAR_6 = FUNC_6(&VAR_4->gb, 16);

    if (VAR_4->workaround_bugs & VAR_1 && !VAR_3->resync_marker)
        return 0;

    while (VAR_6 <= 0xFF) {
        if (VAR_4->pict_type == VAR_0 ||
            (VAR_6 >> (8 - VAR_4->pict_type) != 1) || VAR_4->partitioned_frame)
            break;
        FUNC_7(&VAR_4->gb, 8 + VAR_4->pict_type);
        VAR_5 += 8 + VAR_4->pict_type;
        VAR_6 = FUNC_6(&VAR_4->gb, 16);
    }

    if (VAR_5 + 8 >= VAR_4->gb.size_in_bits) {
        VAR_6 >>= 8;
        VAR_6 |= 0x7F >> (7 - (VAR_5 & 7));

        if (VAR_6 == 0x7F)
            return VAR_4->mb_num;
    } else {
        if (VAR_6 == VAR_2[VAR_5 & 7]) {
            int VAR_7, VAR_8;
            int VAR_9 = FUNC_1(VAR_4->mb_num - 1) + 1;
            GetBitContext VAR_10 = VAR_4->gb;

            FUNC_7(&VAR_4->gb, 1);
            FUNC_0(&VAR_4->gb);

            for (VAR_7 = 0; VAR_7 < 32; VAR_7++)
                if (FUNC_4(&VAR_4->gb))
                    break;

            VAR_8 = FUNC_3(&VAR_4->gb, VAR_9);
            if (!VAR_8 || VAR_8 > VAR_4->mb_num || FUNC_5(&VAR_4->gb)+6 > VAR_4->gb.size_in_bits)
                VAR_8= -1;

            VAR_4->gb = VAR_10;

            if (VAR_7 >= FUNC_2(VAR_4))
                return VAR_8;
        }
    }
    return 0;
}
