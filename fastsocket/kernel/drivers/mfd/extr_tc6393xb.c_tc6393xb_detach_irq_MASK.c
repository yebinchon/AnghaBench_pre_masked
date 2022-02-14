
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc6393xb {unsigned int irq_base; int irq; } ;
struct platform_device {int dummy; } ;


 unsigned int VAR_0 ;
 struct tc6393xb* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (unsigned int,int *) ;
 int FUNC_3 (unsigned int,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_6(struct platform_device *VAR_1)
{
 struct tc6393xb *VAR_2 = FUNC_0(VAR_1);
 unsigned int VAR_3, VAR_4;

 FUNC_1(VAR_2->irq, ((void*)0));
 FUNC_4(VAR_2->irq, ((void*)0));

 VAR_4 = VAR_2->irq_base;

 for (VAR_3 = VAR_4; VAR_3 < VAR_4 + VAR_0; VAR_3++) {
  FUNC_5(VAR_3, 0);
  FUNC_2(VAR_3, ((void*)0));
  FUNC_3(VAR_3, ((void*)0));
 }
}
