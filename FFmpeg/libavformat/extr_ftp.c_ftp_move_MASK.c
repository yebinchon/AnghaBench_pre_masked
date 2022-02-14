
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int path ;
typedef int command ;
struct TYPE_8__ {int filename; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_9__ {char* path; } ;
typedef TYPE_2__ FTPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,char*,int,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_2__*,char*,int const*,int *) ;
 int FUNC_5 (char*,int,char*,char*) ;

__attribute__((used)) static int FUNC_6(URLContext *VAR_2, URLContext *VAR_3)
{
    FTPContext *VAR_4 = VAR_2->priv_data;
    char VAR_5[VAR_1], VAR_6[VAR_1];
    static const int VAR_7[] = {350, 421, 450, 500, 501, 502, 503, 530, 0};
    static const int VAR_8[] = {250, 421, 500, 501, 502, 503, 530, 532, 553, 0};
    int VAR_9;

    if ((VAR_9 = FUNC_3(VAR_2, VAR_2->filename)) < 0)
        goto cleanup;

    FUNC_5(VAR_5, sizeof(VAR_5), "RNFR %s\r\n", VAR_4->path);
    if (FUNC_4(VAR_4, VAR_5, VAR_7, ((void*)0)) != 350) {
        VAR_9 = FUNC_0(VAR_0);
        goto cleanup;
    }

    FUNC_1(0, 0, 0, 0, 0, 0, 0,
                 VAR_6, sizeof(VAR_6),
                 VAR_3->filename);
    FUNC_5(VAR_5, sizeof(VAR_5), "RNTO %s\r\n", VAR_6);
    if (FUNC_4(VAR_4, VAR_5, VAR_8, ((void*)0)) == 250)
        VAR_9 = 0;
    else
        VAR_9 = FUNC_0(VAR_0);

cleanup:
    FUNC_2(VAR_2);
    return VAR_9;
}
