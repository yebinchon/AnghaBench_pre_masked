
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {TYPE_1__ dch; int (* release ) (TYPE_2__*) ;} ;
struct fritzcard {int list; int pdev; int addr; TYPE_2__ isac; int * bch; int irq; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fritzcard*) ;
 int FUNC_1 (int ,struct fritzcard*) ;
 int FUNC_2 (struct fritzcard*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int ) ;

__attribute__((used)) static void
FUNC_15(struct fritzcard *VAR_3)
{
 u_long VAR_4;

 FUNC_0(VAR_3);
 FUNC_10(&VAR_3->lock, VAR_4);
 FUNC_6(&VAR_3->bch[0], VAR_1);
 FUNC_6(&VAR_3->bch[1], VAR_1);
 FUNC_11(&VAR_3->lock, VAR_4);
 VAR_3->isac.release(&VAR_3->isac);
 FUNC_1(VAR_3->irq, VAR_3);
 FUNC_4(&VAR_3->bch[1]);
 FUNC_4(&VAR_3->bch[0]);
 FUNC_5(&VAR_3->isac.dch.dev);
 FUNC_9(VAR_3->addr, 32);
 FUNC_7(VAR_3->pdev);
 FUNC_8(VAR_3->pdev, ((void*)0));
 FUNC_13(&VAR_2, VAR_4);
 FUNC_3(&VAR_3->list);
 FUNC_14(&VAR_2, VAR_4);
 FUNC_2(VAR_3);
 VAR_0--;
}
