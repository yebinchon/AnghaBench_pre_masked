
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mthca_eq {int eqn; int cons_index; struct mthca_dev* dev; } ;
struct mthca_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct mthca_dev*,struct mthca_eq*) ;
 int FUNC_1 (struct mthca_dev*,int ) ;
 int FUNC_2 (struct mthca_dev*,struct mthca_eq*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct mthca_eq *VAR_3 = VAR_2;
 struct mthca_dev *VAR_4 = VAR_3->dev;

 FUNC_0(VAR_4, VAR_3);
 FUNC_2(VAR_4, VAR_3, VAR_3->cons_index);
 FUNC_1(VAR_4, VAR_3->eqn);


 return VAR_0;
}
