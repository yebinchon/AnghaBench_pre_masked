
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int path ;
struct TYPE_7__ {int filename; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_8__ {int session; int sftp; int dir; } ;
typedef TYPE_2__ LIBSSHContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ,char*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,char*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(URLContext *VAR_3)
{
    LIBSSHContext *VAR_4 = VAR_3->priv_data;
    int VAR_5;
    char VAR_6[VAR_2];

    if ((VAR_5 = FUNC_3(VAR_3, VAR_3->filename, VAR_6, sizeof(VAR_6))) < 0)
        goto fail;

    if (!(VAR_4->dir = FUNC_4(VAR_4->sftp, VAR_6))) {
        FUNC_1(VAR_4, VAR_0, "Error opening sftp dir: %s\n", FUNC_5(VAR_4->session));
        VAR_5 = FUNC_0(VAR_1);
        goto fail;
    }

    return 0;

  fail:
    FUNC_2(VAR_3);
    return VAR_5;
}
