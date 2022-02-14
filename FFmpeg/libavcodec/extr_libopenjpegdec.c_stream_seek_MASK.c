
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ size; int pos; } ;
typedef scalar_t__ OPJ_OFF_T ;
typedef int OPJ_BOOL ;
typedef TYPE_1__ BufferReader ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static OPJ_BOOL FUNC_0(OPJ_OFF_T VAR_2, void *VAR_3)
{
    BufferReader *VAR_4 = VAR_3;
    if (VAR_2 < 0 || VAR_2 > VAR_4->size) {
        return VAR_0;
    }
    VAR_4->pos = (int)VAR_2;
    return VAR_1;
}
