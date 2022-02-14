
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
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_11__ {int flags; int * data; } ;
struct TYPE_12__ {TYPE_2__ logio; } ;
struct srb_iocb {TYPE_3__ u; } ;
struct req_que {int dummy; } ;
struct logio_entry_24xx {scalar_t__* io_parameter; int comp_status; int entry_status; } ;
struct TYPE_10__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_15__ {char* name; scalar_t__ type; int (* done ) (int *,TYPE_6__*,int ) ;int handle; TYPE_7__* fcport; TYPE_1__ u; } ;
typedef TYPE_6__ srb_t ;
typedef int scsi_qla_host_t ;
struct TYPE_13__ {int al_pa; int area; int domain; } ;
struct TYPE_14__ {TYPE_4__ b; } ;
struct TYPE_16__ {TYPE_5__ d_id; int vha; int supported_classes; int port_type; int flags; } ;
typedef TYPE_7__ fc_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 int FUNC_0 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ,int,char*,char const*,int ,int ,int ,int ,scalar_t__,...) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_4 (scalar_t__,int *,int,int *,int) ;
 int FUNC_5 (int ,int ,int,char*,char const*,int ,int ,int ,int ,int ) ;
 int VAR_18 ;
 TYPE_6__* FUNC_6 (int *,char const*,struct req_que*,struct logio_entry_24xx*) ;
 int FUNC_7 (int *,TYPE_6__*,int ) ;

__attribute__((used)) static void
FUNC_8(scsi_qla_host_t *VAR_19, struct req_que *VAR_20,
    struct logio_entry_24xx *VAR_21)
{
 const char VAR_22[] = "LOGIO-IOCB";
 const char *VAR_23;
 fc_port_t *VAR_24;
 srb_t *VAR_25;
 struct srb_iocb *VAR_26;
 uint16_t *VAR_27;
 uint32_t VAR_28[2];

 VAR_25 = FUNC_6(VAR_19, VAR_22, VAR_20, VAR_21);
 if (!VAR_25)
  return;
 VAR_26 = &VAR_25->u.iocb_cmd;
 VAR_23 = VAR_25->name;

 VAR_24 = VAR_25->fcport;
 VAR_27 = VAR_26->u.logio.data;

 VAR_27[0] = VAR_10;
 VAR_27[1] = VAR_26->u.logio.flags & VAR_15 ?
     VAR_13: 0;
 if (VAR_21->entry_status) {
  FUNC_5(VAR_18, VAR_24->vha, 0x5034,
      "Async-%s error entry - hdl=%x"
      "portid=%02x%02x%02x entry-status=%x.\n",
      VAR_23, VAR_25->handle, VAR_24->d_id.b.domain,
      VAR_24->d_id.b.area, VAR_24->d_id.b.al_pa,
      VAR_21->entry_status);
  FUNC_4(VAR_16 + VAR_17, VAR_19, 0x504d,
      (uint8_t *)VAR_21, sizeof(*VAR_21));

  goto logio_done;
 }

 if (FUNC_1(VAR_21->comp_status) == VAR_3) {
  FUNC_3(VAR_16, VAR_24->vha, 0x5036,
      "Async-%s complete - hdl=%x portid=%02x%02x%02x "
      "iop0=%x.\n", VAR_23, VAR_25->handle, VAR_24->d_id.b.domain,
      VAR_24->d_id.b.area, VAR_24->d_id.b.al_pa,
      FUNC_2(VAR_21->io_parameter[0]));

  VAR_27[0] = VAR_9;
  if (VAR_25->type != VAR_14)
   goto logio_done;

  VAR_28[0] = FUNC_2(VAR_21->io_parameter[0]);
  if (VAR_28[0] & VAR_0) {
   VAR_24->port_type = VAR_6;
   if (VAR_28[0] & VAR_2)
    VAR_24->flags |= VAR_4;
  } else if (VAR_28[0] & VAR_1)
   VAR_24->port_type = VAR_5;

  if (VAR_21->io_parameter[7] || VAR_21->io_parameter[8])
   VAR_24->supported_classes |= VAR_7;
  if (VAR_21->io_parameter[9] || VAR_21->io_parameter[10])
   VAR_24->supported_classes |= VAR_8;

  goto logio_done;
 }

 VAR_28[0] = FUNC_2(VAR_21->io_parameter[0]);
 VAR_28[1] = FUNC_2(VAR_21->io_parameter[1]);
 switch (VAR_28[0]) {
 case 128:
  VAR_27[0] = VAR_12;
  VAR_27[1] = FUNC_0(VAR_28[1]);
  break;
 case 129:
  VAR_27[0] = VAR_11;
  break;
 default:
  VAR_27[0] = VAR_10;
  break;
 }

 FUNC_3(VAR_16, VAR_24->vha, 0x5037,
     "Async-%s failed - hdl=%x portid=%02x%02x%02x comp=%x "
     "iop0=%x iop1=%x.\n", VAR_23, VAR_25->handle, VAR_24->d_id.b.domain,
     VAR_24->d_id.b.area, VAR_24->d_id.b.al_pa,
     FUNC_1(VAR_21->comp_status),
     FUNC_2(VAR_21->io_parameter[0]),
     FUNC_2(VAR_21->io_parameter[1]));

logio_done:
 VAR_25->done(VAR_19, VAR_25, 0);
}
