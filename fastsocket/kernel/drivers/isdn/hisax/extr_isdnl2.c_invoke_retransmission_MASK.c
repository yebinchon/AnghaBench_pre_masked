
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
typedef size_t u_int ;
struct Layer2 {unsigned int vs; int va; size_t sow; size_t window; int lock; int (* l2l1 ) (struct PStack*,int,int *) ;TYPE_3__** windowar; int i_queue; int flag; } ;
struct TYPE_5__ {TYPE_1__* bcs; } ;
struct PStack {struct Layer2 l2; TYPE_2__ l1; } ;
struct TYPE_6__ {scalar_t__ len; } ;
struct TYPE_4__ {int tx_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct Layer2*,int ) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct PStack*,int,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void
FUNC_6(struct PStack *VAR_4, unsigned int VAR_5)
{
 struct Layer2 *VAR_6 = &VAR_4->l2;
 u_int VAR_7;
 u_long VAR_8;

 FUNC_2(&VAR_6->lock, VAR_8);
 if (VAR_6->vs != VAR_5) {
  while (VAR_6->vs != VAR_5) {
   (VAR_6->vs)--;
   if(FUNC_5(VAR_1, &VAR_6->flag)) {
    VAR_6->vs %= 128;
    VAR_7 = (VAR_6->vs - VAR_6->va) % 128;
   } else {
    VAR_6->vs %= 8;
    VAR_7 = (VAR_6->vs - VAR_6->va) % 8;
   }
   VAR_7 = (VAR_7 + VAR_6->sow) % VAR_6->window;
   if (FUNC_5(VAR_0, &VAR_6->flag))
    VAR_4->l1.bcs->tx_cnt += VAR_6->windowar[VAR_7]->len + FUNC_0(VAR_6, 0);
   FUNC_1(&VAR_6->i_queue, VAR_6->windowar[VAR_7]);
   VAR_6->windowar[VAR_7] = ((void*)0);
  }
  FUNC_3(&VAR_6->lock, VAR_8);
  VAR_4->l2.l2l1(VAR_4, VAR_2 | VAR_3, ((void*)0));
  return;
 }
 FUNC_3(&VAR_6->lock, VAR_8);
}
