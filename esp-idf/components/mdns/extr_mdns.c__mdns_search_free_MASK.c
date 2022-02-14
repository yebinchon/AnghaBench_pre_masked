
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int done_semaphore; struct TYPE_4__* proto; struct TYPE_4__* service; struct TYPE_4__* instance; } ;
typedef TYPE_1__ mdns_search_once_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(mdns_search_once_t * VAR_0)
{
    FUNC_0(VAR_0->instance);
    FUNC_0(VAR_0->service);
    FUNC_0(VAR_0->proto);
    FUNC_1(VAR_0->done_semaphore);
    FUNC_0(VAR_0);
}
