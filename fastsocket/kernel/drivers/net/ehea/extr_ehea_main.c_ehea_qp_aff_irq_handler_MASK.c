
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef size_t u32 ;
struct ehea_qp {int fw_handle; } ;
struct ehea_port {int qp_eq; int adapter; TYPE_1__* port_res; } ;
struct ehea_eqe {int entry; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {struct ehea_qp* qp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__*,scalar_t__*) ;
 struct ehea_eqe* FUNC_3 (int ) ;
 int FUNC_4 (struct ehea_port*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_5, void *VAR_6)
{
 struct ehea_port *VAR_7 = VAR_6;
 struct ehea_eqe *VAR_8;
 struct ehea_qp *VAR_9;
 u32 VAR_10;
 u64 VAR_11, VAR_12, VAR_13;
 int VAR_14 = 0;

 VAR_8 = FUNC_3(VAR_7->qp_eq);

 while (VAR_8) {
  VAR_10 = FUNC_0(VAR_3, VAR_8->entry);
  FUNC_1("QP aff_err: entry=0x%llx, token=0x%x",
      VAR_8->entry, VAR_10);

  VAR_9 = VAR_7->port_res[VAR_10].qp;

  VAR_11 = FUNC_2(VAR_7->adapter, VAR_9->fw_handle,
      &VAR_12, &VAR_13);

  if (VAR_11 == VAR_2) {
   if ((VAR_12 & VAR_1) ||
       (VAR_13 & VAR_0))
     VAR_14 = 1;
  } else
   VAR_14 = 1;

  VAR_8 = FUNC_3(VAR_7->qp_eq);
 }

 if (VAR_14) {
  FUNC_1("Resetting port");
  FUNC_4(VAR_7);
 }

 return VAR_4;
}
