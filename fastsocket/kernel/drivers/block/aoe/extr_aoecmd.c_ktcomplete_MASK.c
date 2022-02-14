
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ulong ;
struct sk_buff {int dummy; } ;
struct frame {int head; TYPE_2__* t; struct sk_buff* r_skb; } ;
struct TYPE_8__ {int lock; int head; } ;
struct TYPE_7__ {int active; } ;
struct TYPE_6__ {TYPE_1__* d; } ;
struct TYPE_5__ {int aoeminor; } ;


 TYPE_4__* VAR_0 ;
 int * VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct frame *VAR_4, struct sk_buff *VAR_5)
{
 int VAR_6;
 ulong VAR_7;

 VAR_4->r_skb = VAR_5;
 VAR_6 = VAR_4->t->d->aoeminor % VAR_3;
 FUNC_1(&VAR_0[VAR_6].lock, VAR_7);
 if (!VAR_2[VAR_6].active) {
  FUNC_2(&VAR_0[VAR_6].lock, VAR_7);




  VAR_6 = 0;
  FUNC_1(&VAR_0[VAR_6].lock, VAR_7);
 }
 FUNC_0(&VAR_4->head, &VAR_0[VAR_6].head);
 FUNC_2(&VAR_0[VAR_6].lock, VAR_7);
 FUNC_3(&VAR_1[VAR_6]);
}
