
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_host {scalar_t__ num_sessions; scalar_t__ workq; int session_removal_wq; int lock; int state; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct Scsi_Host*,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct Scsi_Host*) ;
 struct iscsi_host* FUNC_4 (struct Scsi_Host*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ,int) ;

void FUNC_9(struct Scsi_Host *VAR_3)
{
 struct iscsi_host *VAR_4 = FUNC_4(VAR_3);
 unsigned long VAR_5;

 FUNC_6(&VAR_4->lock, VAR_5);
 VAR_4->state = VAR_0;
 FUNC_7(&VAR_4->lock, VAR_5);

 FUNC_2(VAR_3, VAR_2);
 FUNC_8(VAR_4->session_removal_wq,
     VAR_4->num_sessions == 0);
 if (FUNC_5(VAR_1))
  FUNC_1(VAR_1);

 FUNC_3(VAR_3);
 if (VAR_4->workq)
  FUNC_0(VAR_4->workq);
}
