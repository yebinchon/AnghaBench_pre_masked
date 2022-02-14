
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct stat {int st_size; } ;
struct file_server_data {char* scratch; int base_path; } ;
struct TYPE_10__ {scalar_t__ user_ctx; int uri; } ;
typedef TYPE_1__ httpd_req_t ;
typedef int filepath ;
typedef scalar_t__ esp_err_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 size_t FUNC_5 (char*,int,int ,int *) ;
 char* FUNC_6 (char*,int ,int ,int) ;
 scalar_t__ FUNC_7 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_8 (TYPE_1__*,char*,size_t) ;
 int FUNC_9 (TYPE_1__*,int ,char*) ;
 int FUNC_10 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,char const*) ;
 int FUNC_13 (char*,struct stat*) ;
 scalar_t__ FUNC_14 (char const*,char*) ;
 int FUNC_15 (char const*) ;

__attribute__((used)) static esp_err_t FUNC_16(httpd_req_t *VAR_7)
{
    char VAR_8[VAR_2];
    FILE *VAR_9 = ((void*)0);
    struct stat VAR_10;

    const char *VAR_11 = FUNC_6(VAR_8, ((struct file_server_data *)VAR_7->user_ctx)->base_path,
                                             VAR_7->uri, sizeof(VAR_8));
    if (!VAR_11) {
        FUNC_0(VAR_6, "Filename is too long");

        FUNC_9(VAR_7, VAR_4, "Filename too long");
        return VAR_0;
    }


    if (VAR_11[FUNC_15(VAR_11) - 1] == '/') {
        return FUNC_7(VAR_7, VAR_8);
    }

    if (FUNC_13(VAR_8, &VAR_10) == -1) {


        if (FUNC_14(VAR_11, "/index.html") == 0) {
            return FUNC_11(VAR_7);
        } else if (FUNC_14(VAR_11, "/favicon.ico") == 0) {
            return FUNC_2(VAR_7);
        }
        FUNC_0(VAR_6, "Failed to stat file : %s", VAR_8);

        FUNC_9(VAR_7, VAR_3, "File does not exist");
        return VAR_0;
    }

    VAR_9 = FUNC_4(VAR_8, "r");
    if (!VAR_9) {
        FUNC_0(VAR_6, "Failed to read existing file : %s", VAR_8);

        FUNC_9(VAR_7, VAR_4, "Failed to read existing file");
        return VAR_0;
    }

    FUNC_1(VAR_6, "Sending file : %s (%ld bytes)...", VAR_11, VAR_10.st_size);
    FUNC_12(VAR_7, VAR_11);


    char *VAR_12 = ((struct file_server_data *)VAR_7->user_ctx)->scratch;
    size_t VAR_13;
    do {

        VAR_13 = FUNC_5(VAR_12, 1, VAR_5, VAR_9);


        if (FUNC_8(VAR_7, VAR_12, VAR_13) != VAR_1) {
            FUNC_3(VAR_9);
            FUNC_0(VAR_6, "File sending failed!");

            FUNC_10(VAR_7, ((void*)0));

            FUNC_9(VAR_7, VAR_4, "Failed to send file");
            return VAR_0;
        }


    } while (VAR_13 != 0);


    FUNC_3(VAR_9);
    FUNC_1(VAR_6, "File sending complete");


    FUNC_8(VAR_7, ((void*)0), 0);
    return VAR_1;
}
