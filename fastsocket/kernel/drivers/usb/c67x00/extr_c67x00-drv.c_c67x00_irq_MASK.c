
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct c67x00_sie {int (* irq ) (struct c67x00_sie*,int,int) ;} ;
struct c67x00_device {TYPE_1__* pdev; struct c67x00_sie* sie; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct c67x00_device*,int) ;
 int FUNC_2 (struct c67x00_device*) ;
 int FUNC_3 (struct c67x00_device*,int) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (struct c67x00_sie*,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_3, void *VAR_4)
{
 struct c67x00_device *VAR_5 = VAR_4;
 struct c67x00_sie *VAR_6;
 u16 VAR_7, VAR_8;
 int VAR_9, VAR_10 = 8;

 VAR_8 = FUNC_2(VAR_5);
 if (!VAR_8)
  return VAR_2;

 while (VAR_8 != 0 && (VAR_10-- >= 0)) {
  FUNC_3(VAR_5, VAR_8);
  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
   VAR_6 = &VAR_5->sie[VAR_9];
   VAR_7 = 0;
   if (VAR_8 & FUNC_0(VAR_9))
    VAR_7 = FUNC_1(VAR_5, VAR_9);
   if (VAR_6->irq)
    VAR_6->irq(VAR_6, VAR_8, VAR_7);
  }
  VAR_8 = FUNC_2(VAR_5);
 }

 if (VAR_8)
  FUNC_4(&VAR_5->pdev->dev, "Not all interrupts handled! "
    "status = 0x%04x\n", VAR_8);

 return VAR_1;
}
