
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int * CSR; int CR; int STR; int IMR; } ;
struct TYPE_4__ {int * HASH_CSR; int HASH_CR; int HASH_STR; int HASH_IMR; } ;
typedef TYPE_1__ HASH_Context ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;

void FUNC_0(HASH_Context* VAR_2)
{
  uint8_t VAR_3 = 0;


  VAR_0->IMR = VAR_2->HASH_IMR;
  VAR_0->STR = VAR_2->HASH_STR;
  VAR_0->CR = VAR_2->HASH_CR;


  VAR_0->CR |= VAR_1;


  for(VAR_3=0; VAR_3<=50;VAR_3++)
  {
     VAR_0->CSR[VAR_3] = VAR_2->HASH_CSR[VAR_3];
  }
}
