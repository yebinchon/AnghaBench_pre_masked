
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ap_device {int unregistered; int qid; scalar_t__ pendingq_count; int requestq_count; int requestq; int pendingq; scalar_t__ queue_count; int reset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(struct ap_device *VAR_3)
{
 int VAR_4;

 VAR_3->reset = VAR_0;
 FUNC_2(VAR_3->queue_count, &VAR_2);
 VAR_3->queue_count = 0;
 FUNC_3(&VAR_3->pendingq, &VAR_3->requestq);
 VAR_3->requestq_count += VAR_3->pendingq_count;
 VAR_3->pendingq_count = 0;
 VAR_4 = FUNC_1(VAR_3->qid);
 if (VAR_4 == -VAR_1)
  VAR_3->unregistered = 1;
 else
  FUNC_0();
}
