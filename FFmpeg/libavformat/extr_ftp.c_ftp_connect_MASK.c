
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int proto ;
typedef int path ;
typedef int hostname ;
typedef int credentials ;
struct TYPE_6__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_7__ {int filesize; int server_control_port; char* option_user; char* option_password; char* path; void* password; void* user; void* hostname; int anonymous_password; int * features; scalar_t__ position; int listing_method; int state; } ;
typedef TYPE_2__ FTPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (char const*) ;
 char* FUNC_4 (char*,char*,char**) ;
 int FUNC_5 (char*,int,char*,int,char*,int,int*,char*,int,char const*) ;
 char* FUNC_6 (int ,char*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_9(URLContext *VAR_4, const char *VAR_5)
{
    char VAR_6[10], VAR_7[VAR_2], VAR_8[VAR_2], VAR_9[VAR_2];
    const char *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
    char *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
    int VAR_14;
    FTPContext *VAR_15 = VAR_4->priv_data;

    VAR_15->state = VAR_0;
    VAR_15->listing_method = VAR_3;
    VAR_15->filesize = -1;
    VAR_15->position = 0;
    VAR_15->features = ((void*)0);

    FUNC_5(VAR_6, sizeof(VAR_6),
                 VAR_8, sizeof(VAR_8),
                 VAR_9, sizeof(VAR_9),
                 &VAR_15->server_control_port,
                 VAR_7, sizeof(VAR_7),
                 VAR_5);

    VAR_10 = FUNC_4(VAR_8, ":", &VAR_12);
    VAR_11 = FUNC_4(VAR_12, ":", &VAR_12);
    if (!VAR_10) {
        if (!VAR_15->option_user) {
            VAR_10 = "anonymous";
            VAR_11 = FUNC_6(VAR_15->anonymous_password, "nopassword");
        } else {
            VAR_10 = VAR_15->option_user;
        }
    }
    if (!VAR_11) {
        VAR_11 = VAR_15->option_password;
    }
    VAR_15->user = FUNC_3(VAR_10);
    VAR_15->password = FUNC_3(VAR_11);
    VAR_15->hostname = FUNC_3(VAR_9);
    if (!VAR_15->hostname || !VAR_15->user || (VAR_11 && !VAR_15->password)) {
        return FUNC_0(VAR_1);
    }

    if (VAR_15->server_control_port < 0 || VAR_15->server_control_port > 65535)
        VAR_15->server_control_port = 21;

    if ((VAR_14 = FUNC_7(VAR_4)) < 0)
        return VAR_14;

    if ((VAR_14 = FUNC_8(VAR_15)) < 0)
        return VAR_14;

    VAR_13 = FUNC_1(VAR_15->path, VAR_7);
    if (!VAR_13)
        return FUNC_0(VAR_1);
    FUNC_2(VAR_15->path);
    VAR_15->path = VAR_13;

    return 0;
}
