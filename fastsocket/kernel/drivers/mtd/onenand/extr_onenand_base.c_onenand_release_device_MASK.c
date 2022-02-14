
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct onenand_chip {int chip_lock; int wq; int state; } ;
struct mtd_info {struct onenand_chip* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct mtd_info *VAR_1)
{
 struct onenand_chip *VAR_2 = VAR_1->priv;


 FUNC_0(&VAR_2->chip_lock);
 VAR_2->state = VAR_0;
 FUNC_2(&VAR_2->wq);
 FUNC_1(&VAR_2->chip_lock);
}
