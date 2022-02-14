
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct tsk_mgmt_entry_fx00 {int dummy; } ;
struct TYPE_8__ {scalar_t__ comp_status; } ;
struct TYPE_9__ {TYPE_2__ tmf; } ;
struct srb_iocb {TYPE_3__ u; } ;
struct req_que {int dummy; } ;
struct TYPE_7__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_10__ {int (* done ) (int *,TYPE_4__*,int ) ;TYPE_1__ u; } ;
typedef TYPE_4__ srb_t ;
typedef int scsi_qla_host_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,TYPE_4__*,int ) ;

__attribute__((used)) static void
FUNC_1(scsi_qla_host_t *VAR_3, struct req_que *VAR_4,
        struct tsk_mgmt_entry_fx00 *VAR_5, srb_t *VAR_6,
        uint16_t VAR_7, uint16_t VAR_8)
{
 struct srb_iocb *VAR_9;

 VAR_9 = &VAR_6->u.iocb_cmd;
 if (VAR_8 != VAR_0 ||
     (VAR_7 & VAR_2))
  VAR_8 = VAR_1;
 VAR_9->u.tmf.comp_status = VAR_8;
 VAR_6->done(VAR_3, VAR_6, 0);
}
