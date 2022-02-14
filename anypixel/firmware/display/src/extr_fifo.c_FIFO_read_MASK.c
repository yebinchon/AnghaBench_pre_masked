
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {int size; int free; scalar_t__ tail; int * buffer; } ;
typedef TYPE_1__ FIFO_Data_TypeDef ;


 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int,int*) ;

bool FUNC_2(FIFO_Data_TypeDef *VAR_0, uint8_t *VAR_1, uint16_t VAR_2) {
 int VAR_3;
 uint16_t VAR_4;

 if( VAR_2 > (VAR_0->size - VAR_0->free) )
  return 0;

 for(VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_1[VAR_3] = VAR_0->buffer[VAR_0->tail++];
  if(VAR_0->tail >= VAR_0->size) {
   VAR_0->tail = 0;
  }
 }
    do {
        VAR_4 = FUNC_0(&VAR_0->free);
        VAR_4 += VAR_2;
    } while( FUNC_1(VAR_4, &VAR_0->free));

 return 1;
}
