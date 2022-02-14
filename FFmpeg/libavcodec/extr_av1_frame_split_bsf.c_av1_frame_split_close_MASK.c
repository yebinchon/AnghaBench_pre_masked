
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int cbc; int temporal_unit; int buffer_pkt; } ;
struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ AVBSFContext ;
typedef TYPE_2__ AV1FSplitContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(AVBSFContext *VAR_0)
{
    AV1FSplitContext *VAR_1 = VAR_0->priv_data;

    FUNC_0(&VAR_1->buffer_pkt);
    FUNC_2(VAR_1->cbc, &VAR_1->temporal_unit);
    FUNC_1(&VAR_1->cbc);
}
