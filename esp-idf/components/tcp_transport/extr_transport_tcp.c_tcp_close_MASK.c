
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sock; } ;
typedef TYPE_1__ transport_tcp_t ;
typedef int esp_transport_handle_t ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(esp_transport_handle_t VAR_0)
{
    transport_tcp_t *VAR_1 = FUNC_1(VAR_0);
    int VAR_2 = -1;
    if (VAR_1->sock >= 0) {
        VAR_2 = FUNC_0(VAR_1->sock);
        VAR_1->sock = -1;
    }
    return VAR_2;
}
