
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_3__ {int head; scalar_t__ buffer; scalar_t__ fillCount; scalar_t__ length; } ;
typedef TYPE_1__ TPCircularBuffer ;



__attribute__((used)) static __inline__ __attribute__((always_inline)) void* FUNC_0(TPCircularBuffer *VAR_0, int32_t* VAR_1) {
    *VAR_1 = (VAR_0->length - VAR_0->fillCount);

    return (void*)((char*)VAR_0->buffer + VAR_0->head);
}
