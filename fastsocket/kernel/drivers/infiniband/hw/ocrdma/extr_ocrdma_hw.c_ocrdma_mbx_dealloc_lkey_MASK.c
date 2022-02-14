
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocrdma_mqe {int dummy; } ;
struct ocrdma_dev {int dummy; } ;
struct ocrdma_dealloc_lkey {int rsvd_frmr; int lkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ocrdma_dealloc_lkey*) ;
 struct ocrdma_dealloc_lkey* FUNC_1 (int ,int) ;
 int FUNC_2 (struct ocrdma_dev*,struct ocrdma_mqe*) ;

int FUNC_3(struct ocrdma_dev *VAR_2, int VAR_3, u32 VAR_4)
{
 int VAR_5 = -VAR_0;
 struct ocrdma_dealloc_lkey *VAR_6;

 VAR_6 = FUNC_1(VAR_1, sizeof(*VAR_6));
 if (!VAR_6)
  return -VAR_0;
 VAR_6->lkey = VAR_4;
 VAR_6->rsvd_frmr = VAR_3 ? 1 : 0;
 VAR_5 = FUNC_2(VAR_2, (struct ocrdma_mqe *)VAR_6);
 if (VAR_5)
  goto mbx_err;
mbx_err:
 FUNC_0(VAR_6);
 return VAR_5;
}
