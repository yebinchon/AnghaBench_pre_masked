
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scsi_target {TYPE_2__* hostdata; } ;
struct TYPE_5__ {int CurrentBus; int CurrentTargetID; } ;
struct mptfc_rport_info {struct scsi_target* starget; TYPE_1__ pg0; } ;
struct fc_rport {scalar_t__ dd_data; } ;
struct TYPE_6__ {int channel; int id; } ;
typedef TYPE_2__ VirtTarget ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int,int ) ;
 struct fc_rport* FUNC_2 (struct scsi_target*) ;

__attribute__((used)) static int
FUNC_3(struct scsi_target *VAR_3)
{
 VirtTarget *VAR_4;
 struct fc_rport *VAR_5;
 struct mptfc_rport_info *VAR_6;
 int VAR_7;

 VAR_4 = FUNC_1(sizeof(VirtTarget), VAR_2);
 if (!VAR_4)
  return -VAR_1;
 VAR_3->hostdata = VAR_4;

 VAR_7 = -VAR_0;
 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5) {
  VAR_6 = *((struct mptfc_rport_info **)VAR_5->dd_data);
  if (VAR_6) {
   VAR_4->id = VAR_6->pg0.CurrentTargetID;
   VAR_4->channel = VAR_6->pg0.CurrentBus;
   VAR_6->starget = VAR_3;
   VAR_7 = 0;
  }
 }
 if (VAR_7 != 0) {
  FUNC_0(VAR_4);
  VAR_3->hostdata = ((void*)0);
 }

 return VAR_7;
}
