
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct enic {unsigned int rq_count; unsigned int wq_count; unsigned int intr_count; int * intr; int * napi; int * rq; int * wq; } ;


 int VAR_0 ;
 int FUNC_0 (struct enic*) ;
 int FUNC_1 (struct enic*) ;
 int FUNC_2 (struct enic*) ;
 int FUNC_3 (struct enic*) ;
 int FUNC_4 (struct enic*) ;
 int FUNC_5 (struct enic*) ;
 int FUNC_6 (struct enic*) ;
 int FUNC_7 (struct enic*) ;
 int FUNC_8 (struct enic*) ;
 int VAR_1 ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct net_device*,char*) ;
 struct enic* FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int FUNC_19(struct net_device *VAR_2)
{
 struct enic *VAR_3 = FUNC_12(VAR_2);
 unsigned int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_8(VAR_3);
 if (VAR_5) {
  FUNC_11(VAR_2, "Unable to request irq.\n");
  return VAR_5;
 }

 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5) {
  FUNC_11(VAR_2,
   "Failed to alloc notify buffer, aborting.\n");
  goto err_out_free_intr;
 }

 for (VAR_4 = 0; VAR_4 < VAR_3->rq_count; VAR_4++) {
  FUNC_17(&VAR_3->rq[VAR_4], VAR_1);

  if (FUNC_15(&VAR_3->rq[VAR_4]) == 0) {
   FUNC_11(VAR_2, "Unable to alloc receive buffers\n");
   VAR_5 = -VAR_0;
   goto err_out_notify_unset;
  }
 }

 for (VAR_4 = 0; VAR_4 < VAR_3->wq_count; VAR_4++)
  FUNC_18(&VAR_3->wq[VAR_4]);
 for (VAR_4 = 0; VAR_4 < VAR_3->rq_count; VAR_4++)
  FUNC_16(&VAR_3->rq[VAR_4]);

 if (!FUNC_5(VAR_3) && !FUNC_6(VAR_3))
  FUNC_0(VAR_3);

 FUNC_9(VAR_2);

 FUNC_13(VAR_2);

 for (VAR_4 = 0; VAR_4 < VAR_3->rq_count; VAR_4++)
  FUNC_10(&VAR_3->napi[VAR_4]);

 FUNC_1(VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_3->intr_count; VAR_4++)
  FUNC_14(&VAR_3->intr[VAR_4]);

 FUNC_7(VAR_3);

 return 0;

err_out_notify_unset:
 FUNC_3(VAR_3);
err_out_free_intr:
 FUNC_4(VAR_3);

 return VAR_5;
}
