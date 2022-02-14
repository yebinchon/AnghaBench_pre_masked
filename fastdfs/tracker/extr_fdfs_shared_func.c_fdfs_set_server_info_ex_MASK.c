
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int count; scalar_t__ connections; scalar_t__ index; } ;
typedef TYPE_2__ TrackerServerInfo ;
struct TYPE_8__ {int count; TYPE_1__* ips; } ;
struct TYPE_6__ {int address; } ;
typedef TYPE_3__ FDFSMultiIP ;


 int FUNC_0 (scalar_t__,int ,int const) ;

void FUNC_1(TrackerServerInfo *VAR_0,
        const FDFSMultiIP *VAR_1, const int VAR_2)
{
    int VAR_3;

    VAR_0->count = VAR_1->count;
    VAR_0->index = 0;
    for (VAR_3=0; VAR_3<VAR_1->count; VAR_3++)
    {
        FUNC_0(VAR_0->connections + VAR_3,
                VAR_1->ips[VAR_3].address, VAR_2);
    }
}
