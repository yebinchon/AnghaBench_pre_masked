
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int irqreturn_t ;
struct TYPE_2__ {int* irqs; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_1__ FUNC_3 (int ) ;
 int * VAR_1 ;
 int* VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_3, void *VAR_4)
{



        *VAR_2 |= (1 << VAR_3);



        FUNC_0(1);

 FUNC_5(FUNC_6(FUNC_1()));

        if (!(FUNC_3(0).irqs[VAR_3] % 20))
                FUNC_4(VAR_1[(FUNC_3(0).irqs[VAR_3] % 160) / 20]);
 return VAR_0;
}
