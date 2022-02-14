
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct data_queue {scalar_t__ qid; int status_lock; TYPE_3__* rt2x00dev; int flags; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {TYPE_1__* lib; } ;
struct TYPE_4__ {int (* flush_queue ) (struct data_queue*,int) ;int (* kick_queue ) (struct data_queue*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int (*) (struct data_queue*,int)) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*,char*,scalar_t__) ;
 int FUNC_4 (struct data_queue*) ;
 int FUNC_5 (struct data_queue*) ;
 int FUNC_6 (struct data_queue*) ;
 int FUNC_7 (struct data_queue*) ;
 int FUNC_8 (struct data_queue*,int) ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int) ;

void FUNC_11(struct data_queue *VAR_5, bool VAR_6)
{
 bool VAR_7;
 bool VAR_8 =
  (VAR_5->qid == VAR_3) ||
  (VAR_5->qid == VAR_2) ||
  (VAR_5->qid == VAR_0) ||
  (VAR_5->qid == VAR_1);

 FUNC_1(&VAR_5->status_lock);
 VAR_7 = FUNC_9(VAR_4, &VAR_5->flags);
 if (VAR_7) {



  FUNC_5(VAR_5);







  if (!VAR_6 && VAR_8)
   VAR_5->rt2x00dev->ops->lib->kick_queue(VAR_5);
 }






 if (FUNC_0(VAR_5->rt2x00dev->ops->lib->flush_queue))
  VAR_5->rt2x00dev->ops->lib->flush_queue(VAR_5, VAR_6);




 if (FUNC_10(!FUNC_4(VAR_5)))
  FUNC_3(VAR_5->rt2x00dev, "Queue %d failed to flush\n",
       VAR_5->qid);




 if (VAR_7)
  FUNC_6(VAR_5);

 FUNC_2(&VAR_5->status_lock);
}
