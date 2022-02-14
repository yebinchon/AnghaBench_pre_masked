
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int result; } ;
struct iscsi_task {int itt; struct scsi_cmnd* sc; } ;
struct iscsi_nopin {int dummy; } ;
struct iscsi_hdr {int dummy; } ;
struct iscsi_data_rsp {int flags; int cmd_status; int residual_count; int statsn; } ;
struct iscsi_conn {int exp_statsn; int scsirsp_pdus_cnt; int session; } ;
struct TYPE_2__ {int length; int resid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,struct scsi_cmnd*,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iscsi_task*,int ) ;
 int FUNC_3 (int ,struct iscsi_nopin*) ;
 TYPE_1__* FUNC_4 (struct scsi_cmnd*) ;

__attribute__((used)) static void
FUNC_5(struct iscsi_conn *VAR_7, struct iscsi_hdr *VAR_8,
    struct iscsi_task *VAR_9)
{
 struct iscsi_data_rsp *VAR_10 = (struct iscsi_data_rsp *)VAR_8;
 struct scsi_cmnd *VAR_11 = VAR_9->sc;

 if (!(VAR_10->flags & VAR_4))
  return;

 FUNC_3(VAR_7->session, (struct iscsi_nopin *)VAR_8);
 VAR_11->result = (VAR_1 << 16) | VAR_10->cmd_status;
 VAR_7->exp_statsn = FUNC_1(VAR_10->statsn) + 1;
 if (VAR_10->flags & (VAR_5 |
                    VAR_3)) {
  int VAR_12 = FUNC_1(VAR_10->residual_count);

  if (VAR_12 > 0 &&
      (VAR_10->flags & VAR_2 ||
       VAR_12 <= FUNC_4(VAR_11)->length))
   FUNC_4(VAR_11)->resid = VAR_12;
  else
   VAR_11->result = (VAR_0 << 16) | VAR_10->cmd_status;
 }

 FUNC_0(VAR_7->session, "data in with status done "
     "[sc %p res %d itt 0x%x]\n",
     VAR_11, VAR_11->result, VAR_9->itt);
 VAR_7->scsirsp_pdus_cnt++;
 FUNC_2(VAR_9, VAR_6);
}
