
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int path_src ;
typedef int path_dst ;
typedef int hostname_src ;
typedef int hostname_dst ;
typedef int credentials_src ;
typedef int credentials_dst ;
struct TYPE_7__ {int filename; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_8__ {int sftp; } ;
typedef TYPE_2__ LIBSSHContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,char*,int,char*,int,int*,char*,int,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,char*,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,char*,char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;

__attribute__((used)) static int FUNC_7(URLContext *VAR_2, URLContext *VAR_3)
{
    int VAR_4;
    LIBSSHContext *VAR_5 = VAR_2->priv_data;
    char VAR_6[VAR_1], VAR_7[VAR_1];
    char VAR_8[1024], VAR_9[1024];
    char VAR_10[1024], VAR_11[1024];
    int VAR_12 = 22, VAR_13 = 22;

    FUNC_1(((void*)0), 0,
                 VAR_10, sizeof(VAR_10),
                 VAR_8, sizeof(VAR_8),
                 &VAR_12,
                 VAR_6, sizeof(VAR_6),
                 VAR_2->filename);

    FUNC_1(((void*)0), 0,
                 VAR_11, sizeof(VAR_11),
                 VAR_9, sizeof(VAR_9),
                 &VAR_13,
                 VAR_7, sizeof(VAR_7),
                 VAR_3->filename);

    if (FUNC_6(VAR_10, VAR_11) ||
            FUNC_6(VAR_8, VAR_9) ||
            VAR_12 != VAR_13) {
        return FUNC_0(VAR_0);
    }

    if ((VAR_4 = FUNC_3(VAR_2, VAR_2->filename, VAR_6, sizeof(VAR_6))) < 0)
        goto cleanup;

    if (FUNC_5(VAR_5->sftp, VAR_6, VAR_7) < 0) {
        VAR_4 = FUNC_0(FUNC_4(VAR_5->sftp));
        goto cleanup;
    }

    VAR_4 = 0;

cleanup:
    FUNC_2(VAR_2);
    return VAR_4;
}
