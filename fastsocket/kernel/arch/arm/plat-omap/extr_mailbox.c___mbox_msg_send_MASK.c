
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_mbox {TYPE_2__* txq; TYPE_1__* ops; } ;
typedef int mbox_msg_t ;
struct TYPE_4__ {int (* callback ) (void*) ;} ;
struct TYPE_3__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct omap_mbox*) ;
 int FUNC_1 (struct omap_mbox*,int ) ;
 int FUNC_2 (struct omap_mbox*,int *) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct omap_mbox *VAR_1, mbox_msg_t VAR_2, void *VAR_3)
{
 int VAR_4 = 0, VAR_5 = 1000;

 while (FUNC_0(VAR_1)) {
  if (VAR_1->ops->type == VAR_0)
   return -1;
  if (--VAR_5 == 0)
   return -1;
  FUNC_4(1);
 }

 if (VAR_3 && VAR_1->txq->callback) {
  VAR_4 = VAR_1->txq->callback(VAR_3);
  if (VAR_4)
   goto out;
 }

 FUNC_2(VAR_1, &VAR_2);
 FUNC_1(VAR_1, VAR_2);
 out:
 return VAR_4;
}
