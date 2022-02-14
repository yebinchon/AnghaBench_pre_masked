
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
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(esp_transport_handle_t VAR_0, char *VAR_1, int VAR_2, int VAR_3)
{
    transport_tcp_t *VAR_4 = FUNC_0(VAR_0);
    int VAR_5 = -1;
    if ((VAR_5 = FUNC_1(VAR_0, VAR_3)) <= 0) {
        return VAR_5;
    }
    int VAR_6 = FUNC_2(VAR_4->sock, VAR_1, VAR_2);
    if (VAR_6 == 0) {
        return -1;
    }
    return VAR_6;
}
