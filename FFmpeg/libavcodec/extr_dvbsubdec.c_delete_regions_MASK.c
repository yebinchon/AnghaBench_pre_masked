
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* region_list; } ;
struct TYPE_7__ {struct TYPE_7__* pbuf; struct TYPE_7__* next; } ;
typedef TYPE_1__ DVBSubRegion ;
typedef TYPE_2__ DVBSubContext ;


 int FUNC_0 (TYPE_1__**) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(DVBSubContext *VAR_0)
{
    while (VAR_0->region_list) {
        DVBSubRegion *VAR_1 = VAR_0->region_list;

        VAR_0->region_list = VAR_1->next;

        FUNC_1(VAR_0, VAR_1);

        FUNC_0(&VAR_1->pbuf);
        FUNC_0(&VAR_1);
    }
}
