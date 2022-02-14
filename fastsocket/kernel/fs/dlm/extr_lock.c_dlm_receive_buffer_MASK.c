
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int rc_type; } ;
struct TYPE_8__ {int m_type; } ;
struct dlm_header {int h_cmd; int h_nodeid; int h_lockspace; } ;
union dlm_packet {TYPE_1__ rcom; TYPE_3__ message; struct dlm_header header; } ;
struct dlm_ls {int ls_recv_active; } ;
struct TYPE_9__ {scalar_t__ ci_log_debug; } ;




 int VAR_0 ;
 TYPE_6__ VAR_1 ;
 struct dlm_ls* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct dlm_ls*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct dlm_ls*,TYPE_3__*,int) ;
 int FUNC_5 (struct dlm_ls*,TYPE_1__*,int) ;
 int FUNC_6 (int,TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int,int,...) ;
 int FUNC_9 (int *) ;

void FUNC_10(union dlm_packet *VAR_2, int VAR_3)
{
 struct dlm_header *VAR_4 = &VAR_2->header;
 struct dlm_ls *VAR_5;
 int VAR_6 = 0;

 switch (VAR_4->h_cmd) {
 case 129:
  FUNC_1(&VAR_2->message);
  VAR_6 = VAR_2->message.m_type;
  break;
 case 128:
  FUNC_3(&VAR_2->rcom);
  VAR_6 = VAR_2->rcom.rc_type;
  break;
 default:
  FUNC_8("invalid h_cmd %d from %u", VAR_4->h_cmd, VAR_3);
  return;
 }

 if (VAR_4->h_nodeid != VAR_3) {
  FUNC_8("invalid h_nodeid %d from %d lockspace %x",
     VAR_4->h_nodeid, VAR_3, VAR_4->h_lockspace);
  return;
 }

 VAR_5 = FUNC_0(VAR_4->h_lockspace);
 if (!VAR_5) {
  if (VAR_1.ci_log_debug)
   FUNC_8("invalid lockspace %x from %d cmd %d type %d",
      VAR_4->h_lockspace, VAR_3, VAR_4->h_cmd, VAR_6);

  if (VAR_4->h_cmd == 128 && VAR_6 == VAR_0)
   FUNC_6(VAR_3, &VAR_2->rcom);
  return;
 }




 FUNC_7(&VAR_5->ls_recv_active);
 if (VAR_4->h_cmd == 129)
  FUNC_4(VAR_5, &VAR_2->message, VAR_3);
 else
  FUNC_5(VAR_5, &VAR_2->rcom, VAR_3);
 FUNC_9(&VAR_5->ls_recv_active);

 FUNC_2(VAR_5);
}
