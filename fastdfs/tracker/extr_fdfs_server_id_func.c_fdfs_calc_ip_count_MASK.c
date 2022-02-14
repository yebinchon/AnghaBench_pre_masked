
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int count; TYPE_2__* ids; } ;
struct TYPE_4__ {scalar_t__ count; } ;
struct TYPE_5__ {TYPE_1__ ip_addrs; } ;
typedef TYPE_2__ FDFSStorageIdInfo ;


 TYPE_3__ VAR_0 ;

__attribute__((used)) static int FUNC_0()
{
 FDFSStorageIdInfo *VAR_1;
 FDFSStorageIdInfo *VAR_2;
    int VAR_3;

    VAR_3 = 0;
    VAR_2 = VAR_0.ids + VAR_0.count;
    for (VAR_1=VAR_0.ids; VAR_1<VAR_2; VAR_1++)
    {
        VAR_3 += VAR_1->ip_addrs.count;
    }

    return VAR_3;
}
