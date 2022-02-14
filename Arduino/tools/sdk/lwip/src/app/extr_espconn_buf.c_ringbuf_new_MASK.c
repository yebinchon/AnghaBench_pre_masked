
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8 ;
struct ringbuf_t {int dummy; } ;
typedef TYPE_1__* ringbuf_t ;
struct TYPE_5__ {size_t size; int * buf; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;

ringbuf_t FUNC_3(size_t VAR_0)
{
 ringbuf_t VAR_1 = (ringbuf_t)FUNC_1(sizeof(struct ringbuf_t));
 if (VAR_1){
  VAR_1->size = VAR_0 + 1;
  VAR_1->buf = (uint8*)FUNC_1(VAR_1->size);
  if (VAR_1->buf){
   FUNC_2(VAR_1);
  }else{
   FUNC_0(VAR_1);
   return ((void*)0);
  }
 }
 return VAR_1;
}
