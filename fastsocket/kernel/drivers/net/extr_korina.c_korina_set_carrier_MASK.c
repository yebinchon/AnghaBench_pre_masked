
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_if_info {int dev; scalar_t__ force_media; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct mii_if_info *VAR_0)
{
 if (VAR_0->force_media) {

  if (!FUNC_1(VAR_0->dev))
   FUNC_2(VAR_0->dev);
 } else
  FUNC_0(VAR_0->dev, 0);
}
