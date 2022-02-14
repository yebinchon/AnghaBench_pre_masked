
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int irqreturn_t ;
struct TYPE_2__ {int* irqs; } ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (int ) ;
 int * VAR_1 ;
 int* VAR_2 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 *VAR_2 |= (1 << VAR_3);
 if (!(FUNC_0(0).irqs[VAR_3] % 2000))
  FUNC_1(VAR_1[(FUNC_0(0).irqs[VAR_3] % 16000) / 2000]);
 return VAR_0;
}
