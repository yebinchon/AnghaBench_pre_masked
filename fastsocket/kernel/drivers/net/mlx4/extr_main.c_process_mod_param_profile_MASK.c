
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num_qp; int num_srq; int rdmarc_per_qp; int num_cq; int num_mcg; int num_mpt; int num_mtt; } ;
struct TYPE_3__ {int num_qp; int num_srq; int rdmarc_per_qp; int num_cq; int num_mcg; int num_mpt; int num_mtt; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_0(void)
{
 VAR_0.num_qp = (VAR_1.num_qp ?
      1 << VAR_1.num_qp :
      VAR_0.num_qp);
 VAR_0.num_srq = (VAR_1.num_srq ?
      1 << VAR_1.num_srq :
      VAR_0.num_srq);
 VAR_0.rdmarc_per_qp = (VAR_1.rdmarc_per_qp ?
      1 << VAR_1.rdmarc_per_qp :
      VAR_0.rdmarc_per_qp);
 VAR_0.num_cq = (VAR_1.num_cq ?
      1 << VAR_1.num_cq :
      VAR_0.num_cq);
 VAR_0.num_mcg = (VAR_1.num_mcg ?
      1 << VAR_1.num_mcg :
      VAR_0.num_mcg);
 VAR_0.num_mpt = (VAR_1.num_mpt ?
      1 << VAR_1.num_mpt :
      VAR_0.num_mpt);
 VAR_0.num_mtt = (VAR_1.num_mtt ?
      1 << VAR_1.num_mtt :
      VAR_0.num_mtt);
}
