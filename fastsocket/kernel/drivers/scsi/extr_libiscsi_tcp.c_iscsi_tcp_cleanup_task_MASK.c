
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int queue; } ;
struct iscsi_tcp_task {struct iscsi_r2t_info* r2t; TYPE_1__ r2tpool; int r2tqueue; } ;
struct iscsi_task {int conn; int sc; struct iscsi_tcp_task* dd_data; } ;
struct iscsi_r2t_info {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,void*,int) ;
 int FUNC_2 (int ,void*,int) ;

void FUNC_3(struct iscsi_task *VAR_0)
{
 struct iscsi_tcp_task *VAR_1 = VAR_0->dd_data;
 struct iscsi_r2t_info *VAR_2;


 if (!VAR_0->sc)
  return;


 while (FUNC_1(VAR_1->r2tqueue, (void*)&VAR_2, sizeof(void*))) {
  FUNC_2(VAR_1->r2tpool.queue, (void*)&VAR_2,
       sizeof(void*));
  FUNC_0(VAR_0->conn, "pending r2t dropped\n");
 }

 VAR_2 = VAR_1->r2t;
 if (VAR_2 != ((void*)0)) {
  FUNC_2(VAR_1->r2tpool.queue, (void*)&VAR_2,
       sizeof(void*));
  VAR_1->r2t = ((void*)0);
 }
}
