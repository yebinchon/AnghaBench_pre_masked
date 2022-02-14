
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int count; TYPE_1__* ips; } ;
struct TYPE_4__ {char const* address; int type; } ;
typedef TYPE_2__ FDFSMultiIP ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char const*) ;

const char *FUNC_1(const FDFSMultiIP *VAR_2,
        const char *VAR_3)
{
    int VAR_4;
    int VAR_5;
    if (VAR_2->count == 1)
    {
        return VAR_2->ips[0].address;
    }

    if (VAR_2->count <= 0)
    {
        return "";
    }

    VAR_4 = FUNC_0(VAR_3);
    VAR_5 = VAR_2->ips[VAR_1].type == VAR_4 ?
        VAR_1 : VAR_0;
    return VAR_2->ips[VAR_5].address;
}
