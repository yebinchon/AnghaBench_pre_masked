
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ocrdma_reg_nsmr_cont {int num_pbl_offset; int last; TYPE_1__* pbl; int lrkey; } ;
struct ocrdma_mqe {int dummy; } ;
struct ocrdma_hw_mr {TYPE_2__* pbl_table; int lkey; } ;
struct ocrdma_dev {int dummy; } ;
struct TYPE_4__ {int pa; } ;
struct TYPE_3__ {int lo; int hi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ocrdma_reg_nsmr_cont*) ;
 struct ocrdma_reg_nsmr_cont* FUNC_1 (int ,int) ;
 int FUNC_2 (struct ocrdma_dev*,struct ocrdma_mqe*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct ocrdma_dev *VAR_5,
      struct ocrdma_hw_mr *VAR_6, u32 VAR_7,
      u32 VAR_8, u32 VAR_9)
{
 int VAR_10 = -VAR_0;
 int VAR_11;
 struct ocrdma_reg_nsmr_cont *VAR_12;

 VAR_12 = FUNC_1(VAR_1, sizeof(*VAR_12));
 if (!VAR_12)
  return -VAR_0;
 VAR_12->lrkey = VAR_6->lkey;
 VAR_12->num_pbl_offset = (VAR_7 << VAR_3) |
     (VAR_8 & VAR_4);
 VAR_12->last = VAR_9 << VAR_2;

 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
  VAR_12->pbl[VAR_11].lo =
      (u32) (VAR_6->pbl_table[VAR_11 + VAR_8].pa & 0xffffffff);
  VAR_12->pbl[VAR_11].hi =
      FUNC_3(VAR_6->pbl_table[VAR_11 + VAR_8].pa);
 }
 VAR_10 = FUNC_2(VAR_5, (struct ocrdma_mqe *)VAR_12);
 if (VAR_10)
  goto mbx_err;
mbx_err:
 FUNC_0(VAR_12);
 return VAR_10;
}
