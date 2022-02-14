
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef void uint8_t ;
typedef TYPE_1__* ringbuf_t ;
struct TYPE_5__ {void const* tail; void const* buf; } ;


 size_t FUNC_0 (int,size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*,void const*,size_t) ;
 size_t FUNC_3 (TYPE_1__*) ;
 void* FUNC_4 (TYPE_1__*) ;

void *FUNC_5(void *VAR_0,ringbuf_t VAR_1, size_t VAR_2)
{
 size_t VAR_3 = FUNC_3(VAR_1);

 if (VAR_2 > VAR_3)
  return ((void*)0);

 const uint8_t *VAR_4 = VAR_0;
 const uint8_t *VAR_5 = FUNC_4(VAR_1);
 size_t VAR_6 = 0;

 while (VAR_6 != VAR_2){
  FUNC_1(VAR_5 > VAR_1->tail);
  size_t VAR_7 = FUNC_0(VAR_5 - VAR_1->tail, VAR_2 - VAR_6);
  FUNC_2((uint8_t*)VAR_4 + VAR_6, VAR_1->tail, VAR_7);
  VAR_1->tail += VAR_7;
  VAR_6 += VAR_7;

  if (VAR_1->tail == VAR_5)
   VAR_1->tail = VAR_1->buf;
 }

 FUNC_1(VAR_2 + FUNC_3(VAR_1) == VAR_3);
 return VAR_1->tail;
}
