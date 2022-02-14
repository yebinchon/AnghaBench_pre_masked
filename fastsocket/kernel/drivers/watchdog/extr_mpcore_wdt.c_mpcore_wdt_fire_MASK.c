
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpcore_wdt {scalar_t__ base; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,char*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct mpcore_wdt *VAR_6 = VAR_5;


 if (FUNC_1(VAR_6->base + VAR_3)) {
  FUNC_0(VAR_2, VAR_6->dev,
     "Triggered - Reboot ignored.\n");

  FUNC_2(1, VAR_6->base + VAR_3);
  return VAR_0;
 }
 return VAR_1;
}
