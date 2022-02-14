
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ipz_qp_handle {int handle; } ;
struct ipz_adapter_handle {int handle; } ;
struct hcp_modify_qp_control_block {int dummy; } ;
struct h_galpa {int dummy; } ;
struct ehca_pfqp {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,unsigned long*,int ,int ,scalar_t__ const,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct hcp_modify_qp_control_block*) ;

u64 FUNC_3(const struct ipz_adapter_handle VAR_3,
       const struct ipz_qp_handle VAR_4,
       struct ehca_pfqp *VAR_5,
       const u64 VAR_6,
       struct hcp_modify_qp_control_block *VAR_7,
       struct h_galpa VAR_8)
{
 u64 VAR_9;
 unsigned long VAR_10[VAR_2];
 VAR_9 = FUNC_1(VAR_0, VAR_10,
    VAR_3.handle,
    VAR_4.handle,
    VAR_6,
    FUNC_2(VAR_7),
    0, 0, 0, 0, 0);

 if (VAR_9 == VAR_1)
  FUNC_0("Insufficient resources ret=%lli", VAR_9);

 return VAR_9;
}
