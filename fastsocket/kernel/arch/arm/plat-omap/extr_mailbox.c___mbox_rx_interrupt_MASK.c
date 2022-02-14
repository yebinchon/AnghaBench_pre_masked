
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct request {int dummy; } ;
struct omap_mbox {TYPE_2__* rxq; TYPE_1__* ops; int (* err_notify ) () ;} ;
typedef scalar_t__ mbox_msg_t ;
struct TYPE_4__ {int work; struct request_queue* queue; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct omap_mbox*,int ) ;
 struct request* FUNC_1 (struct request_queue*,int ,int ) ;
 int FUNC_2 (struct request_queue*,struct request*,int ,void*) ;
 int FUNC_3 (struct omap_mbox*,int ) ;
 int FUNC_4 (struct omap_mbox*,int ) ;
 int FUNC_5 (struct omap_mbox*) ;
 scalar_t__ FUNC_6 (struct omap_mbox*) ;
 int FUNC_7 (struct omap_mbox*,scalar_t__) ;
 int FUNC_8 (char*,scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(struct omap_mbox *VAR_4)
{
 struct request *VAR_5;
 mbox_msg_t VAR_6;
 struct request_queue *VAR_7 = VAR_4->rxq->queue;

 FUNC_3(VAR_4, VAR_1);

 while (!FUNC_5(VAR_4)) {
  VAR_5 = FUNC_1(VAR_7, VAR_3, VAR_0);
  if (FUNC_11(!VAR_5))
   goto nomem;

  VAR_6 = FUNC_6(VAR_4);

  if (FUNC_11(FUNC_7(VAR_4, VAR_6))) {
   FUNC_8("mbox: Illegal seq bit!(%08x)\n", VAR_6);
   if (VAR_4->err_notify)
    VAR_4->err_notify();
  }

  FUNC_2(VAR_7, VAR_5, 0, (void *)VAR_6);
  if (VAR_4->ops->type == VAR_2)
   break;
 }


 FUNC_0(VAR_4, VAR_1);
 FUNC_4(VAR_4, VAR_1);
nomem:
 FUNC_9(&VAR_4->rxq->work);
}
