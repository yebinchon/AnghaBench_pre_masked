
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int size; int * data; } ;
typedef TYPE_1__ sdio_ringbuf_t ;
typedef int sdio_ringbuf_pointer_t ;



__attribute__((used)) static inline uint8_t* FUNC_0(sdio_ringbuf_t *VAR_0, sdio_ringbuf_pointer_t VAR_1, uint32_t VAR_2)
{
    uint8_t *VAR_3 = (uint8_t*)*(uint32_t*)(((uint8_t*)VAR_0)+VAR_1);
    uint8_t *VAR_4=VAR_3+VAR_2;
    if (VAR_4 >= VAR_0->data + VAR_0->size) VAR_4 -= VAR_0->size;
    return VAR_4;
}
