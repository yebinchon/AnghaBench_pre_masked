
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int queue; } ;
struct iscsi_tcp_task {struct iscsi_r2t_info* r2t; int r2tqueue; TYPE_1__ r2tpool; } ;
struct iscsi_r2t_info {scalar_t__ data_length; scalar_t__ sent; } ;
struct iscsi_task {TYPE_2__* conn; struct iscsi_r2t_info unsol_r2t; struct iscsi_tcp_task* dd_data; } ;
struct iscsi_session {int lock; } ;
struct TYPE_4__ {struct iscsi_session* session; } ;


 int FUNC_0 (TYPE_2__*,char*,struct iscsi_r2t_info*) ;
 int FUNC_1 (int ,void*,int) ;
 int FUNC_2 (int ,void*,int) ;
 scalar_t__ FUNC_3 (struct iscsi_task*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct iscsi_r2t_info *FUNC_6(struct iscsi_task *VAR_0)
{
 struct iscsi_session *VAR_1 = VAR_0->conn->session;
 struct iscsi_tcp_task *VAR_2 = VAR_0->dd_data;
 struct iscsi_r2t_info *VAR_3 = ((void*)0);

 if (FUNC_3(VAR_0))
  VAR_3 = &VAR_0->unsol_r2t;
 else {
  FUNC_4(&VAR_1->lock);
  if (VAR_2->r2t) {
   VAR_3 = VAR_2->r2t;

   if (VAR_3->data_length <= VAR_3->sent) {
    FUNC_0(VAR_0->conn,
           "  done with r2t %p\n", VAR_3);
    FUNC_2(VAR_2->r2tpool.queue,
         (void *)&VAR_2->r2t,
         sizeof(void *));
    VAR_2->r2t = VAR_3 = ((void*)0);
   }
  }

  if (VAR_3 == ((void*)0)) {
   FUNC_1(VAR_2->r2tqueue,
        (void *)&VAR_2->r2t, sizeof(void *));
   VAR_3 = VAR_2->r2t;
  }
  FUNC_5(&VAR_1->lock);
 }

 return VAR_3;
}
