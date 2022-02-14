
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pos; scalar_t__ size; int buffer; } ;
typedef int OPJ_SIZE_T ;
typedef TYPE_1__ BufferReader ;


 int FUNC_0 (void*,int,int) ;

__attribute__((used)) static OPJ_SIZE_T FUNC_1(void *VAR_0, OPJ_SIZE_T VAR_1, void *VAR_2)
{
    BufferReader *VAR_3 = VAR_2;
    int VAR_4;

    if (VAR_3->pos == VAR_3->size) {
        return (OPJ_SIZE_T)-1;
    }
    VAR_4 = VAR_3->size - VAR_3->pos;
    if (VAR_1 > VAR_4) {
        VAR_1 = VAR_4;
    }
    FUNC_0(VAR_0, VAR_3->buffer + VAR_3->pos, VAR_1);
    VAR_3->pos += (int)VAR_1;
    return VAR_1;
}
