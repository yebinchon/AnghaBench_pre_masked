
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ state; scalar_t__ started_at; scalar_t__ timeout; scalar_t__ sent_at; struct TYPE_4__* next; } ;
typedef TYPE_1__ mdns_search_once_t ;
struct TYPE_5__ {TYPE_1__* search_once; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*) ;
 TYPE_2__* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void)
{
    FUNC_0();
    mdns_search_once_t * VAR_8 = VAR_6->search_once;
    uint32_t VAR_9 = FUNC_3() * VAR_7;
    if (!VAR_8) {
        FUNC_1();
        return;
    }
    while (VAR_8) {
        if (VAR_8->state != VAR_4) {
            if (VAR_9 > (VAR_8->started_at + VAR_8->timeout)) {
                VAR_8->state = VAR_4;
                if (FUNC_2(VAR_0, VAR_8) != VAR_2) {
                    VAR_8->state = VAR_5;
                }
            } else if (VAR_8->state == VAR_3 || (VAR_9 - VAR_8->sent_at) > 1000) {
                VAR_8->state = VAR_5;
                VAR_8->sent_at = VAR_9;
                if (FUNC_2(VAR_1, VAR_8) != VAR_2) {
                    VAR_8->sent_at -= 1000;
                }
            }
        }
        VAR_8 = VAR_8->next;
    }
    FUNC_1();
}
