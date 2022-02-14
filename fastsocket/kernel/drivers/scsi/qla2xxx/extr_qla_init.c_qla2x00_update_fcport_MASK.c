
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;
struct TYPE_13__ {int flags; scalar_t__ login_retry; TYPE_1__* vha; } ;
typedef TYPE_2__ fc_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;

void
FUNC_5(scsi_qla_host_t *VAR_3, fc_port_t *VAR_4)
{
 VAR_4->vha = VAR_3;

 if (FUNC_0(VAR_3->hw)) {
  FUNC_4(VAR_4, VAR_2);
  FUNC_3(VAR_3, VAR_4);
  return;
 }
 VAR_4->login_retry = 0;
 VAR_4->flags &= ~(VAR_1 | VAR_0);

 FUNC_4(VAR_4, VAR_2);
 FUNC_2(VAR_3, VAR_4);
 FUNC_1(VAR_3, VAR_4);
 FUNC_3(VAR_3, VAR_4);
}
