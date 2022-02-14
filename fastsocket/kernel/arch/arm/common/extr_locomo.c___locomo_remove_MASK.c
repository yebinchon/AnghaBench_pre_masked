
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct locomo {scalar_t__ irq; int base; int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct locomo*) ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__,int *) ;
 int FUNC_4 (scalar_t__,int *) ;

__attribute__((used)) static void FUNC_5(struct locomo *VAR_2)
{
 FUNC_0(VAR_2->dev, ((void*)0), VAR_1);

 if (VAR_2->irq != VAR_0) {
  FUNC_3(VAR_2->irq, ((void*)0));
  FUNC_4(VAR_2->irq, ((void*)0));
 }

 FUNC_1(VAR_2->base);
 FUNC_2(VAR_2);
}
