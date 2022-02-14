
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame {int head; scalar_t__ flags; int * r_skb; int * bv; scalar_t__ lba; int * buf; struct aoetgt* t; } ;
struct aoetgt {int ffree; } ;


 int FUNC_0 (int *,int *) ;

void
FUNC_1(struct frame *VAR_0)
{
 struct aoetgt *VAR_1;

 VAR_1 = VAR_0->t;
 VAR_0->buf = ((void*)0);
 VAR_0->lba = 0;
 VAR_0->bv = ((void*)0);
 VAR_0->r_skb = ((void*)0);
 VAR_0->flags = 0;
 FUNC_0(&VAR_0->head, &VAR_1->ffree);
}
