
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int appl_knows_rem_name; } ;
typedef TYPE_4__ tBTM_INQ_INFO ;
struct TYPE_8__ {int bd_addr; scalar_t__* bd_name; } ;
struct TYPE_10__ {TYPE_1__ disc_res; } ;
struct TYPE_9__ {TYPE_3__ result; } ;
struct TYPE_12__ {TYPE_2__ rem_name; } ;
typedef TYPE_5__ tBTA_DM_MSG ;


 int FUNC_0 (char*) ;
 TYPE_4__* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;

void FUNC_3 (tBTA_DM_MSG *VAR_1)
{
    tBTM_INQ_INFO *VAR_2;

    FUNC_0("bta_dm_disc_rmt_name");

    VAR_2 = FUNC_1 (VAR_1->rem_name.result.disc_res.bd_addr);
    if ( VAR_2 ) {
        if ( VAR_1->rem_name.result.disc_res.bd_name[0] ) {
            VAR_2->appl_knows_rem_name = VAR_0;
        }
    }

    FUNC_2(VAR_1->rem_name.result.disc_res.bd_addr);

}
