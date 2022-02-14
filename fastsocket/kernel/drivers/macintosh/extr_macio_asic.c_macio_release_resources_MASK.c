
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macio_dev {int n_resources; } ;


 int FUNC_0 (struct macio_dev*,int) ;

void FUNC_1(struct macio_dev *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->n_resources; VAR_1++)
  FUNC_0(VAR_0, VAR_1);
}
