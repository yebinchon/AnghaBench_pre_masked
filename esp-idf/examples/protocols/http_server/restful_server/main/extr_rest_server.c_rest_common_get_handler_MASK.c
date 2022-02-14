
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_8__ {char* scratch; int base_path; } ;
typedef TYPE_1__ rest_server_context_t ;
struct TYPE_9__ {char* uri; scalar_t__ user_ctx; } ;
typedef TYPE_2__ httpd_req_t ;
typedef int filepath ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,char*,int) ;
 int FUNC_4 (TYPE_2__*,int ,char*) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (int,char*,int ) ;
 int FUNC_8 (TYPE_2__*,char*) ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 (char*,int ,int) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static esp_err_t FUNC_12(httpd_req_t *VAR_7)
{
    char VAR_8[VAR_2];

    rest_server_context_t *VAR_9 = (rest_server_context_t *)VAR_7->user_ctx;
    FUNC_10(VAR_8, VAR_9->base_path, sizeof(VAR_8));
    if (VAR_7->uri[FUNC_11(VAR_7->uri) - 1] == '/') {
        FUNC_9(VAR_8, "/index.html", sizeof(VAR_8));
    } else {
        FUNC_9(VAR_8, VAR_7->uri, sizeof(VAR_8));
    }
    int VAR_10 = FUNC_6(VAR_8, VAR_4, 0);
    if (VAR_10 == -1) {
        FUNC_0(VAR_5, "Failed to open file : %s", VAR_8);

        FUNC_4(VAR_7, VAR_3, "Failed to read existing file");
        return VAR_0;
    }

    FUNC_8(VAR_7, VAR_8);

    char *VAR_11 = VAR_9->scratch;
    ssize_t VAR_12;
    do {

        VAR_12 = FUNC_7(VAR_10, VAR_11, VAR_6);
        if (VAR_12 == -1) {
            FUNC_0(VAR_5, "Failed to read file : %s", VAR_8);
        } else if (VAR_12 > 0) {

            if (FUNC_3(VAR_7, VAR_11, VAR_12) != VAR_1) {
                FUNC_2(VAR_10);
                FUNC_0(VAR_5, "File sending failed!");

                FUNC_5(VAR_7, ((void*)0));

                FUNC_4(VAR_7, VAR_3, "Failed to send file");
                return VAR_0;
            }
        }
    } while (VAR_12 > 0);

    FUNC_2(VAR_10);
    FUNC_1(VAR_5, "File sending complete");

    FUNC_3(VAR_7, ((void*)0), 0);
    return VAR_1;
}
