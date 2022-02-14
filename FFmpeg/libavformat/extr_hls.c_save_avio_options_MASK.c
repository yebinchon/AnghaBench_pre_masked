
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_4__ {int avio_opts; } ;
typedef TYPE_1__ HLSContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char const* const,int *,int ) ;
 scalar_t__ FUNC_1 (int ,char const* const,int,int **) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_3)
{
    HLSContext *VAR_4 = VAR_3->priv_data;
    static const char * const VAR_5[] = {
        "headers", "http_proxy", "user_agent", "cookies", "referer", "rw_timeout", ((void*)0) };
    const char * const * VAR_6 = VAR_5;
    uint8_t *VAR_7;
    int VAR_8 = 0;

    while (*VAR_6) {
        if (FUNC_1(VAR_3->pb, *VAR_6, VAR_2 | VAR_1, &VAR_7) >= 0) {
            VAR_8 = FUNC_0(&VAR_4->avio_opts, *VAR_6, VAR_7,
                              VAR_0);
            if (VAR_8 < 0)
                return VAR_8;
        }
        VAR_6++;
    }

    return VAR_8;
}
