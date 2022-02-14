
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tSCO_CB ;
struct TYPE_5__ {int desired_sco_mode; int def_esco_parms; int sco_disc_reason; TYPE_1__* sco_db; } ;
struct TYPE_6__ {TYPE_2__ sco_cb; } ;
struct TYPE_4__ {int xmit_data_q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

void FUNC_2 (void)
{




    for (int VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
        VAR_4.sco_cb.sco_db[VAR_6].xmit_data_q = FUNC_0(VAR_3);
    }


    VAR_4.sco_cb.sco_disc_reason = VAR_1;

    VAR_4.sco_cb.def_esco_parms = VAR_5;
    VAR_4.sco_cb.desired_sco_mode = VAR_0;
}
