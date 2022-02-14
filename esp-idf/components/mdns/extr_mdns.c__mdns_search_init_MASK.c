
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_6__ {int started_at; int * next; scalar_t__ sent_at; int state; int * result; int max_results; scalar_t__ num_results; int timeout; int type; void* proto; void* service; void* instance; int done_semaphore; } ;
typedef TYPE_1__ mdns_search_once_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int VAR_3 ;
 void* FUNC_5 (char const*,scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static mdns_search_once_t * FUNC_8(const char * VAR_4, const char * VAR_5, const char * VAR_6, uint16_t VAR_7, uint32_t VAR_8, uint8_t VAR_9)
{
    mdns_search_once_t * VAR_10 = (mdns_search_once_t *)FUNC_3(sizeof(mdns_search_once_t));
    if (!VAR_10) {
        VAR_0;
        return ((void*)0);
    }
    FUNC_4(VAR_10, 0, sizeof(mdns_search_once_t));

    VAR_10->done_semaphore = FUNC_6();
    if (!VAR_10->done_semaphore) {
        FUNC_2(VAR_10);
        return ((void*)0);
    }

    if (!FUNC_1(VAR_4)) {
        VAR_10->instance = FUNC_5(VAR_4, VAR_1-1);
        if (!VAR_10->instance) {
            FUNC_0(VAR_10);
            return ((void*)0);
        }
    }

    if (!FUNC_1(VAR_5)) {
        VAR_10->service = FUNC_5(VAR_5, VAR_1-1);
        if (!VAR_10->service) {
            FUNC_0(VAR_10);
            return ((void*)0);
        }
    }

    if (!FUNC_1(VAR_6)) {
        VAR_10->proto = FUNC_5(VAR_6, VAR_1-1);
        if (!VAR_10->proto) {
            FUNC_0(VAR_10);
            return ((void*)0);
        }
    }

    VAR_10->type = VAR_7;
    VAR_10->timeout = VAR_8;
    VAR_10->num_results = 0;
    VAR_10->max_results = VAR_9;
    VAR_10->result = ((void*)0);
    VAR_10->state = VAR_2;
    VAR_10->sent_at = 0;
    VAR_10->started_at = FUNC_7() * VAR_3;
    VAR_10->next = ((void*)0);

    return VAR_10;
}
