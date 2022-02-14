
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int protocomm_req_handler_t ;
struct TYPE_4__ {char* uri; int * user_ctx; int handler; int method; } ;
typedef TYPE_1__ httpd_uri_t ;
typedef int httpd_handle_t ;
typedef int esp_err_t ;
struct TYPE_5__ {scalar_t__ priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_2 (int,scalar_t__) ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 TYPE_2__* VAR_7 ;
 int FUNC_6 (char*,char*,char const*) ;
 scalar_t__ FUNC_7 (char const*) ;

__attribute__((used)) static esp_err_t FUNC_8(const char *VAR_8,
                                       protocomm_req_handler_t VAR_9,
                                       void *VAR_10)
{
    if (VAR_7 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_0(VAR_5, "Adding endpoint : %s", VAR_8);


    char* VAR_11 = FUNC_2(1, FUNC_7(VAR_8) + 2);
    if (!VAR_11) {
        FUNC_1(VAR_5, "Malloc failed for ep uri");
        return VAR_1;
    }


    FUNC_6(VAR_11, "/%s", VAR_8);
    httpd_uri_t VAR_12 = {
        .uri = VAR_11,
        .method = VAR_4,
        .handler = VAR_6,
        .user_ctx = ((void*)0)
    };


    esp_err_t VAR_13;
    httpd_handle_t *VAR_14 = (httpd_handle_t *) VAR_7->priv;
    if ((VAR_13 = FUNC_5(*VAR_14, &VAR_12)) != VAR_3) {
        FUNC_1(VAR_5, "Uri handler register failed: %s", FUNC_3(VAR_13));
        FUNC_4(VAR_11);
        return VAR_2;
    }

    FUNC_4(VAR_11);
    return VAR_3;
}
