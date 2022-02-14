
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ili9320 {int power; int dev; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct ili9320*) ;
 int FUNC_4 (struct ili9320*) ;

__attribute__((used)) static int FUNC_5(struct ili9320 *VAR_0, int VAR_1)
{
 int VAR_2 = 0;

 FUNC_1(VAR_0->dev, "power %d => %d\n", VAR_0->power, VAR_1);

 if (FUNC_0(VAR_1) && !FUNC_0(VAR_0->power))
  VAR_2 = FUNC_4(VAR_0);
 else if (!FUNC_0(VAR_1) && FUNC_0(VAR_0->power))
  VAR_2 = FUNC_3(VAR_0);

 if (VAR_2 == 0)
  VAR_0->power = VAR_1;
 else
  FUNC_2(VAR_0->dev, "failed to set power mode %d\n", VAR_1);

 return VAR_2;
}
