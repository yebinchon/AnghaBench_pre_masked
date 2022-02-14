
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ pos; scalar_t__ size; } ;
typedef TYPE_1__ DynBuffer ;



__attribute__((used)) static int FUNC_0(void *VAR_0, uint8_t *VAR_1, int VAR_2)
{
    DynBuffer *VAR_3 = VAR_0;

    VAR_3->pos += VAR_2;
    if (VAR_3->pos > VAR_3->size)
        VAR_3->size = VAR_3->pos;
    return VAR_2;
}
