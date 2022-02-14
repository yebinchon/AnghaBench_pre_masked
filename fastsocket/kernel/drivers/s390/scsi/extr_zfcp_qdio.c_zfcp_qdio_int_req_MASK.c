
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_qdio_queue {int count; int sbal; } ;
struct zfcp_qdio {int req_q_wq; TYPE_1__* adapter; struct zfcp_qdio_queue req_q; } ;
struct ccw_device {int dummy; } ;
struct TYPE_2__ {int dbf; } ;


 int FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,unsigned int,int,int,int ,int ,int *) ;
 int FUNC_4 (struct zfcp_qdio*) ;
 int FUNC_5 (struct zfcp_qdio*,char*,unsigned int) ;
 int FUNC_6 (int ,int,int) ;

__attribute__((used)) static void FUNC_7(struct ccw_device *VAR_0, unsigned int VAR_1,
         int VAR_2, int VAR_3, int VAR_4,
         unsigned long VAR_5)
{
 struct zfcp_qdio *VAR_6 = (struct zfcp_qdio *) VAR_5;
 struct zfcp_qdio_queue *VAR_7 = &VAR_6->req_q;

 if (FUNC_1(VAR_1)) {
  FUNC_3(VAR_6->adapter->dbf, VAR_1, VAR_3,
      VAR_4, 0, 0, ((void*)0));
  FUNC_5(VAR_6, "qdireq1", VAR_1);
  return;
 }


 FUNC_6(VAR_7->sbal, VAR_3, VAR_4);

 FUNC_4(VAR_6);
 FUNC_0(VAR_4, &VAR_7->count);
 FUNC_2(&VAR_6->req_q_wq);
}
