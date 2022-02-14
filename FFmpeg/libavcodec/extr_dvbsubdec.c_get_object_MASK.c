
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* object_list; } ;
struct TYPE_5__ {int id; struct TYPE_5__* next; } ;
typedef TYPE_1__ DVBSubObject ;
typedef TYPE_2__ DVBSubContext ;



__attribute__((used)) static DVBSubObject* FUNC_0(DVBSubContext *VAR_0, int VAR_1)
{
    DVBSubObject *VAR_2 = VAR_0->object_list;

    while (VAR_2 && VAR_2->id != VAR_1) {
        VAR_2 = VAR_2->next;
    }

    return VAR_2;
}
