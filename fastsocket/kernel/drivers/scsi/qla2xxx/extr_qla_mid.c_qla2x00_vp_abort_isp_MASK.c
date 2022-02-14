
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int vp_idx; int dpc_flags; int loop_down_timer; int loop_state; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int ,TYPE_1__*,int,char*,int ) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (int ,int *) ;

int
FUNC_7(scsi_qla_host_t *VAR_5)
{




 if (FUNC_0(&VAR_5->loop_state) != VAR_1) {
  FUNC_1(&VAR_5->loop_state, VAR_1);
  FUNC_5(VAR_5, 0);
 } else {
  if (!FUNC_0(&VAR_5->loop_down_timer))
   FUNC_1(&VAR_5->loop_down_timer, VAR_2);
 }






 if (!FUNC_6(VAR_0, &VAR_5->dpc_flags))
  FUNC_3(VAR_5, VAR_3);

 FUNC_2(VAR_4, VAR_5, 0x801d,
     "Scheduling enable of Vport %d.\n", VAR_5->vp_idx);
 return FUNC_4(VAR_5);
}
