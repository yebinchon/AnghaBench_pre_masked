
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct iscsi_task {int data_count; int state; struct iscsi_hdr* hdr; } ;
struct iscsi_session {scalar_t__ state; TYPE_1__* tt; int cmdsn; int queued_cmdsn; } ;
struct iscsi_nopout {void* cmdsn; void* exp_statsn; } ;
struct iscsi_hdr {scalar_t__ opcode; scalar_t__ itt; } ;
struct iscsi_conn {scalar_t__ c_stage; int exp_statsn; struct iscsi_session* session; } ;
struct TYPE_2__ {scalar_t__ (* init_task ) (struct iscsi_task*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct iscsi_session*,char*,scalar_t__,scalar_t__,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct iscsi_task*) ;

__attribute__((used)) static int FUNC_3(struct iscsi_conn *VAR_11,
    struct iscsi_task *VAR_12)
{
 struct iscsi_session *VAR_13 = VAR_11->session;
 struct iscsi_hdr *VAR_14 = VAR_12->hdr;
 struct iscsi_nopout *VAR_15 = (struct iscsi_nopout *)VAR_14;
 uint8_t VAR_16 = VAR_14->opcode & VAR_3;

 if (VAR_11->session->state == VAR_8)
  return -VAR_1;

 if (VAR_16 != VAR_5 && VAR_16 != VAR_7)
  VAR_15->exp_statsn = FUNC_1(VAR_11->exp_statsn);



 VAR_15->cmdsn = FUNC_1(VAR_13->cmdsn);
 if (VAR_14->itt != VAR_10) {
  if (VAR_11->c_stage == VAR_2 &&
      !(VAR_14->opcode & VAR_4)) {
   VAR_13->queued_cmdsn++;
   VAR_13->cmdsn++;
  }
 }

 if (VAR_13->tt->init_task && VAR_13->tt->init_task(VAR_12))
  return -VAR_0;

 if ((VAR_14->opcode & VAR_3) == VAR_6)
  VAR_13->state = VAR_8;

 VAR_12->state = VAR_9;
 FUNC_0(VAR_13, "mgmtpdu [op 0x%x hdr->itt 0x%x "
     "datalen %d]\n", VAR_14->opcode & VAR_3,
     VAR_14->itt, VAR_12->data_count);
 return 0;
}
