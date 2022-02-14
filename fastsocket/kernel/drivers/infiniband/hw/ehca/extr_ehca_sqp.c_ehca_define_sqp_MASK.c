
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct ib_qp_init_attr {int port_num; int qp_type; } ;
struct ehca_shca {int ib_device; TYPE_2__* sport; int ipz_hca_handle; } ;
struct TYPE_3__ {int kernel; } ;
struct ehca_qp {TYPE_1__ galpas; int ipz_qp_handle; } ;
struct TYPE_4__ {scalar_t__ port_state; int pma_qp_nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;


 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (int *,char*,int,...) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int ,int ,int *,int *) ;
 int FUNC_3 (int) ;

u64 FUNC_4(struct ehca_shca *VAR_7,
      struct ehca_qp *VAR_8,
      struct ib_qp_init_attr *VAR_9)
{
 u32 VAR_10, VAR_11;
 u64 VAR_12;
 u8 VAR_13 = VAR_9->port_num;
 int VAR_14;

 VAR_7->sport[VAR_13 - 1].port_state = VAR_4;

 switch (VAR_9->qp_type) {
 case 128:

  break;
 case 129:
  VAR_12 = FUNC_2(VAR_7->ipz_hca_handle,
      VAR_8->ipz_qp_handle,
      VAR_8->galpas.kernel,
      (u32) VAR_9->port_num,
      &VAR_10, &VAR_11);

  if (VAR_12 != VAR_2) {
   FUNC_1(&VAR_7->ib_device,
     "Can't define AQP1 for port %x. h_ret=%lli",
     VAR_13, VAR_12);
   return VAR_12;
  }
  VAR_7->sport[VAR_13 - 1].pma_qp_nr = VAR_10;
  FUNC_0(&VAR_7->ib_device, "port=%x pma_qp_nr=%x",
    VAR_13, VAR_10);
  break;
 default:
  FUNC_1(&VAR_7->ib_device, "invalid qp_type=%x",
    VAR_9->qp_type);
  return VAR_1;
 }

 if (VAR_5 < 0)
  return VAR_2;

 for (VAR_14 = 0;
      VAR_7->sport[VAR_13 - 1].port_state != VAR_3 &&
       VAR_14 < VAR_6;
      VAR_14++) {
  FUNC_0(&VAR_7->ib_device, "... wait until port %x is active",
    VAR_13);
  FUNC_3(1000);
 }

 if (VAR_14 == VAR_6) {
  FUNC_1(&VAR_7->ib_device, "Port %x is not active.", VAR_13);
  return VAR_0;
 }

 return VAR_2;
}
