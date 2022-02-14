
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_ucm_create_id {int ps; int qp_type; } ;
typedef enum ib_qp_type { ____Placeholder_ib_qp_type } ib_qp_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





__attribute__((used)) static int FUNC_0(struct rdma_ucm_create_id *VAR_3, enum ib_qp_type *VAR_4)
{
 switch (VAR_3->ps) {
 case 129:
  *VAR_4 = VAR_1;
  return 0;
 case 128:
 case 130:
  *VAR_4 = VAR_2;
  return 0;
 case 131:
  *VAR_4 = VAR_3->qp_type;
  return 0;
 default:
  return -VAR_0;
 }
}
