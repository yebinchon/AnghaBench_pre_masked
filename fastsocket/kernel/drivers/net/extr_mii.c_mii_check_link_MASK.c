
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_if_info {int dev; } ;


 int FUNC_0 (struct mii_if_info*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4 (struct mii_if_info *VAR_0)
{
 int VAR_1 = FUNC_0(VAR_0);
 int VAR_2 = FUNC_2(VAR_0->dev);

 if (VAR_1 && !VAR_2)
  FUNC_3(VAR_0->dev);
 else if (VAR_2 && !VAR_1)
  FUNC_1(VAR_0->dev);
}
