
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* object_list; } ;
struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ DVBSubObject ;
typedef TYPE_2__ DVBSubContext ;


 int FUNC_0 (TYPE_1__**) ;

__attribute__((used)) static void FUNC_1(DVBSubContext *VAR_0)
{
    while (VAR_0->object_list) {
        DVBSubObject *VAR_1 = VAR_0->object_list;

        VAR_0->object_list = VAR_1->next;

        FUNC_0(&VAR_1);
    }
}
