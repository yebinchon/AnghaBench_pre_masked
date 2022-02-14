
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_2__ {int pos; scalar_t__ size; } ;
typedef TYPE_1__ DynBuffer ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int64_t FUNC_0(void *VAR_2, int64_t VAR_3, int VAR_4)
{
    DynBuffer *VAR_5 = VAR_2;

    if (VAR_4 == VAR_0)
        VAR_3 += VAR_5->pos;
    else if (VAR_4 == VAR_1)
        VAR_3 += VAR_5->size;
    if (VAR_3 < 0 || VAR_3 > 0x7fffffffLL)
        return -1;
    VAR_5->pos = VAR_3;
    return 0;
}
