
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

void FUNC_0(HASH_Context* VAR_1)
{
  uint8_t VAR_2 = 0;


  VAR_1->HASH_IMR = VAR_0->IMR;
  VAR_1->HASH_STR = VAR_0->STR;
  VAR_1->HASH_CR = VAR_0->CR;
  for(VAR_2=0; VAR_2<=50;VAR_2++)
  {
     VAR_1->HASH_CSR[VAR_2] = VAR_0->CSR[VAR_2];
  }
}
