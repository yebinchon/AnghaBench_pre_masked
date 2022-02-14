
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x_sriov {int first_vf_in_pf; int pgsz; int stride; int offset; int nr_virtfn; int initial; int total; int ctrl; int cap; scalar_t__ nres; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (int ,char*,int ,int,scalar_t__,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct bnx2x*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct bnx2x*,struct bnx2x_sriov*) ;

__attribute__((used)) static int FUNC_5(struct bnx2x *VAR_6, struct bnx2x_sriov *VAR_7)
{
 u32 VAR_8;





 if (FUNC_4(VAR_6, VAR_7))
  return -VAR_2;


 VAR_7->nres = 0;


 VAR_8 = FUNC_3(VAR_6, VAR_5 + VAR_3);
 VAR_7->first_vf_in_pf = ((VAR_8 & VAR_4)
          * 8) - (VAR_0 * FUNC_1(VAR_6));

 FUNC_2(VAR_1,
    "IOV info[%d]: first vf %d, nres %d, cap 0x%x, ctrl 0x%x, total %d, initial %d, num vfs %d, offset %d, stride %d, page size 0x%x\n",
    FUNC_0(VAR_6),
    VAR_7->first_vf_in_pf, VAR_7->nres, VAR_7->cap, VAR_7->ctrl, VAR_7->total,
    VAR_7->initial, VAR_7->nr_virtfn, VAR_7->offset, VAR_7->stride, VAR_7->pgsz);

 return 0;
}
