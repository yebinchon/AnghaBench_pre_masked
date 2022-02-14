
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int err_recognition; } ;
struct TYPE_9__ {int table; } ;
struct TYPE_8__ {int table; } ;
struct TYPE_7__ {TYPE_6__* avctx; int gb; } ;
typedef TYPE_1__ MpegEncContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_6__*,int ,char*) ;
 TYPE_5__ VAR_6 ;
 TYPE_4__ VAR_7 ;
 int FUNC_1 (TYPE_1__*,int,int,int*,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,int) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static inline int FUNC_6(MpegEncContext *VAR_8, int VAR_9, int *VAR_10)
{
    int VAR_11, VAR_12;

    if (VAR_9 < 4)
        VAR_12 = FUNC_4(&VAR_8->gb, VAR_7.table, VAR_4, 1);
    else
        VAR_12 = FUNC_4(&VAR_8->gb, VAR_6.table, VAR_4, 1);

    if (VAR_12 < 0 || VAR_12 > 9 ) {
        FUNC_0(VAR_8->avctx, VAR_3, "illegal dc vlc\n");
        return VAR_0;
    }

    if (VAR_12 == 0) {
        VAR_11 = 0;
    } else {
        if (VAR_5) {
            if (VAR_12 == 1)
                VAR_11 = 2 * FUNC_3(&VAR_8->gb) - 1;
            else {
                if (FUNC_3(&VAR_8->gb))
                    VAR_11 = FUNC_2(&VAR_8->gb, VAR_12 - 1) + (1 << (VAR_12 - 1));
                else
                    VAR_11 = -FUNC_2(&VAR_8->gb, VAR_12 - 1) - (1 << (VAR_12 - 1));
            }
        } else {
            VAR_11 = FUNC_5(&VAR_8->gb, VAR_12);
        }

        if (VAR_12 > 8) {
            if (FUNC_3(&VAR_8->gb) == 0) {
                if (VAR_8->avctx->err_recognition & (VAR_1|VAR_2)) {
                    FUNC_0(VAR_8->avctx, VAR_3, "dc marker bit missing\n");
                    return VAR_0;
                }
            }
        }
    }

    return FUNC_1(VAR_8, VAR_9, VAR_11, VAR_10, 0);
}
