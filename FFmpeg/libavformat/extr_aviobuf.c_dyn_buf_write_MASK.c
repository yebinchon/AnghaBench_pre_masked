
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int pos; unsigned int allocated_size; unsigned int size; scalar_t__ buffer; } ;
typedef TYPE_1__ DynBuffer ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,unsigned int) ;
 int FUNC_1 (scalar_t__,int *,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, uint8_t *VAR_2, int VAR_3)
{
    DynBuffer *VAR_4 = VAR_1;
    unsigned VAR_5, VAR_6;


    VAR_5 = VAR_4->pos + VAR_3;
    VAR_6 = VAR_4->allocated_size;
    if (VAR_5 < VAR_4->pos || VAR_5 > VAR_0/2)
        return -1;
    while (VAR_5 > VAR_6) {
        if (!VAR_6)
            VAR_6 = VAR_5;
        else
            VAR_6 += VAR_6 / 2 + 1;
    }

    if (VAR_6 > VAR_4->allocated_size) {
        int VAR_7;
        if ((VAR_7 = FUNC_0(&VAR_4->buffer, VAR_6)) < 0) {
            VAR_4->allocated_size = 0;
            VAR_4->size = 0;
            return VAR_7;
        }
        VAR_4->allocated_size = VAR_6;
    }
    FUNC_1(VAR_4->buffer + VAR_4->pos, VAR_2, VAR_3);
    VAR_4->pos = VAR_5;
    if (VAR_4->pos > VAR_4->size)
        VAR_4->size = VAR_4->pos;
    return VAR_3;
}
