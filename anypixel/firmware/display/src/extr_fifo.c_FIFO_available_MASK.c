
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_3__ {scalar_t__ free; scalar_t__ size; } ;
typedef TYPE_1__ FIFO_Data_TypeDef ;



uint16_t FUNC_0(FIFO_Data_TypeDef *VAR_0) {
 return VAR_0->size - VAR_0->free;
}
