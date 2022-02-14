
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int tail; int length; int fillCount; } ;
typedef TYPE_1__ TPCircularBuffer ;



__attribute__((used)) static __inline__ __attribute__((always_inline)) void FUNC_0(TPCircularBuffer *VAR_0, int32_t VAR_1) {
    VAR_0->tail = (VAR_0->tail + VAR_1) % VAR_0->length;
    VAR_0->fillCount -= VAR_1;
}
