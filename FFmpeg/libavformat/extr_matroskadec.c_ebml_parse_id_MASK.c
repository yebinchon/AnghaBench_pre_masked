
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ id; } ;
typedef TYPE_1__ EbmlSyntax ;



__attribute__((used)) static EbmlSyntax *FUNC_0(EbmlSyntax *VAR_0, uint32_t VAR_1)
{
    int VAR_2;



    for (VAR_2 = 0; VAR_0[VAR_2].id; VAR_2++)
        if (VAR_1 == VAR_0[VAR_2].id)
            break;

    return &VAR_0[VAR_2];
}
