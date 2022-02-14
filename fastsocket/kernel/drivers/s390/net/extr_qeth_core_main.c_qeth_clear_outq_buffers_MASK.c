
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_qdio_out_q {int ** bufs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct qeth_qdio_out_q*,int,int) ;
 int FUNC_2 (struct qeth_qdio_out_q*,int *,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct qeth_qdio_out_q *VAR_3, int VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
  if (!VAR_3->bufs[VAR_5])
   continue;
  FUNC_1(VAR_3, VAR_5, 1);
  FUNC_2(VAR_3, VAR_3->bufs[VAR_5], VAR_1);
  if (VAR_4) {
   FUNC_0(VAR_2, VAR_3->bufs[VAR_5]);
   VAR_3->bufs[VAR_5] = ((void*)0);
  }
 }
}
