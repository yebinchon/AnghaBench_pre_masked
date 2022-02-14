
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {int size; int free; int tail; char const* buffer; } ;
typedef TYPE_1__ FIFO_Data_TypeDef ;


 int FUNC_0 (TYPE_1__*,int*,int) ;

uint16_t FUNC_1(FIFO_Data_TypeDef *VAR_0, uint8_t *VAR_1, uint16_t VAR_2, const char *VAR_3, uint8_t VAR_4) {
 int VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_8 = VAR_0->size - VAR_0->free;
 if(VAR_8 > VAR_2)
  VAR_8 = VAR_2;
 VAR_7 = VAR_0->tail;
 for(VAR_5 = 0; VAR_5 < VAR_8; VAR_5++) {
  for(VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
   if( VAR_0->buffer[VAR_7] == VAR_3[VAR_6] ) {

    FUNC_0( VAR_0, VAR_1, VAR_5+1 );
    return VAR_5+1;
   }
  }
  VAR_7++;
  if(VAR_7 >= VAR_0->size)
   VAR_7 = 0;
 }

 if(VAR_5 == VAR_2) {
  FUNC_0(VAR_0, VAR_1, VAR_5);
  return VAR_5;
 }
 return 0;
}
