
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_in {int dummy; } ;
struct TYPE_4__ {struct iw_cm_id* iw; } ;
struct TYPE_3__ {int device; } ;
struct rdma_id_private {TYPE_2__ cm_id; TYPE_1__ id; } ;
struct iw_cm_id {struct sockaddr_in local_addr; } ;


 scalar_t__ FUNC_0 (struct iw_cm_id*) ;
 int FUNC_1 (struct iw_cm_id*) ;
 scalar_t__ FUNC_2 (struct rdma_id_private*) ;
 int FUNC_3 (struct iw_cm_id*,int) ;
 int VAR_0 ;
 struct iw_cm_id* FUNC_4 (int ,int ,struct rdma_id_private*) ;
 int FUNC_5 (struct iw_cm_id*) ;

__attribute__((used)) static int FUNC_6(struct rdma_id_private *VAR_1, int VAR_2)
{
 int VAR_3;
 struct sockaddr_in *VAR_4;
 struct iw_cm_id *VAR_5;

 VAR_5 = FUNC_4(VAR_1->id.device,
        VAR_0,
        VAR_1);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_1->cm_id.iw = VAR_5;

 VAR_4 = (struct sockaddr_in *) FUNC_2(VAR_1);
 VAR_1->cm_id.iw->local_addr = *VAR_4;

 VAR_3 = FUNC_3(VAR_1->cm_id.iw, VAR_2);

 if (VAR_3) {
  FUNC_5(VAR_1->cm_id.iw);
  VAR_1->cm_id.iw = ((void*)0);
 }

 return VAR_3;
}
