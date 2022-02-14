
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_cm_id {scalar_t__ context; } ;
struct iser_device {int dummy; } ;
struct iser_conn {struct iser_device* device; } ;


 int FUNC_0 (struct rdma_cm_id*) ;
 struct iser_device* FUNC_1 (struct rdma_cm_id*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct rdma_cm_id*,int) ;

__attribute__((used)) static int FUNC_4(struct rdma_cm_id *VAR_0)
{
 struct iser_device *VAR_1;
 struct iser_conn *VAR_2;
 int VAR_3;

 VAR_1 = FUNC_1(VAR_0);
 if (!VAR_1) {
  FUNC_2("device lookup/creation failed\n");
  return FUNC_0(VAR_0);
 }

 VAR_2 = (struct iser_conn *)VAR_0->context;
 VAR_2->device = VAR_1;

 VAR_3 = FUNC_3(VAR_0, 1000);
 if (VAR_3) {
  FUNC_2("resolve route failed: %d\n", VAR_3);
  return FUNC_0(VAR_0);
 }

 return 0;
}
