
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint16_t ;
struct TYPE_4__ {void* EGR; void* PSC; } ;
typedef TYPE_1__ TIM_TypeDef ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ) ;

void FUNC_3(TIM_TypeDef* VAR_0, uint16_t VAR_1, uint16_t VAR_2)
{

  FUNC_2(FUNC_0(VAR_0));
  FUNC_2(FUNC_1(VAR_2));


  VAR_0->PSC = VAR_1;

  VAR_0->EGR = VAR_2;
}
