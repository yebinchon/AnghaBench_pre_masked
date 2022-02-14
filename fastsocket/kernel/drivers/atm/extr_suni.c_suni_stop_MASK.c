
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct suni_priv {struct suni_priv* next; struct atm_dev* dev; } ;
struct atm_dev {int dummy; } ;


 struct suni_priv* FUNC_0 (struct atm_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct suni_priv*) ;
 int VAR_0 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct suni_priv* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct atm_dev *VAR_3)
{
 struct suni_priv **VAR_4;
 unsigned long VAR_5;


 FUNC_3(&VAR_2,VAR_5);
 for (VAR_4 = &VAR_1; *VAR_4 != FUNC_0(VAR_3);
     VAR_4 = &FUNC_0((*VAR_4)->dev)->next);
 *VAR_4 = FUNC_0((*VAR_4)->dev)->next;
 if (!VAR_1) FUNC_1(&VAR_0);
 FUNC_4(&VAR_2,VAR_5);
 FUNC_2(FUNC_0(VAR_3));

 return 0;
}
