
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_task {int dummy; } ;
struct iscsi_session {int lock; } ;
struct iscsi_conn {int dummy; } ;
struct cqe {int dummy; } ;
struct bnx2i_nop_in_msg {int itt; } ;
struct bnx2i_conn {TYPE_1__* cls_conn; } ;
struct TYPE_2__ {struct iscsi_conn* dd_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct iscsi_task*) ;
 struct iscsi_task* FUNC_1 (struct iscsi_conn*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct iscsi_session *VAR_1,
        struct bnx2i_conn *VAR_2,
        struct cqe *VAR_3)
{
 struct iscsi_conn *VAR_4 = VAR_2->cls_conn->dd_data;
 struct bnx2i_nop_in_msg *VAR_5;
 struct iscsi_task *VAR_6;

 VAR_5 = (struct bnx2i_nop_in_msg *)VAR_3;
 FUNC_2(&VAR_1->lock);
 VAR_6 = FUNC_1(VAR_4,
     VAR_5->itt & VAR_0);
 if (VAR_6)
  FUNC_0(VAR_6);
 FUNC_3(&VAR_1->lock);
}
