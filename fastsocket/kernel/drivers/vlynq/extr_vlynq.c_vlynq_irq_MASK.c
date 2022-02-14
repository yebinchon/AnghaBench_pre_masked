
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vlynq_device {scalar_t__ irq_start; TYPE_1__* local; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int int_status; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_1, void *VAR_2)
{
 struct vlynq_device *VAR_3 = VAR_2;
 u32 VAR_4;
 int VAR_5 = 0;

 VAR_4 = FUNC_1(&VAR_3->local->int_status);
 FUNC_4(VAR_4, &VAR_3->local->int_status);

 if (FUNC_3(!VAR_4))
  FUNC_2();

 while (VAR_4) {
  if (VAR_4 & 1)
   FUNC_0(VAR_3->irq_start + VAR_5);
  VAR_4 >>= 1;
  VAR_5++;
 }

 return VAR_0;
}
