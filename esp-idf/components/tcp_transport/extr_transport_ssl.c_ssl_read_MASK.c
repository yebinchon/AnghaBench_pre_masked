
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* tls; } ;
typedef TYPE_1__ transport_ssl_t ;
typedef int esp_transport_handle_t ;
struct TYPE_6__ {int error_handle; } ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,unsigned char*,int) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(esp_transport_handle_t VAR_2, char *VAR_3, int VAR_4, int VAR_5)
{
    int VAR_6, VAR_7;
    transport_ssl_t *VAR_8 = FUNC_3(VAR_2);

    if (FUNC_2(VAR_8->tls) <= 0) {
        if ((VAR_6 = FUNC_4(VAR_2, VAR_5)) <= 0) {
            return VAR_6;
        }
    }
    VAR_7 = FUNC_1(VAR_8->tls, (unsigned char *)VAR_3, VAR_4);
    if (VAR_7 < 0) {
        FUNC_0(VAR_0, "esp_tls_conn_read error, errno=%s", FUNC_6(VAR_1));
        FUNC_5(VAR_2, VAR_8->tls->error_handle);
    }
    if (VAR_7 == 0) {
        VAR_7 = -1;
    }
    return VAR_7;
}
