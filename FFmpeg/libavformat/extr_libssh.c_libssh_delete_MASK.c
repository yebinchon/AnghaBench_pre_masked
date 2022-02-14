
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* sftp_attributes ;
typedef int path ;
struct TYPE_10__ {int filename; TYPE_3__* priv_data; } ;
typedef TYPE_2__ URLContext ;
struct TYPE_11__ {int sftp; } ;
struct TYPE_9__ {scalar_t__ type; } ;
typedef TYPE_3__ LIBSSHContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,char*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 TYPE_1__* FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (int ,char*) ;

__attribute__((used)) static int FUNC_8(URLContext *VAR_2)
{
    int VAR_3;
    LIBSSHContext *VAR_4 = VAR_2->priv_data;
    sftp_attributes VAR_5 = ((void*)0);
    char VAR_6[VAR_0];

    if ((VAR_3 = FUNC_2(VAR_2, VAR_2->filename, VAR_6, sizeof(VAR_6))) < 0)
        goto cleanup;

    if (!(VAR_5 = FUNC_6(VAR_4->sftp, VAR_6))) {
        VAR_3 = FUNC_0(FUNC_4(VAR_4->sftp));
        goto cleanup;
    }

    if (VAR_5->type == VAR_1) {
        if (FUNC_5(VAR_4->sftp, VAR_6) < 0) {
            VAR_3 = FUNC_0(FUNC_4(VAR_4->sftp));
            goto cleanup;
        }
    } else {
        if (FUNC_7(VAR_4->sftp, VAR_6) < 0) {
            VAR_3 = FUNC_0(FUNC_4(VAR_4->sftp));
            goto cleanup;
        }
    }

    VAR_3 = 0;

cleanup:
    if (VAR_5)
        FUNC_3(VAR_5);
    FUNC_1(VAR_2);
    return VAR_3;
}
