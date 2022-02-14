
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_11__ {int* data; int flags; } ;
struct TYPE_12__ {TYPE_2__ logio; } ;
struct srb_iocb {TYPE_3__ u; } ;
struct req_que {int dummy; } ;
struct mbx_entry {int mb7; int mb6; int mb2; int mb1; int mb0; int status; int status_flags; int state_flags; int entry_status; } ;
struct TYPE_10__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_15__ {char* name; scalar_t__ type; int (* done ) (int *,TYPE_6__*,int ) ;int handle; TYPE_7__* fcport; TYPE_1__ u; } ;
typedef TYPE_6__ srb_t ;
typedef int scsi_qla_host_t ;
struct TYPE_13__ {int al_pa; int area; int domain; } ;
struct TYPE_14__ {TYPE_4__ b; } ;
struct TYPE_16__ {TYPE_5__ d_id; int flags; int port_type; } ;
typedef TYPE_7__ fc_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int *,int,char*,char const*,int ,int ,int ,int ,int,...) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (scalar_t__,int *,int,int *,int) ;
 int FUNC_3 (int ,int *,int,char*,char const*,int ,int ,int ,int ,int,int,int,int,int,int) ;
 int VAR_12 ;
 TYPE_6__* FUNC_4 (int *,char const*,struct req_que*,struct mbx_entry*) ;
 int FUNC_5 (int *,TYPE_6__*,int ) ;

__attribute__((used)) static void
FUNC_6(scsi_qla_host_t *VAR_13, struct req_que *VAR_14,
    struct mbx_entry *VAR_15)
{
 const char VAR_16[] = "MBX-IOCB";
 const char *VAR_17;
 fc_port_t *VAR_18;
 srb_t *VAR_19;
 struct srb_iocb *VAR_20;
 uint16_t *VAR_21;
 uint16_t VAR_22;

 VAR_19 = FUNC_4(VAR_13, VAR_16, VAR_14, VAR_15);
 if (!VAR_19)
  return;

 VAR_20 = &VAR_19->u.iocb_cmd;
 VAR_17 = VAR_19->name;
 VAR_18 = VAR_19->fcport;
 VAR_21 = VAR_20->u.logio.data;

 VAR_21[0] = VAR_6;
 VAR_21[1] = VAR_20->u.logio.flags & VAR_9 ?
     VAR_7: 0;
 if (VAR_15->entry_status) {
  FUNC_1(VAR_10, VAR_13, 0x5043,
      "Async-%s error entry - hdl=%x portid=%02x%02x%02x "
      "entry-status=%x status=%x state-flag=%x "
      "status-flags=%x.\n", VAR_17, VAR_19->handle,
      VAR_18->d_id.b.domain, VAR_18->d_id.b.area,
      VAR_18->d_id.b.al_pa, VAR_15->entry_status,
      FUNC_0(VAR_15->status), FUNC_0(VAR_15->state_flags),
      FUNC_0(VAR_15->status_flags));

  FUNC_2(VAR_10 + VAR_11, VAR_13, 0x5029,
      (uint8_t *)VAR_15, sizeof(*VAR_15));

  goto logio_done;
 }

 VAR_22 = FUNC_0(VAR_15->status);
 if (VAR_22 == 0x30 && VAR_19->type == VAR_8 &&
     FUNC_0(VAR_15->mb0) == VAR_5)
  VAR_22 = 0;
 if (!VAR_22 && FUNC_0(VAR_15->mb0) == VAR_5) {
  FUNC_1(VAR_10, VAR_13, 0x5045,
      "Async-%s complete - hdl=%x portid=%02x%02x%02x mbx1=%x.\n",
      VAR_17, VAR_19->handle, VAR_18->d_id.b.domain,
      VAR_18->d_id.b.area, VAR_18->d_id.b.al_pa,
      FUNC_0(VAR_15->mb1));

  VAR_21[0] = VAR_5;
  if (VAR_19->type == VAR_8) {
   VAR_18->port_type = VAR_4;
   if (FUNC_0(VAR_15->mb1) & VAR_0)
    VAR_18->port_type = VAR_3;
   else if (FUNC_0(VAR_15->mb1) & VAR_1)
    VAR_18->flags |= VAR_2;
  }
  goto logio_done;
 }

 VAR_21[0] = FUNC_0(VAR_15->mb0);
 switch (VAR_21[0]) {
 case 128:
  VAR_21[1] = FUNC_0(VAR_15->mb1);
  break;
 case 129:
  break;
 default:
  VAR_21[0] = VAR_6;
  break;
 }

 FUNC_3(VAR_12, VAR_13, 0x5046,
     "Async-%s failed - hdl=%x portid=%02x%02x%02x status=%x "
     "mb0=%x mb1=%x mb2=%x mb6=%x mb7=%x.\n", VAR_17, VAR_19->handle,
     VAR_18->d_id.b.domain, VAR_18->d_id.b.area, VAR_18->d_id.b.al_pa,
     VAR_22, FUNC_0(VAR_15->mb0), FUNC_0(VAR_15->mb1),
     FUNC_0(VAR_15->mb2), FUNC_0(VAR_15->mb6),
     FUNC_0(VAR_15->mb7));

logio_done:
 VAR_19->done(VAR_13, VAR_19, 0);
}
