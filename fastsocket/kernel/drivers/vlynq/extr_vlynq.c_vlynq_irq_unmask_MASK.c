
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vlynq_device {unsigned int irq_start; TYPE_1__* remote; } ;
struct TYPE_2__ {int * int_device; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 struct vlynq_device* FUNC_2 (unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static void FUNC_5(unsigned int VAR_1)
{
 u32 VAR_2;
 struct vlynq_device *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;

 FUNC_0(!VAR_3);
 VAR_4 = VAR_1 - VAR_3->irq_start;
 VAR_2 = FUNC_3(&VAR_3->remote->int_device[VAR_4 >> 2]);
 VAR_2 |= (VAR_0 | VAR_4) << FUNC_1(VAR_4);
 FUNC_4(VAR_2, &VAR_3->remote->int_device[VAR_4 >> 2]);
}
