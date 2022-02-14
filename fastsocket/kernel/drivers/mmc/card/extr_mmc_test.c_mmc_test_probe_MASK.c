
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_card {scalar_t__ type; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(struct mmc_card *VAR_4)
{
 int VAR_5;

 if ((VAR_4->type != VAR_1) && (VAR_4->type != VAR_2))
  return -VAR_0;

 VAR_5 = FUNC_1(&VAR_4->dev, &VAR_3);
 if (VAR_5)
  return VAR_5;

 FUNC_0(&VAR_4->dev, "Card claimed for testing.\n");

 return 0;
}
