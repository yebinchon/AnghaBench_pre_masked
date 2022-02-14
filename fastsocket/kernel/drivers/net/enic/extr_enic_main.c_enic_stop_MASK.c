
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct enic {unsigned int intr_count; unsigned int rq_count; unsigned int wq_count; unsigned int cq_count; int * intr; int * cq; int * rq; int * wq; int * napi; int notify_timer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct enic*) ;
 int FUNC_2 (struct enic*) ;
 int FUNC_3 (struct enic*) ;
 int FUNC_4 (struct enic*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (struct enic*) ;
 int FUNC_6 (struct enic*) ;
 int FUNC_7 (struct enic*) ;
 int FUNC_8 (int *) ;
 struct enic* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static int FUNC_20(struct net_device *VAR_2)
{
 struct enic *VAR_3 = FUNC_9(VAR_2);
 unsigned int VAR_4;
 int VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_3->intr_count; VAR_4++) {
  FUNC_14(&VAR_3->intr[VAR_4]);
  (void)FUNC_15(&VAR_3->intr[VAR_4]);
 }

 FUNC_7(VAR_3);

 FUNC_0(&VAR_3->notify_timer);

 FUNC_2(VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_3->rq_count; VAR_4++)
  FUNC_8(&VAR_3->napi[VAR_4]);

 FUNC_10(VAR_2);
 FUNC_11(VAR_2);

 if (!FUNC_5(VAR_3) && !FUNC_6(VAR_3))
  FUNC_1(VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_3->wq_count; VAR_4++) {
  VAR_5 = FUNC_19(&VAR_3->wq[VAR_4]);
  if (VAR_5)
   return VAR_5;
 }
 for (VAR_4 = 0; VAR_4 < VAR_3->rq_count; VAR_4++) {
  VAR_5 = FUNC_17(&VAR_3->rq[VAR_4]);
  if (VAR_5)
   return VAR_5;
 }

 FUNC_3(VAR_3);
 FUNC_4(VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_3->wq_count; VAR_4++)
  FUNC_18(&VAR_3->wq[VAR_4], VAR_1);
 for (VAR_4 = 0; VAR_4 < VAR_3->rq_count; VAR_4++)
  FUNC_16(&VAR_3->rq[VAR_4], VAR_0);
 for (VAR_4 = 0; VAR_4 < VAR_3->cq_count; VAR_4++)
  FUNC_12(&VAR_3->cq[VAR_4]);
 for (VAR_4 = 0; VAR_4 < VAR_3->intr_count; VAR_4++)
  FUNC_13(&VAR_3->intr[VAR_4]);

 return 0;
}
