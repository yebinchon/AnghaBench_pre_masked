
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macio_dev {int n_resources; } ;


 int VAR_0 ;
 int FUNC_0 (struct macio_dev*,int) ;
 scalar_t__ FUNC_1 (struct macio_dev*,int,char const*) ;

int FUNC_2(struct macio_dev *VAR_1, const char *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->n_resources; VAR_3++)
  if (FUNC_1(VAR_1, VAR_3, VAR_2))
   goto err_out;
 return 0;

err_out:
 while(--VAR_3 >= 0)
  FUNC_0(VAR_1, VAR_3);

 return -VAR_0;
}
