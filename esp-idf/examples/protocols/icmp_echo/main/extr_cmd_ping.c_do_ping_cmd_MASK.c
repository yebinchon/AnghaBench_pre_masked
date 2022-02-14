
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int target_addr ;
struct in6_addr {int dummy; } ;
struct sockaddr_in6 {struct in6_addr sin6_addr; } ;
struct in_addr {int dummy; } ;
struct sockaddr_in {struct in_addr sin_addr; } ;
struct addrinfo {scalar_t__ ai_family; scalar_t__ ai_addr; } ;
typedef struct addrinfo ip_addr_t ;
typedef int hint ;
typedef int esp_ping_handle_t ;
struct TYPE_19__ {struct addrinfo target_addr; void* tos; void* count; void* data_size; void* interval_ms; void* timeout_ms; } ;
typedef TYPE_7__ esp_ping_config_t ;
struct TYPE_20__ {int * cb_args; int on_ping_end; int on_ping_timeout; int on_ping_success; } ;
typedef TYPE_8__ esp_ping_callbacks_t ;
struct TYPE_21__ {TYPE_6__* host; TYPE_5__* tos; TYPE_4__* count; TYPE_3__* data_size; TYPE_2__* interval; TYPE_1__* timeout; int end; } ;
struct TYPE_18__ {char** sval; } ;
struct TYPE_17__ {scalar_t__ count; scalar_t__* ival; } ;
struct TYPE_16__ {scalar_t__ count; scalar_t__* ival; } ;
struct TYPE_15__ {scalar_t__ count; scalar_t__* ival; } ;
struct TYPE_14__ {scalar_t__ count; int* dval; } ;
struct TYPE_13__ {scalar_t__ count; int* dval; } ;


 scalar_t__ VAR_0 ;
 TYPE_7__ FUNC_0 () ;
 int FUNC_1 (int,char**,void**) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_7__*,TYPE_8__*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct addrinfo*) ;
 scalar_t__ FUNC_6 (char*,int *,struct addrinfo*,struct addrinfo**) ;
 int FUNC_7 (int ,struct in6_addr*) ;
 int FUNC_8 (int ,struct in_addr*) ;
 int FUNC_9 (struct addrinfo*) ;
 int FUNC_10 (struct addrinfo*) ;
 int FUNC_11 (struct addrinfo*,int ,int) ;
 TYPE_9__ VAR_4 ;
 int FUNC_12 (char*,char*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_13(int VAR_6, char **VAR_7)
{
    esp_ping_config_t VAR_8 = FUNC_0();

    int VAR_9 = FUNC_1(VAR_6, VAR_7, (void **)&VAR_4);
    if (VAR_9 != 0) {
        FUNC_2(VAR_5, VAR_4.end, VAR_7[0]);
        return 1;
    }

    if (VAR_4.timeout->count > 0) {
        VAR_8.timeout_ms = (uint32_t)(VAR_4.timeout->dval[0] * 1000);
    }

    if (VAR_4.interval->count > 0) {
        VAR_8.interval_ms = (uint32_t)(VAR_4.interval->dval[0] * 1000);
    }

    if (VAR_4.data_size->count > 0) {
        VAR_8.data_size = (uint32_t)(VAR_4.data_size->ival[0]);
    }

    if (VAR_4.count->count > 0) {
        VAR_8.count = (uint32_t)(VAR_4.count->ival[0]);
    }

    if (VAR_4.tos->count > 0) {
        VAR_8.tos = (uint32_t)(VAR_4.tos->ival[0]);
    }


    ip_addr_t VAR_10;
    struct addrinfo VAR_11;
    struct addrinfo *VAR_12 = ((void*)0);
    FUNC_11(&VAR_11, 0, sizeof(VAR_11));
    FUNC_11(&VAR_10, 0, sizeof(VAR_10));

    if (FUNC_6(VAR_4.host->sval[0], ((void*)0), &VAR_11, &VAR_12) != 0) {
        FUNC_12("ping: unknown host %s\n", VAR_4.host->sval[0]);
        return 1;
    }
    if (VAR_12->ai_family == VAR_0) {
        struct in_addr VAR_13 = ((struct sockaddr_in *) (VAR_12->ai_addr))->sin_addr;
        FUNC_8(FUNC_9(&VAR_10), &VAR_13);
    } else {
        struct in6_addr VAR_14 = ((struct sockaddr_in6 *) (VAR_12->ai_addr))->sin6_addr;
        FUNC_7(FUNC_10(&VAR_10), &VAR_14);
    }
    FUNC_5(VAR_12);
    VAR_8.target_addr = VAR_10;


    esp_ping_callbacks_t VAR_15 = {
        .on_ping_success = VAR_2,
        .on_ping_timeout = VAR_3,
        .on_ping_end = VAR_1,
        .cb_args = ((void*)0)
    };
    esp_ping_handle_t VAR_16;
    FUNC_3(&VAR_8, &VAR_15, &VAR_16);
    FUNC_4(VAR_16);

    return 0;
}
