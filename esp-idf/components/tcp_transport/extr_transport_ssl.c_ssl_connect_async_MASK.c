
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int timeout_ms; int non_block; } ;
struct TYPE_4__ {scalar_t__ conn_state; int ssl_initialized; int tls; TYPE_3__ cfg; } ;
typedef TYPE_1__ transport_ssl_t ;
typedef int esp_transport_handle_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const*,int ,int,TYPE_3__*,int ) ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(esp_transport_handle_t VAR_2, const char *VAR_3, int VAR_4, int VAR_5)
{
    transport_ssl_t *VAR_6 = FUNC_2(VAR_2);
    if (VAR_6->conn_state == VAR_1) {
        VAR_6->cfg.timeout_ms = VAR_5;
        VAR_6->cfg.non_block = 1;
        VAR_6->ssl_initialized = 1;
        VAR_6->tls = FUNC_1();
        if (!VAR_6->tls) {
            return -1;
        }
        VAR_6->conn_state = VAR_0;
    }
    if (VAR_6->conn_state == VAR_0) {
        return FUNC_0(VAR_3, FUNC_3(VAR_3), VAR_4, &VAR_6->cfg, VAR_6->tls);
    }
    return 0;
}
