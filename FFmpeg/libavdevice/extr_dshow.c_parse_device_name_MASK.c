
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dshow_ctx {char** device_name; } ;
struct TYPE_3__ {char* url; struct dshow_ctx* priv_data; } ;
typedef TYPE_1__ AVFormatContext ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_0)
{
    struct dshow_ctx *VAR_1 = VAR_0->priv_data;
    char **VAR_2 = VAR_1->device_name;
    char *VAR_3 = FUNC_1(VAR_0->url);
    char *VAR_4 = VAR_3;
    int VAR_5 = 1;
    char *VAR_6;

    while ((VAR_6 = FUNC_3(VAR_4, "="))) {
        char *VAR_7 = FUNC_3(((void*)0), ":");
        VAR_4 = ((void*)0);

        if (!FUNC_2(VAR_6, "video")) {
            VAR_2[0] = VAR_7;
        } else if (!FUNC_2(VAR_6, "audio")) {
            VAR_2[1] = VAR_7;
        } else {
            VAR_2[0] = ((void*)0);
            VAR_2[1] = ((void*)0);
            break;
        }
    }

    if (!VAR_2[0] && !VAR_2[1]) {
        VAR_5 = 0;
    } else {
        if (VAR_2[0])
            VAR_2[0] = FUNC_1(VAR_2[0]);
        if (VAR_2[1])
            VAR_2[1] = FUNC_1(VAR_2[1]);
    }

    FUNC_0(VAR_3);
    return VAR_5;
}
