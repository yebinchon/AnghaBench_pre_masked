
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct TYPE_3__ {struct ib_cm_id* ib; } ;
struct TYPE_4__ {int ps; int device; } ;
struct rdma_id_private {TYPE_1__ cm_id; TYPE_2__ id; int afonly; } ;
struct ib_cm_id {int dummy; } ;
struct ib_cm_compare_data {int dummy; } ;
typedef int __be64 ;


 scalar_t__ FUNC_0 (struct ib_cm_id*) ;
 int FUNC_1 (struct ib_cm_id*) ;
 scalar_t__ FUNC_2 (struct sockaddr*) ;
 int VAR_0 ;
 int FUNC_3 (int ,struct sockaddr*,struct ib_cm_compare_data*) ;
 struct sockaddr* FUNC_4 (struct rdma_id_private*) ;
 int FUNC_5 (struct ib_cm_id*,int ,int ,struct ib_cm_compare_data*) ;
 struct ib_cm_id* FUNC_6 (int ,int ,struct rdma_id_private*) ;
 int FUNC_7 (struct ib_cm_id*) ;
 int FUNC_8 (TYPE_2__*,struct sockaddr*) ;

__attribute__((used)) static int FUNC_9(struct rdma_id_private *VAR_1)
{
 struct ib_cm_compare_data VAR_2;
 struct sockaddr *VAR_3;
 struct ib_cm_id *VAR_4;
 __be64 VAR_5;
 int VAR_6;

 VAR_4 = FUNC_6(VAR_1->id.device, VAR_0, VAR_1);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_1->cm_id.ib = VAR_4;

 VAR_3 = FUNC_4(VAR_1);
 VAR_5 = FUNC_8(&VAR_1->id, VAR_3);
 if (FUNC_2(VAR_3) && !VAR_1->afonly)
  VAR_6 = FUNC_5(VAR_1->cm_id.ib, VAR_5, 0, ((void*)0));
 else {
  FUNC_3(VAR_1->id.ps, VAR_3, &VAR_2);
  VAR_6 = FUNC_5(VAR_1->cm_id.ib, VAR_5, 0, &VAR_2);
 }

 if (VAR_6) {
  FUNC_7(VAR_1->cm_id.ib);
  VAR_1->cm_id.ib = ((void*)0);
 }

 return VAR_6;
}
