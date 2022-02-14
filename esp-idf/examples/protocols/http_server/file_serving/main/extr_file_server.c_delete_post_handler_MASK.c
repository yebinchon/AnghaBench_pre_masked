
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct stat {int dummy; } ;
struct file_server_data {int base_path; } ;
struct TYPE_7__ {int uri; scalar_t__ user_ctx; } ;
typedef TYPE_1__ httpd_req_t ;
typedef int filepath ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (int ,char*,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_2 (char*,int ,int,int) ;
 int FUNC_3 (TYPE_1__*,int ,char*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,char*,char*) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (char*,struct stat*) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static esp_err_t FUNC_10(httpd_req_t *VAR_6)
{
    char VAR_7[VAR_2];
    struct stat VAR_8;



    const char *VAR_9 = FUNC_2(VAR_7, ((struct file_server_data *)VAR_6->user_ctx)->base_path,
                                             VAR_6->uri + sizeof("/delete") - 1, sizeof(VAR_7));
    if (!VAR_9) {

        FUNC_3(VAR_6, VAR_4, "Filename too long");
        return VAR_0;
    }


    if (VAR_9[FUNC_8(VAR_9) - 1] == '/') {
        FUNC_0(VAR_5, "Invalid filename : %s", VAR_9);
        FUNC_3(VAR_6, VAR_4, "Invalid filename");
        return VAR_0;
    }

    if (FUNC_7(VAR_7, &VAR_8) == -1) {
        FUNC_0(VAR_5, "File does not exist : %s", VAR_9);

        FUNC_3(VAR_6, VAR_3, "File does not exist");
        return VAR_0;
    }

    FUNC_1(VAR_5, "Deleting file : %s", VAR_9);

    FUNC_9(VAR_7);


    FUNC_6(VAR_6, "303 See Other");
    FUNC_5(VAR_6, "Location", "/");
    FUNC_4(VAR_6, "File deleted successfully");
    return VAR_1;
}
