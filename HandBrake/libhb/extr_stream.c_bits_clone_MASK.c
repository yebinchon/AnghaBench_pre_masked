
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; int pos; } ;
typedef TYPE_1__ bitbuf_t ;



__attribute__((used)) static inline void FUNC_0( bitbuf_t *VAR_0, bitbuf_t *VAR_1, int VAR_2 )
{
    *VAR_0 = *VAR_1;
    VAR_0->size = (VAR_0->pos >> 3) + VAR_2;
}
