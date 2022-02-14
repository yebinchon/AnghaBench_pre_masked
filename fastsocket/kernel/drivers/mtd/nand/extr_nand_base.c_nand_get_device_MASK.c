
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wait_queue_head_t ;
struct nand_chip {int state; TYPE_1__* controller; } ;
struct mtd_info {int dummy; } ;
typedef int spinlock_t ;
struct TYPE_2__ {struct nand_chip* active; int wq; int lock; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int VAR_4 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_7(struct nand_chip *VAR_6, struct mtd_info *VAR_7, int VAR_8)
{
 spinlock_t *VAR_9 = &VAR_6->controller->lock;
 wait_queue_head_t *VAR_10 = &VAR_6->controller->wq;
 FUNC_0(VAR_5, VAR_4);
 retry:
 FUNC_5(VAR_9);


 if (!VAR_6->controller->active)
  VAR_6->controller->active = VAR_6;

 if (VAR_6->controller->active == VAR_6 && VAR_6->state == VAR_2) {
  VAR_6->state = VAR_8;
  FUNC_6(VAR_9);
  return 0;
 }
 if (VAR_8 == VAR_1) {
  FUNC_6(VAR_9);
  return (VAR_6->state == VAR_1) ? 0 : -VAR_0;
 }
 FUNC_4(VAR_3);
 FUNC_1(VAR_10, &VAR_5);
 FUNC_6(VAR_9);
 FUNC_3();
 FUNC_2(VAR_10, &VAR_5);
 goto retry;
}
