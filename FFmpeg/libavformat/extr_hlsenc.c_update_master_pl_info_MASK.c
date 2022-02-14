
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char const* url; TYPE_1__* priv_data; } ;
struct TYPE_4__ {char const* master_pl_name; void* master_m3u8_url; } ;
typedef TYPE_1__ HLSContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 void* FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char**) ;
 void* FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (char const*,char*) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_1)
{
    HLSContext *VAR_2 = VAR_1->priv_data;
    const char *VAR_3;
    char *VAR_4= ((void*)0), *VAR_5 = ((void*)0);
    int VAR_6 = 0;

    VAR_4 = FUNC_5(VAR_1->url);
    VAR_3 = FUNC_3(VAR_4);





    if (VAR_3 && FUNC_6(FUNC_2(VAR_3), "%v")) {
        VAR_5 = FUNC_5(VAR_3);
        VAR_3 = FUNC_3(VAR_5);
    }

    if (VAR_3 && FUNC_7(VAR_3, "."))
        VAR_2->master_m3u8_url = FUNC_1(VAR_3, VAR_2->master_pl_name);
    else
        VAR_2->master_m3u8_url = FUNC_5(VAR_2->master_pl_name);

    if (!VAR_2->master_m3u8_url) {
        VAR_6 = FUNC_0(VAR_0);
        goto fail;
    }

fail:
    FUNC_4(&VAR_4);
    FUNC_4(&VAR_5);

    return VAR_6;
}
