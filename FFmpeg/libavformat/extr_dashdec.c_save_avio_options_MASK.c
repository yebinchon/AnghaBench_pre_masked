
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_5__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_4__ {int avio_opts; } ;
typedef TYPE_1__ DASHContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char const*,char*,int ) ;
 int FUNC_1 (char**) ;
 scalar_t__ FUNC_2 (int ,char const*,int ,char**) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_2)
{
    DASHContext *VAR_3 = VAR_2->priv_data;
    const char *VAR_4[] = {
        "headers", "user_agent", "cookies", "http_proxy", "referer", "rw_timeout", ((void*)0) };
    const char **VAR_5 = VAR_4;
    uint8_t *VAR_6 = ((void*)0);
    int VAR_7 = 0;

    while (*VAR_5) {
        if (FUNC_2(VAR_2->pb, *VAR_5, VAR_1, &VAR_6) >= 0) {
            if (VAR_6[0] != '\0') {
                VAR_7 = FUNC_0(&VAR_3->avio_opts, *VAR_5, VAR_6, VAR_0);
                if (VAR_7 < 0) {
                    FUNC_1(&VAR_6);
                    return VAR_7;
                }
            } else {
                FUNC_1(&VAR_6);
            }
        }
        VAR_5++;
    }

    return VAR_7;
}
