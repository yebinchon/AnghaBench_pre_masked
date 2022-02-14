
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int count; TYPE_1__* ips; } ;
struct TYPE_4__ {char* address; } ;
typedef TYPE_2__ FDFSMultiIP ;


 int FUNC_0 (char*,int const,char*,...) ;

int FUNC_1(const FDFSMultiIP *VAR_0,
        const char VAR_1, char *VAR_2, const int VAR_3)
{
    int VAR_4;
    int VAR_5;

    if (VAR_0->count <= 0)
    {
        *VAR_2 = '\0';
        return 0;
    }
    if (VAR_0->count == 1)
    {
        return FUNC_0(VAR_2, VAR_3, "%s",
                VAR_0->ips[0].address);
    }

    VAR_5 = FUNC_0(VAR_2, VAR_3, "%s", VAR_0->ips[0].address);
 for (VAR_4=1; VAR_4<VAR_0->count; VAR_4++)
    {
        VAR_5 += FUNC_0(VAR_2 + VAR_5, VAR_3 - VAR_5, "%c%s",
                VAR_1, VAR_0->ips[VAR_4].address);
    }
    return VAR_5;
}
