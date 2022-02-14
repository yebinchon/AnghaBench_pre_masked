
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct enic {unsigned int wq_count; unsigned int rq_count; int netdev; int * rq; int * wq; } ;


 int FUNC_0 (int ,char*,unsigned int,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct enic *VAR_0)
{
 unsigned int VAR_1;
 u32 VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->wq_count; VAR_1++) {
  VAR_2 = FUNC_2(&VAR_0->wq[VAR_1]);
  if (VAR_2)
   FUNC_0(VAR_0->netdev, "WQ[%d] error_status %d\n",
    VAR_1, VAR_2);
 }

 for (VAR_1 = 0; VAR_1 < VAR_0->rq_count; VAR_1++) {
  VAR_2 = FUNC_1(&VAR_0->rq[VAR_1]);
  if (VAR_2)
   FUNC_0(VAR_0->netdev, "RQ[%d] error_status %d\n",
    VAR_1, VAR_2);
 }
}
