
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int device_flags; int dpc_flags; int loop_state; int loop_down_timer; } ;
typedef TYPE_1__ scsi_qla_host_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;

int FUNC_5(scsi_qla_host_t *VAR_7)
{
 int32_t VAR_8 = 0;

 if (!FUNC_4(VAR_3, &VAR_7->dpc_flags)) {

  FUNC_0(&VAR_7->loop_down_timer, 0);
  if (!(VAR_7->device_flags & VAR_0)) {
   FUNC_0(&VAR_7->loop_state, VAR_5);
   FUNC_3(VAR_1, &VAR_7->dpc_flags);
   FUNC_3(VAR_6, &VAR_7->dpc_flags);
   FUNC_3(VAR_4, &VAR_7->dpc_flags);

   VAR_8 = FUNC_2(VAR_7);
  } else
   FUNC_0(&VAR_7->loop_state, VAR_2);

  FUNC_1(VAR_3, &VAR_7->dpc_flags);
 }

 return VAR_8;
}
