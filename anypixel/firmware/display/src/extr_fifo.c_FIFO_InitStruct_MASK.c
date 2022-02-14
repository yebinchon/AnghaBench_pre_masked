
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint16_t ;
struct TYPE_3__ {scalar_t__ overrun; void* free; void* size; scalar_t__ tail; scalar_t__ head; int * buffer; } ;
typedef TYPE_1__ FIFO_Data_TypeDef ;



bool FUNC_0(FIFO_Data_TypeDef *VAR_0, uint8_t* VAR_1, uint16_t VAR_2) {
 if(VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return 0;
 VAR_0->buffer = VAR_1;
 VAR_0->head = 0;
 VAR_0->tail = 0;
 VAR_0->size = VAR_2;
 VAR_0->free = VAR_2;
 VAR_0->overrun = 0;
 return 1;
}
