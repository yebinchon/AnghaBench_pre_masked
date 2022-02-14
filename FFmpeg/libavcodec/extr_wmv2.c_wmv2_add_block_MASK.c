
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_6__ {int (* idct_add ) (int *,int,int *) ;} ;
struct TYPE_7__ {int (* clear_block ) (int *) ;} ;
struct TYPE_9__ {scalar_t__* block_last_index; int avctx; TYPE_2__ bdsp; } ;
struct TYPE_8__ {int* abt_type_table; int ** abt_block2; TYPE_1__ wdsp; TYPE_4__ s; } ;
typedef TYPE_3__ Wmv2Context ;
typedef TYPE_4__ MpegEncContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int *,int,int *) ;
 int FUNC_2 (int *,int,int *) ;
 int FUNC_3 (int *,int,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(Wmv2Context *VAR_1, int16_t *VAR_2,
                           uint8_t *VAR_3, int VAR_4, int VAR_5)
{
    MpegEncContext *const VAR_6 = &VAR_1->s;

    if (VAR_6->block_last_index[VAR_5] >= 0) {
        switch (VAR_1->abt_type_table[VAR_5]) {
        case 0:
            VAR_1->wdsp.idct_add(VAR_3, VAR_4, VAR_2);
            break;
        case 1:
            FUNC_2(VAR_3, VAR_4, VAR_2);
            FUNC_2(VAR_3 + 4 * VAR_4, VAR_4, VAR_1->abt_block2[VAR_5]);
            VAR_6->bdsp.clear_block(VAR_1->abt_block2[VAR_5]);
            break;
        case 2:
            FUNC_1(VAR_3, VAR_4, VAR_2);
            FUNC_1(VAR_3 + 4, VAR_4, VAR_1->abt_block2[VAR_5]);
            VAR_6->bdsp.clear_block(VAR_1->abt_block2[VAR_5]);
            break;
        default:
            FUNC_0(VAR_6->avctx, VAR_0, "internal error in WMV2 abt\n");
        }
    }
}
