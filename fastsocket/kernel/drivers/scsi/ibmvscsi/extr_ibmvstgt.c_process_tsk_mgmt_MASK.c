
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int tsk_mgmt_func; int lun; int task_tag; } ;
struct TYPE_6__ {TYPE_2__ tsk_mgmt; } ;
union viosrp_iu {TYPE_3__ srp; } ;
struct scsi_lun {int dummy; } ;
struct iu_entry {TYPE_1__* target; } ;
struct TYPE_4__ {scalar_t__ shost; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 int FUNC_0 (char*,struct iu_entry*,int) ;
 int FUNC_1 (scalar_t__,unsigned long,int,int ,struct scsi_lun*,struct iu_entry*) ;
 int FUNC_2 (struct iu_entry*,int *,int ,int) ;
 union viosrp_iu* FUNC_3 (struct iu_entry*) ;

__attribute__((used)) static int FUNC_4(struct iu_entry *VAR_6)
{
 union viosrp_iu *VAR_7 = FUNC_3(VAR_6);
 int VAR_8;

 FUNC_0("%p %u\n", VAR_6, VAR_7->srp.tsk_mgmt.tsk_mgmt_func);

 switch (VAR_7->srp.tsk_mgmt.tsk_mgmt_func) {
 case 132:
  VAR_8 = VAR_0;
  break;
 case 131:
  VAR_8 = VAR_1;
  break;
 case 129:
  VAR_8 = VAR_3;
  break;
 case 128:
  VAR_8 = VAR_5;
  break;
 case 130:
  VAR_8 = VAR_2;
  break;
 default:
  VAR_8 = 0;
 }
 if (VAR_8)
  FUNC_1(VAR_6->target->shost,
       (unsigned long)VAR_6->target->shost,
       VAR_8,
       VAR_7->srp.tsk_mgmt.task_tag,
       (struct scsi_lun *) &VAR_7->srp.tsk_mgmt.lun,
       VAR_6);
 else
  FUNC_2(VAR_6, ((void*)0), VAR_4, 0x20);

 return !VAR_8;
}
