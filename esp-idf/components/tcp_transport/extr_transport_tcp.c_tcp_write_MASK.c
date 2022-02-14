
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sock; } ;
typedef TYPE_1__ transport_tcp_t ;
typedef int esp_transport_handle_t ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char const*,int) ;

__attribute__((used)) static int FUNC_3(esp_transport_handle_t VAR_0, const char *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4;
    transport_tcp_t *VAR_5 = FUNC_0(VAR_0);
    if ((VAR_4 = FUNC_1(VAR_0, VAR_3)) <= 0) {
        return VAR_4;
    }
    return FUNC_2(VAR_5->sock, VAR_1, VAR_2);
}
