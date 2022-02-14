
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_13__ {int hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;
struct TYPE_11__ {int al_pa; int area; int domain; } ;
struct TYPE_12__ {TYPE_1__ b; } ;
struct TYPE_14__ {scalar_t__ port_type; int fcp_prio; TYPE_2__ d_id; int loop_id; } ;
typedef TYPE_4__ fc_port_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,TYPE_3__*,int,char*,int,int ,int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_3 (TYPE_3__*,int ,int,int *) ;

int
FUNC_4(scsi_qla_host_t *VAR_5, fc_port_t *VAR_6)
{
 int VAR_7;
 int VAR_8;
 uint16_t VAR_9[5];

 if (VAR_6->port_type != VAR_0 ||
     VAR_6->loop_id == VAR_1)
  return VAR_2;

 VAR_8 = FUNC_2(VAR_5, VAR_6);
 if (VAR_8 < 0)
  return VAR_2;

 if (FUNC_0(VAR_5->hw)) {
  VAR_6->fcp_prio = VAR_8 & 0xf;
  return VAR_3;
 }

 VAR_7 = FUNC_3(VAR_5, VAR_6->loop_id, VAR_8, VAR_9);
 if (VAR_7 == VAR_3) {
  if (VAR_6->fcp_prio != VAR_8)
   FUNC_1(VAR_4, VAR_5, 0x709e,
       "Updated FCP_CMND priority - value=%d loop_id=%d "
       "port_id=%02x%02x%02x.\n", VAR_8,
       VAR_6->loop_id, VAR_6->d_id.b.domain,
       VAR_6->d_id.b.area, VAR_6->d_id.b.al_pa);
  VAR_6->fcp_prio = VAR_8 & 0xf;
 } else
  FUNC_1(VAR_4, VAR_5, 0x704f,
      "Unable to update FCP_CMND priority - ret=0x%x for "
      "loop_id=%d port_id=%02x%02x%02x.\n", VAR_7, VAR_6->loop_id,
      VAR_6->d_id.b.domain, VAR_6->d_id.b.area,
      VAR_6->d_id.b.al_pa);

 return VAR_7;
}
