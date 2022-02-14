
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_chip {TYPE_1__* controller; int state; int (* select_chip ) (struct mtd_info*,int) ;} ;
struct mtd_info {struct nand_chip* priv; } ;
struct TYPE_2__ {int lock; int wq; int * active; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mtd_info*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct mtd_info *VAR_1)
{
 struct nand_chip *VAR_2 = VAR_1->priv;


 VAR_2->select_chip(VAR_1, -1);


 FUNC_0(&VAR_2->controller->lock);
 VAR_2->controller->active = ((void*)0);
 VAR_2->state = VAR_0;
 FUNC_3(&VAR_2->controller->wq);
 FUNC_1(&VAR_2->controller->lock);
}
