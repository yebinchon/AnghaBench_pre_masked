
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* scratch; } ;
typedef TYPE_1__ rest_server_context_t ;
struct TYPE_9__ {int content_len; scalar_t__ user_ctx; } ;
typedef TYPE_2__ httpd_req_t ;
typedef int esp_err_t ;
typedef int cJSON ;
struct TYPE_10__ {int valueint; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 TYPE_7__* FUNC_2 (int *,char*) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (TYPE_2__*,char*,int) ;
 int FUNC_5 (TYPE_2__*,int ,char*) ;
 int FUNC_6 (TYPE_2__*,char*) ;

__attribute__((used)) static esp_err_t FUNC_7(httpd_req_t *VAR_5)
{
    int VAR_6 = VAR_5->content_len;
    int VAR_7 = 0;
    char *VAR_8 = ((rest_server_context_t *)(VAR_5->user_ctx))->scratch;
    int VAR_9 = 0;
    if (VAR_6 >= VAR_4) {

        FUNC_5(VAR_5, VAR_2, "content too long");
        return VAR_0;
    }
    while (VAR_7 < VAR_6) {
        VAR_9 = FUNC_4(VAR_5, VAR_8 + VAR_7, VAR_6);
        if (VAR_9 <= 0) {

            FUNC_5(VAR_5, VAR_2, "Failed to post control value");
            return VAR_0;
        }
        VAR_7 += VAR_9;
    }
    VAR_8[VAR_6] = '\0';

    cJSON *VAR_10 = FUNC_3(VAR_8);
    int VAR_11 = FUNC_2(VAR_10, "red")->valueint;
    int VAR_12 = FUNC_2(VAR_10, "green")->valueint;
    int VAR_13 = FUNC_2(VAR_10, "blue")->valueint;
    FUNC_0(VAR_3, "Light control: red = %d, green = %d, blue = %d", VAR_11, VAR_12, VAR_13);
    FUNC_1(VAR_10);
    FUNC_6(VAR_5, "Post control value successfully");
    return VAR_1;
}
