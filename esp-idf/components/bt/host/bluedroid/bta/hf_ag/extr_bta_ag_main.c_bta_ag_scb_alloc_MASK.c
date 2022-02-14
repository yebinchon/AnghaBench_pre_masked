
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int p_cback; scalar_t__ param; } ;
struct TYPE_7__ {int codec_msbc_settings; TYPE_1__ act_timer; int codec_updated; int sco_idx; scalar_t__ in_use; } ;
typedef TYPE_2__ tBTA_AG_SCB ;
typedef scalar_t__ UINT32 ;
struct TYPE_8__ {TYPE_2__* scb; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_5__ VAR_5 ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_6 ;

__attribute__((used)) static tBTA_AG_SCB *FUNC_3(void)
{
    tBTA_AG_SCB *VAR_7 = &VAR_5.scb[0];
    int VAR_8;

    for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++, VAR_7++) {
        if (!VAR_7->in_use) {

            VAR_7->in_use = VAR_4;
            VAR_7->sco_idx = VAR_2;

            VAR_7->codec_updated = VAR_3;


            VAR_7->act_timer.param = (UINT32) VAR_7;
            VAR_7->act_timer.p_cback = VAR_6;


            VAR_7->codec_msbc_settings = VAR_1;

            FUNC_0("bta_ag_scb_alloc %d", FUNC_2(VAR_7));
            break;
        }
    }

    if (VAR_8 == VAR_0) {
        VAR_7 = ((void*)0);
        FUNC_1("Out of ag scbs");
    }
    return VAR_7;
}
