
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct qla_hw_data {int dummy; } ;
struct TYPE_7__ {scalar_t__ init_done; scalar_t__ online; } ;
struct TYPE_8__ {TYPE_1__ flags; int device_flags; struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 int FUNC_1 (int ,TYPE_2__*,int,char*) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (struct qla_hw_data*) ;
 int FUNC_5 (struct qla_hw_data*) ;

void
FUNC_6(scsi_qla_host_t *VAR_3)
{
 struct qla_hw_data *VAR_4 = VAR_3->hw;


 FUNC_1(VAR_2, VAR_3, 0x00b8,
     "Disabling the board.\n");

 if (FUNC_0(VAR_4)) {
  FUNC_4(VAR_4);
  FUNC_5(VAR_4);
 }


 VAR_3->device_flags |= VAR_0;
 FUNC_2(VAR_3, VAR_1 << 16);
 FUNC_3(VAR_3, 0);
 VAR_3->flags.online = 0;
 VAR_3->flags.init_done = 0;
}
