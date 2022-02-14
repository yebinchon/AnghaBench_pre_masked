
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int cm_table_select; int superblocktype_2_3; int nb_channels; int coding_method; int tone_level_idx_temp; int tone_level_idx; } ;
struct TYPE_8__ {TYPE_1__* packet; } ;
struct TYPE_7__ {int size; int data; } ;
typedef TYPE_2__ QDM2SubPNode ;
typedef TYPE_3__ QDM2Context ;
typedef int GetBitContext ;


 int FUNC_0 (int ,int ,int ,int ,int,int ,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (TYPE_3__*,int *,int,int ,int) ;

__attribute__((used)) static void FUNC_4(QDM2Context *VAR_0, QDM2SubPNode *VAR_1)
{
    GetBitContext VAR_2;
    int VAR_3 = 0;

    if (VAR_1) {
        VAR_3 = VAR_1->packet->size * 8;
        FUNC_2(&VAR_2, VAR_1->packet->data, VAR_3);
    }

    if (VAR_3 >= 32) {
        int VAR_4 = FUNC_1(&VAR_2, 13);

        if (VAR_4 > 3)
            FUNC_0(VAR_0->tone_level_idx,
                                     VAR_0->tone_level_idx_temp, VAR_0->coding_method,
                                     VAR_0->nb_channels, 8 * VAR_4,
                                     VAR_0->superblocktype_2_3, VAR_0->cm_table_select);
    }

    FUNC_3(VAR_0, &VAR_2, VAR_3, 0, 8);
}
