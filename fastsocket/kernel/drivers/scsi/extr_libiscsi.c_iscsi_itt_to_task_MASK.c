
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_task {int dummy; } ;
struct iscsi_session {int cmds_max; struct iscsi_task** cmds; TYPE_1__* tt; } ;
struct iscsi_conn {struct iscsi_session* session; } ;
typedef int itt_t ;
struct TYPE_2__ {int (* parse_pdu_itt ) (struct iscsi_conn*,int ,int*,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct iscsi_conn*,int ,int*,int *) ;

struct iscsi_task *FUNC_2(struct iscsi_conn *VAR_1, itt_t VAR_2)
{
 struct iscsi_session *VAR_3 = VAR_1->session;
 int VAR_4;

 if (VAR_2 == VAR_0)
  return ((void*)0);

 if (VAR_3->tt->parse_pdu_itt)
  VAR_3->tt->parse_pdu_itt(VAR_1, VAR_2, &VAR_4, ((void*)0));
 else
  VAR_4 = FUNC_0(VAR_2);
 if (VAR_4 >= VAR_3->cmds_max)
  return ((void*)0);

 return VAR_3->cmds[VAR_4];
}
