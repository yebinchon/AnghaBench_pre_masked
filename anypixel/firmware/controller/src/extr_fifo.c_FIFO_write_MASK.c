
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {scalar_t__ head; scalar_t__ size; int free; int * buffer; int overrun; } ;
typedef TYPE_1__ FIFO_Data_TypeDef ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int,int *) ;

inline bool FUNC_2(FIFO_Data_TypeDef *VAR_0, uint8_t VAR_1) {
    uint16_t VAR_2;
 if(VAR_0->free <= 0) {
  VAR_0->overrun++;
  return 0;
 }

    VAR_0->buffer[VAR_0->head++] = VAR_1;
    if(VAR_0->head >= VAR_0->size)
        VAR_0->head = 0;

    do {
        VAR_2 = FUNC_0(&VAR_0->free);
        VAR_2 -= 1;
    } while( FUNC_1(VAR_2, &VAR_0->free));


 return 1;
}
