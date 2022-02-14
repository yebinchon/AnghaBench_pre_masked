
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t7l66xb {unsigned int irq_base; int irq; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 struct t7l66xb* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (unsigned int,int *) ;
 int FUNC_3 (unsigned int,struct t7l66xb*) ;
 int FUNC_4 (int ,struct t7l66xb*) ;
 int FUNC_5 (unsigned int,int) ;
 int FUNC_6 (unsigned int,int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_8(struct platform_device *VAR_7)
{
 struct t7l66xb *VAR_8 = FUNC_0(VAR_7);
 unsigned int VAR_9, VAR_10;

 VAR_10 = VAR_8->irq_base;

 for (VAR_9 = VAR_10; VAR_9 < VAR_10 + VAR_3; VAR_9++) {
  FUNC_2(VAR_9, &VAR_5);
  FUNC_3(VAR_9, VAR_8);
  FUNC_6(VAR_9, VAR_4);



 }

 FUNC_7(VAR_8->irq, VAR_2);
 FUNC_4(VAR_8->irq, VAR_8);
 FUNC_1(VAR_8->irq, VAR_6);
}
