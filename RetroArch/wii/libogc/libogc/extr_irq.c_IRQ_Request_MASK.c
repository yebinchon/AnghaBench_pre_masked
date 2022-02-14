
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
typedef int raw_irq_handler_t ;
struct TYPE_2__ {void* pCtx; int pHndl; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 TYPE_1__* VAR_0 ;

raw_irq_handler_t FUNC_2(u32 VAR_1,raw_irq_handler_t VAR_2,void *VAR_3)
{
 u32 VAR_4;

 FUNC_0(VAR_4);
 raw_irq_handler_t VAR_5 = VAR_0[VAR_1].pHndl;
 VAR_0[VAR_1].pHndl = VAR_2;
 VAR_0[VAR_1].pCtx = VAR_3;
 FUNC_1(VAR_4);
 return VAR_5;
}
