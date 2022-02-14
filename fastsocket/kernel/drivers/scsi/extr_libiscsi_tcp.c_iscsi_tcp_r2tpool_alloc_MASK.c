
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_tcp_task {scalar_t__ r2tqueue; int r2tpool; } ;
struct iscsi_task {struct iscsi_tcp_task* dd_data; } ;
struct iscsi_session {int cmds_max; int max_r2t; struct iscsi_task** cmds; } ;
struct iscsi_r2t_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int,int *,int) ;
 scalar_t__ FUNC_3 (int,int ,int *) ;
 int FUNC_4 (scalar_t__) ;

int FUNC_5(struct iscsi_session *VAR_2)
{
 int VAR_3;
 int VAR_4;




 for (VAR_4 = 0; VAR_4 < VAR_2->cmds_max; VAR_4++) {
         struct iscsi_task *VAR_5 = VAR_2->cmds[VAR_4];
  struct iscsi_tcp_task *VAR_6 = VAR_5->dd_data;
  if (FUNC_2(&VAR_6->r2tpool,
        VAR_2->max_r2t * 2, ((void*)0),
        sizeof(struct iscsi_r2t_info))) {
   goto r2t_alloc_fail;
  }


  VAR_6->r2tqueue = FUNC_3(
        VAR_2->max_r2t * 4 * sizeof(void*), VAR_1, ((void*)0));
  if (VAR_6->r2tqueue == FUNC_0(-VAR_0)) {
   FUNC_1(&VAR_6->r2tpool);
   goto r2t_alloc_fail;
  }
 }

 return 0;

r2t_alloc_fail:
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  struct iscsi_task *VAR_7 = VAR_2->cmds[VAR_3];
  struct iscsi_tcp_task *VAR_8 = VAR_7->dd_data;

  FUNC_4(VAR_8->r2tqueue);
  FUNC_1(&VAR_8->r2tpool);
 }
 return -VAR_0;
}
