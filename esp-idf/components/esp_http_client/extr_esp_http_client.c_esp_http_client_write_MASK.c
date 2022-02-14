
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* esp_http_client_handle_t ;
struct TYPE_3__ {scalar_t__ state; scalar_t__ is_async; int timeout_ms; int transport; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char const*,int,int ) ;

int FUNC_1(esp_http_client_handle_t VAR_2, const char *VAR_3, int VAR_4)
{
    if (VAR_2->state < VAR_1) {
        return VAR_0;
    }

    int VAR_5 = 0, VAR_6 = 0;
    while (VAR_4 > 0) {
        VAR_5 = FUNC_0(VAR_2->transport, VAR_3 + VAR_6, VAR_4, VAR_2->timeout_ms);


        if (VAR_2->is_async || VAR_5 <= 0) {
            return VAR_5;
        }
        VAR_6 += VAR_5;
        VAR_4 -= VAR_5;
    }
    return VAR_6;
}
