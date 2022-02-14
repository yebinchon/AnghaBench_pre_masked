
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gameport {int dummy; } ;
struct a3d {scalar_t__ adc; int dev; } ;


 int FUNC_0 (struct gameport*) ;
 struct a3d* FUNC_1 (struct gameport*) ;
 int FUNC_2 (struct gameport*,int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct a3d*) ;

__attribute__((used)) static void FUNC_6(struct gameport *VAR_0)
{
 struct a3d *VAR_1 = FUNC_1(VAR_0);

 FUNC_4(VAR_1->dev);
 if (VAR_1->adc)
  FUNC_3(VAR_1->adc);
 FUNC_0(VAR_0);
 FUNC_2(VAR_0, ((void*)0));
 FUNC_5(VAR_1);
}
