
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_fp_txdata {int dummy; } ;
struct bnx2x_fastpath {int ** txdata_ptr; } ;
struct bnx2x {int max_cos; int * bnx2x_txq; struct bnx2x_fastpath* fp; } ;


 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static void FUNC_2(struct bnx2x *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3, VAR_4 = FUNC_0(VAR_0);




 for (VAR_3 = 1; VAR_3 < VAR_0->max_cos; VAR_3++) {
  for (VAR_2 = 0; VAR_2 < VAR_4 - VAR_1; VAR_2++) {
   struct bnx2x_fastpath *VAR_5 = &VAR_0->fp[VAR_2];
   int VAR_6 = VAR_3 * (VAR_4 - VAR_1) + VAR_2;

   FUNC_1(&VAR_0->bnx2x_txq[VAR_6], VAR_5->txdata_ptr[VAR_3],
          sizeof(struct bnx2x_fp_txdata));
   VAR_5->txdata_ptr[VAR_3] = &VAR_0->bnx2x_txq[VAR_6];
  }
 }
}
