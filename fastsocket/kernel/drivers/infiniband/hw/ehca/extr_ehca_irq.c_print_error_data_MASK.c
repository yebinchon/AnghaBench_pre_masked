
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int name; } ;
struct ehca_shca {TYPE_2__ ib_device; } ;
struct TYPE_3__ {int qp_num; } ;
struct ehca_qp {TYPE_1__ ib_qp; } ;
struct ehca_cq {int cq_number; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int*,int,char*,int) ;
 int FUNC_2 (TYPE_2__*,char*,...) ;

__attribute__((used)) static void FUNC_3(struct ehca_shca *VAR_1, void *VAR_2,
        u64 *VAR_3, int VAR_4)
{
 u64 VAR_5 = FUNC_0(VAR_0, VAR_3[2]);
 u64 VAR_6 = VAR_3[1];

 switch (VAR_5) {
 case 0x1:
 {
  struct ehca_qp *VAR_7 = (struct ehca_qp *)VAR_2;


  if (VAR_3[6] == 0)
   return;

  FUNC_2(&VAR_1->ib_device,
    "QP 0x%x (resource=%llx) has errors.",
    VAR_7->ib_qp.qp_num, VAR_6);
  break;
 }
 case 0x4:
 {
  struct ehca_cq *VAR_8 = (struct ehca_cq *)VAR_2;

  FUNC_2(&VAR_1->ib_device,
    "CQ 0x%x (resource=%llx) has errors.",
    VAR_8->cq_number, VAR_6);
  break;
 }
 default:
  FUNC_2(&VAR_1->ib_device,
    "Unknown error type: %llx on %s.",
    VAR_5, VAR_1->ib_device.name);
  break;
 }

 FUNC_2(&VAR_1->ib_device, "Error data is available: %llx.", VAR_6);
 FUNC_2(&VAR_1->ib_device, "EHCA ----- error data begin "
   "---------------------------------------------------");
 FUNC_1(VAR_3, VAR_4, "resource=%llx", VAR_6);
 FUNC_2(&VAR_1->ib_device, "EHCA ----- error data end "
   "----------------------------------------------------");

 return;
}
