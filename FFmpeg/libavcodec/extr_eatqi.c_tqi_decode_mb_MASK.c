
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_5__ {int permutated; } ;
struct TYPE_6__ {int (* clear_blocks ) (int *) ;} ;
struct TYPE_7__ {int mb_y; int mb_x; int avctx; int last_dc; TYPE_1__ intra_scantable; int intra_matrix; int gb; TYPE_2__ bdsp; } ;
typedef TYPE_3__ TqiContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,int ,int ) ;
 int FUNC_1 (int *,int ,int ,int ,int *,int,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(TqiContext *VAR_1, int16_t (*VAR_2)[64])
{
    int VAR_3;

    VAR_1->bdsp.clear_blocks(VAR_2[0]);
    for (VAR_3 = 0; VAR_3 < 6; VAR_3++) {
        int VAR_4 = FUNC_1(&VAR_1->gb,
                                              VAR_1->intra_matrix,
                                              VAR_1->intra_scantable.permutated,
                                              VAR_1->last_dc, VAR_2[VAR_3], VAR_3, 1);
        if (VAR_4 < 0) {
            FUNC_0(VAR_1->avctx, VAR_0, "ac-tex damaged at %d %d\n",
                   VAR_1->mb_x, VAR_1->mb_y);
            return VAR_4;
        }
    }

    return 0;
}
