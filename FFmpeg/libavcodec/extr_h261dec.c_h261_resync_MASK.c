
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int gb; int last_resync_gb; } ;
struct TYPE_6__ {scalar_t__ gob_start_code_skipped; TYPE_1__ s; } ;
typedef TYPE_1__ MpegEncContext ;
typedef TYPE_2__ H261Context ;
typedef int GetBitContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(H261Context *VAR_0)
{
    MpegEncContext *const VAR_1 = &VAR_0->s;
    int VAR_2, VAR_3;

    if (VAR_0->gob_start_code_skipped) {
        VAR_3 = FUNC_2(VAR_0);
        if (VAR_3 >= 0)
            return 0;
    } else {
        if (FUNC_3(&VAR_1->gb, 15) == 0) {
            VAR_3 = FUNC_2(VAR_0);
            if (VAR_3 >= 0)
                return 0;
        }

        VAR_1->gb = VAR_1->last_resync_gb;
        FUNC_0(&VAR_1->gb);
        VAR_2 = FUNC_1(&VAR_1->gb);

        for (; VAR_2 > 15 + 1 + 4 + 5; VAR_2 -= 8) {
            if (FUNC_3(&VAR_1->gb, 15) == 0) {
                GetBitContext VAR_4 = VAR_1->gb;

                VAR_3 = FUNC_2(VAR_0);
                if (VAR_3 >= 0)
                    return 0;

                VAR_1->gb = VAR_4;
            }
            FUNC_4(&VAR_1->gb, 8);
        }
    }

    return -1;
}
