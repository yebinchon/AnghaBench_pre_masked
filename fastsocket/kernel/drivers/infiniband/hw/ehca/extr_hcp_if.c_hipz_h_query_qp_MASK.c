
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ipz_qp_handle {int handle; } ;
struct ipz_adapter_handle {int handle; } ;
struct hcp_modify_qp_control_block {int dummy; } ;
struct h_galpa {int dummy; } ;
struct ehca_pfqp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct hcp_modify_qp_control_block*) ;

u64 FUNC_2(const struct ipz_adapter_handle VAR_1,
      const struct ipz_qp_handle VAR_2,
      struct ehca_pfqp *VAR_3,
      struct hcp_modify_qp_control_block *VAR_4,
      struct h_galpa VAR_5)
{
 return FUNC_0(VAR_0,
           VAR_1.handle,
           VAR_2.handle,
           FUNC_1(VAR_4),
           0, 0, 0, 0);
}
