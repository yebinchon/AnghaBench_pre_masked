
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint16_t ;
struct scsi_qla_host {int dpc_flags; } ;
struct TYPE_10__ {int flags; int loop_id; } ;
typedef TYPE_1__ fc_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct scsi_qla_host*,TYPE_1__*) ;
 int FUNC_1 (struct scsi_qla_host*,TYPE_1__*,int ) ;
 int FUNC_2 (struct scsi_qla_host*,TYPE_1__*,int,int ) ;
 int FUNC_3 (struct scsi_qla_host*,TYPE_1__*,int*) ;
 int FUNC_4 (struct scsi_qla_host*,TYPE_1__*,int *) ;
 int FUNC_5 (struct scsi_qla_host*,TYPE_1__*,int *) ;
 int FUNC_6 (struct scsi_qla_host*,TYPE_1__*) ;
 int FUNC_7 (int ,int *) ;

void
FUNC_8(struct scsi_qla_host *VAR_7, fc_port_t *VAR_8,
    uint16_t *VAR_9)
{
 int VAR_10;

 switch (VAR_9[0]) {
 case 131:





  VAR_10 = FUNC_1(VAR_7, VAR_8, 0);
  if (VAR_10 == VAR_4) {
   VAR_8->flags &= ~VAR_0;
   VAR_8->flags |= VAR_2;
   FUNC_7(VAR_6, &VAR_7->dpc_flags);
   break;
  }

  if (VAR_10 != VAR_5) {
   FUNC_5(VAR_7, VAR_8, ((void*)0));
   FUNC_4(VAR_7, VAR_8, ((void*)0));
   break;
  }
  if (VAR_8->flags & VAR_1) {
   FUNC_3(VAR_7, VAR_8, VAR_9);
   break;
  }
  FUNC_6(VAR_7, VAR_8);
  break;
 case 130:
  VAR_8->flags &= ~VAR_0;
  if (VAR_9[1] & VAR_3)
   FUNC_7(VAR_6, &VAR_7->dpc_flags);
  else
   FUNC_2(VAR_7, VAR_8, 1, 0);
  break;
 case 128:
  VAR_8->loop_id = VAR_9[1];
  FUNC_5(VAR_7, VAR_8, ((void*)0));
  FUNC_4(VAR_7, VAR_8, ((void*)0));
  break;
 case 129:
  VAR_8->loop_id++;
  VAR_10 = FUNC_0(VAR_7, VAR_8);
  if (VAR_10 != VAR_5) {
   VAR_8->flags &= ~VAR_0;
   FUNC_2(VAR_7, VAR_8, 1, 0);
   break;
  }
  FUNC_4(VAR_7, VAR_8, ((void*)0));
  break;
 }
 return;
}
