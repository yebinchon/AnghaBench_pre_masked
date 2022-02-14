
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int command ;
struct TYPE_7__ {int filename; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_8__ {char* path; } ;
typedef TYPE_2__ FTPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_2__*,char*,int const*,int *) ;
 int FUNC_4 (char*,int,char*,char*) ;

__attribute__((used)) static int FUNC_5(URLContext *VAR_2)
{
    FTPContext *VAR_3 = VAR_2->priv_data;
    char VAR_4[VAR_1];
    static const int VAR_5[] = {250, 421, 450, 500, 501, 502, 530, 550, 0};
    static const int VAR_6[] = {250, 421, 500, 501, 502, 530, 550, 0};
    int VAR_7;

    if ((VAR_7 = FUNC_2(VAR_2, VAR_2->filename)) < 0)
        goto cleanup;

    FUNC_4(VAR_4, sizeof(VAR_4), "DELE %s\r\n", VAR_3->path);
    if (FUNC_3(VAR_3, VAR_4, VAR_5, ((void*)0)) == 250) {
        VAR_7 = 0;
        goto cleanup;
    }

    FUNC_4(VAR_4, sizeof(VAR_4), "RMD %s\r\n", VAR_3->path);
    if (FUNC_3(VAR_3, VAR_4, VAR_6, ((void*)0)) == 250)
        VAR_7 = 0;
    else
        VAR_7 = FUNC_0(VAR_0);

cleanup:
    FUNC_1(VAR_2);
    return VAR_7;
}
