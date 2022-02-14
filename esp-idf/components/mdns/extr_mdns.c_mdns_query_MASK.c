
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_5__ {int * result; int done_semaphore; } ;
typedef TYPE_1__ mdns_search_once_t ;
typedef int mdns_result_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (char const*,char const*,char const*,int ,int ,size_t) ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (char const*) ;
 int VAR_6 ;
 int FUNC_4 (int ,int ) ;

esp_err_t FUNC_5(const char * VAR_7, const char * VAR_8, const char * VAR_9, uint16_t VAR_10, uint32_t VAR_11, size_t VAR_12, mdns_result_t ** VAR_13)
{
    mdns_search_once_t * VAR_14 = ((void*)0);

    *VAR_13 = ((void*)0);

    if (!VAR_5) {
        return VAR_2;
    }

    if (!VAR_11 || FUNC_3(VAR_8) != FUNC_3(VAR_9)) {
        return VAR_1;
    }

    VAR_14 = FUNC_1(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
    if (!VAR_14) {
        return VAR_3;
    }

    if (FUNC_2(VAR_0, VAR_14)) {
        FUNC_0(VAR_14);
        return VAR_3;
    }
    FUNC_4(VAR_14->done_semaphore, VAR_6);

    *VAR_13 = VAR_14->result;
    FUNC_0(VAR_14);

    return VAR_4;
}
