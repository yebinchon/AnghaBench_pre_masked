
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count; } ;
typedef int FDFSGroupInfo ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_0(FDFSGroupInfo **VAR_2, FDFSGroupInfo *VAR_3)
{
 FDFSGroupInfo **VAR_4;
 FDFSGroupInfo **VAR_5;
 FDFSGroupInfo **VAR_6;

    VAR_5 = VAR_2 + VAR_1.count;
    for (VAR_4=VAR_2; VAR_4<VAR_5; VAR_4++)
    {
        if (*VAR_4 == VAR_3)
        {
            break;
        }
    }

    if (VAR_4 == VAR_5)
    {
        return VAR_0;
    }

    for (VAR_6=VAR_4 + 1; VAR_6<VAR_5; VAR_6++)
    {
        *(VAR_6 - 1) = *VAR_6;
    }

    return 0;
}
