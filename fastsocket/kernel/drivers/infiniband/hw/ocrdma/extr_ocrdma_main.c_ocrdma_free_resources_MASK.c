
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocrdma_dev {int sgid_tbl; int cq_tbl; int qp_tbl; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ocrdma_dev *VAR_0)
{
 FUNC_0(VAR_0->qp_tbl);
 FUNC_0(VAR_0->cq_tbl);
 FUNC_0(VAR_0->sgid_tbl);
}
