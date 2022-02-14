
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct channel_path {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

int FUNC_2(struct channel_path *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_2->dev, &VAR_1);
 if (VAR_3)
  return VAR_3;
 VAR_3 = FUNC_0(&VAR_2->dev, &VAR_0);
 if (VAR_3)
  FUNC_1(&VAR_2->dev, &VAR_1);
 return VAR_3;
}
