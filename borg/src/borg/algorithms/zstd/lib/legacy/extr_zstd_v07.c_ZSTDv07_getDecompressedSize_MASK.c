
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long long frameContentSize; } ;
typedef TYPE_1__ ZSTDv07_frameParams ;


 size_t FUNC_0 (TYPE_1__*,void const*,size_t) ;

unsigned long long FUNC_1(const void* VAR_0, size_t VAR_1)
{
    ZSTDv07_frameParams VAR_2;
    size_t const VAR_3 = FUNC_0(&VAR_2, VAR_0, VAR_1);
    if (VAR_3!=0) return 0;
    return VAR_2.frameContentSize;
}
