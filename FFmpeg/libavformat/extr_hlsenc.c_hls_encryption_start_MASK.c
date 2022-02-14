
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int key ;
struct TYPE_9__ {int (* io_open ) (TYPE_2__*,int **,char*,int ,int *) ;TYPE_1__* priv_data; } ;
struct TYPE_8__ {char* key_info_file; char* key_uri; char* key_file; char* iv_string; int key_string; } ;
typedef TYPE_1__ HLSContext ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int ,char*,...) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int ,int *,int,int ) ;
 int FUNC_4 (TYPE_2__*,int **) ;
 int FUNC_5 (int *,char*,int) ;
 size_t FUNC_6 (char*,char*) ;
 int FUNC_7 (TYPE_2__*,int **,char*,int ,int *) ;
 int FUNC_8 (TYPE_2__*,int **,char*,int ,int *) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_5)
{
    HLSContext *VAR_6 = VAR_5->priv_data;
    int VAR_7;
    AVIOContext *VAR_8;
    uint8_t VAR_9[VAR_4];

    if ((VAR_7 = VAR_5->io_open(VAR_5, &VAR_8, VAR_6->key_info_file, VAR_1, ((void*)0))) < 0) {
        FUNC_1(VAR_6, VAR_2,
               "error opening key info file %s\n", VAR_6->key_info_file);
        return VAR_7;
    }

    FUNC_5(VAR_8, VAR_6->key_uri, sizeof(VAR_6->key_uri));
    VAR_6->key_uri[FUNC_6(VAR_6->key_uri, "\r\n")] = '\0';

    FUNC_5(VAR_8, VAR_6->key_file, sizeof(VAR_6->key_file));
    VAR_6->key_file[FUNC_6(VAR_6->key_file, "\r\n")] = '\0';

    FUNC_5(VAR_8, VAR_6->iv_string, sizeof(VAR_6->iv_string));
    VAR_6->iv_string[FUNC_6(VAR_6->iv_string, "\r\n")] = '\0';

    FUNC_4(VAR_5, &VAR_8);

    if (!*VAR_6->key_uri) {
        FUNC_1(VAR_6, VAR_2, "no key URI specified in key info file\n");
        return FUNC_0(VAR_3);
    }

    if (!*VAR_6->key_file) {
        FUNC_1(VAR_6, VAR_2, "no key file specified in key info file\n");
        return FUNC_0(VAR_3);
    }

    if ((VAR_7 = VAR_5->io_open(VAR_5, &VAR_8, VAR_6->key_file, VAR_1, ((void*)0))) < 0) {
        FUNC_1(VAR_6, VAR_2, "error opening key file %s\n", VAR_6->key_file);
        return VAR_7;
    }

    VAR_7 = FUNC_2(VAR_8, VAR_9, sizeof(VAR_9));
    FUNC_4(VAR_5, &VAR_8);
    if (VAR_7 != sizeof(VAR_9)) {
        FUNC_1(VAR_6, VAR_2, "error reading key file %s\n", VAR_6->key_file);
        if (VAR_7 >= 0 || VAR_7 == VAR_0)
            VAR_7 = FUNC_0(VAR_3);
        return VAR_7;
    }
    FUNC_3(VAR_6->key_string, VAR_9, sizeof(VAR_9), 0);

    return 0;
}
