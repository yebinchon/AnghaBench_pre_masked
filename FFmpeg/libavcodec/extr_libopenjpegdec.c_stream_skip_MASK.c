
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pos; scalar_t__ size; } ;
typedef scalar_t__ OPJ_SIZE_T ;
typedef scalar_t__ OPJ_OFF_T ;
typedef TYPE_1__ BufferReader ;



__attribute__((used)) static OPJ_OFF_T FUNC_0(OPJ_OFF_T VAR_0, void *VAR_1)
{
    BufferReader *VAR_2 = VAR_1;
    if (VAR_0 < 0) {
        if (VAR_2->pos == 0) {
            return (OPJ_SIZE_T)-1;
        }
        if (VAR_0 + VAR_2->pos < 0) {
            VAR_0 = -VAR_2->pos;
        }
    } else {
        int VAR_3;

        if (VAR_2->pos == VAR_2->size) {
            return (OPJ_SIZE_T)-1;
        }
        VAR_3 = VAR_2->size - VAR_2->pos;
        if (VAR_0 > VAR_3) {
            VAR_0 = VAR_3;
        }
    }
    VAR_2->pos += (int)VAR_0;
    return VAR_0;
}
