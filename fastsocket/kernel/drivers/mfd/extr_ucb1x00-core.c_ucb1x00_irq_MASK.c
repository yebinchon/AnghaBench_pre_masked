
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucb1x00_irq {int devid; int (* fn ) (unsigned int,int ) ;} ;
struct ucb1x00 {struct ucb1x00_irq* irq_handler; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (struct ucb1x00*) ;
 int FUNC_2 (struct ucb1x00*) ;
 unsigned int FUNC_3 (struct ucb1x00*,int ) ;
 int FUNC_4 (struct ucb1x00*,int ,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_3, void *VAR_4)
{
 struct ucb1x00 *VAR_5 = VAR_4;
 struct ucb1x00_irq *VAR_6;
 unsigned int VAR_7, VAR_8;

 FUNC_2(VAR_5);
 VAR_7 = FUNC_3(VAR_5, VAR_2);
 FUNC_4(VAR_5, VAR_1, VAR_7);
 FUNC_4(VAR_5, VAR_1, 0);

 for (VAR_8 = 0, VAR_6 = VAR_5->irq_handler; VAR_8 < 16 && VAR_7; VAR_8++, VAR_7 >>= 1, VAR_6++)
  if (VAR_7 & 1 && VAR_6->fn)
   VAR_6->fn(VAR_8, VAR_6->devid);
 FUNC_1(VAR_5);

 return VAR_0;
}
