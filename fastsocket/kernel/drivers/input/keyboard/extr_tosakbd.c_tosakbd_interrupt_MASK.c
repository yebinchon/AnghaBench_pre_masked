
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tosakbd {int timer; } ;
struct platform_device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 struct tosakbd* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct platform_device *VAR_3 = VAR_2;
 struct tosakbd *VAR_4 = FUNC_0(VAR_3);

 if (!FUNC_1(&VAR_4->timer)) {

  FUNC_3(20);
  FUNC_2(VAR_3);
 }

 return VAR_0;
}
