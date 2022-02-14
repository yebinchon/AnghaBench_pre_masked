
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct file_server_data {int base_path; } ;
struct TYPE_6__ {char* uri; struct file_server_data* user_ctx; int handler; int method; } ;
typedef TYPE_1__ httpd_uri_t ;
typedef int * httpd_handle_t ;
struct TYPE_7__ {int uri_match_fn; } ;
typedef TYPE_2__ httpd_config_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_4 ;
 TYPE_2__ FUNC_2 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct file_server_data* FUNC_3 (int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int **,TYPE_2__*) ;
 int VAR_10 ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 int FUNC_7 (int ,char const*,int) ;
 int VAR_11 ;

esp_err_t FUNC_8(const char *VAR_12)
{
    static struct file_server_data *VAR_13 = ((void*)0);


    if (!VAR_12 || FUNC_6(VAR_12, "/spiffs") != 0) {
        FUNC_0(VAR_7, "File server presently supports only '/spiffs' as base path");
        return VAR_0;
    }

    if (VAR_13) {
        FUNC_0(VAR_7, "File server already started");
        return VAR_1;
    }


    VAR_13 = FUNC_3(1, sizeof(struct file_server_data));
    if (!VAR_13) {
        FUNC_0(VAR_7, "Failed to allocate memory for server data");
        return VAR_2;
    }
    FUNC_7(VAR_13->base_path, VAR_12,
            sizeof(VAR_13->base_path));

    httpd_handle_t VAR_14 = ((void*)0);
    httpd_config_t VAR_15 = FUNC_2();




    VAR_15.uri_match_fn = VAR_10;

    FUNC_1(VAR_7, "Starting HTTP Server");
    if (FUNC_5(&VAR_14, &VAR_15) != VAR_4) {
        FUNC_0(VAR_7, "Failed to start file server!");
        return VAR_3;
    }


    httpd_uri_t VAR_16 = {
        .uri = "/*",
        .method = VAR_5,
        .handler = VAR_9,
        .user_ctx = VAR_13
    };
    FUNC_4(VAR_14, &VAR_16);


    httpd_uri_t VAR_17 = {
        .uri = "/upload/*",
        .method = VAR_6,
        .handler = VAR_11,
        .user_ctx = VAR_13
    };
    FUNC_4(VAR_14, &VAR_17);


    httpd_uri_t VAR_18 = {
        .uri = "/delete/*",
        .method = VAR_6,
        .handler = VAR_8,
        .user_ctx = VAR_13
    };
    FUNC_4(VAR_14, &VAR_18);

    return VAR_4;
}
