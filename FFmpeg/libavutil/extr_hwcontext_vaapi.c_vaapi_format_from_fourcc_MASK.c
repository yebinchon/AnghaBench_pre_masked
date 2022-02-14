
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int fourcc; } ;
typedef TYPE_1__ VAAPIFormatDescriptor ;


 int FUNC_0 (TYPE_1__ const*) ;
 TYPE_1__ const* VAR_0 ;

__attribute__((used)) static const VAAPIFormatDescriptor *
    FUNC_1(unsigned int VAR_1)
{
    int VAR_2;
    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
        if (VAR_0[VAR_2].fourcc == VAR_1)
            return &VAR_0[VAR_2];
    return ((void*)0);
}
