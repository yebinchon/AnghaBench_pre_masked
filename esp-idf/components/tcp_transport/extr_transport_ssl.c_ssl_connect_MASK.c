
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int timeout_ms; } ;
struct TYPE_7__ {int ssl_initialized; TYPE_3__* tls; TYPE_4__ cfg; } ;
typedef TYPE_1__ transport_ssl_t ;
typedef int esp_transport_handle_t ;
struct TYPE_8__ {int error_handle; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (char const*,int ,int,TYPE_4__*,TYPE_3__*) ;
 TYPE_3__* FUNC_3 () ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static int FUNC_7(esp_transport_handle_t VAR_1, const char *VAR_2, int VAR_3, int VAR_4)
{
    transport_ssl_t *VAR_5 = FUNC_4(VAR_1);

    VAR_5->cfg.timeout_ms = VAR_4;
    VAR_5->ssl_initialized = 1;
    VAR_5->tls = FUNC_3();
    if (FUNC_2(VAR_2, FUNC_6(VAR_2), VAR_3, &VAR_5->cfg, VAR_5->tls) < 0) {
        FUNC_0(VAR_0, "Failed to open a new connection");
        FUNC_5(VAR_1, VAR_5->tls->error_handle);
        FUNC_1(VAR_5->tls);
        VAR_5->tls = ((void*)0);
        return -1;
    }

    return 0;
}
