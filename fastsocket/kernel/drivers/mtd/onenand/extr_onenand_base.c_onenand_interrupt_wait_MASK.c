
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct onenand_chip {int complete; } ;
struct mtd_info {struct onenand_chip* priv; } ;


 int FUNC_0 (struct mtd_info*,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_0, int VAR_1)
{
 struct onenand_chip *VAR_2 = VAR_0->priv;

 FUNC_1(&VAR_2->complete);

 return FUNC_0(VAR_0, VAR_1);
}
