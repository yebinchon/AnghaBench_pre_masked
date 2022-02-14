
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocrdma_sge {scalar_t__ len; int addr_hi; int addr_lo; int lrkey; } ;
struct ocrdma_hdr_wqe {int total_len; } ;
struct ib_sge {scalar_t__ length; int addr; int lkey; } ;


 int FUNC_0 (struct ocrdma_sge*,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ocrdma_hdr_wqe *VAR_0,
         struct ocrdma_sge *VAR_1, int VAR_2,
         struct ib_sge *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_1[VAR_4].lrkey = VAR_3[VAR_4].lkey;
  VAR_1[VAR_4].addr_lo = VAR_3[VAR_4].addr;
  VAR_1[VAR_4].addr_hi = FUNC_1(VAR_3[VAR_4].addr);
  VAR_1[VAR_4].len = VAR_3[VAR_4].length;
  VAR_0->total_len += VAR_3[VAR_4].length;
 }
 if (VAR_2 == 0)
  FUNC_0(VAR_1, 0, sizeof(*VAR_1));
}
