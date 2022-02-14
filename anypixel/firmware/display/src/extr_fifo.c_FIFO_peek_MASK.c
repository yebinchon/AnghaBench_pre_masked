
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {size_t tail; int * buffer; } ;
typedef TYPE_1__ FIFO_Data_TypeDef ;



uint8_t FUNC_0(FIFO_Data_TypeDef *VAR_0) {
 return VAR_0->buffer[VAR_0->tail];
}
