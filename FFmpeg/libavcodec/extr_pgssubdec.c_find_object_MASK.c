
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int id; } ;
struct TYPE_5__ {int count; TYPE_2__* object; } ;
typedef TYPE_1__ PGSSubObjects ;
typedef TYPE_2__ PGSSubObject ;



__attribute__((used)) static PGSSubObject * FUNC_0(int VAR_0, PGSSubObjects *VAR_1)
{
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_1->count; VAR_2++) {
        if (VAR_1->object[VAR_2].id == VAR_0)
            return &VAR_1->object[VAR_2];
    }
    return ((void*)0);
}
