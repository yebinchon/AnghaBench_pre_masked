
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int line ;
struct TYPE_7__ {int is_streamed; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_8__ {int seekable; int filesize; int cookie_dict; int cookies; scalar_t__ is_mediagateway; int line_count; int chunksize; } ;
typedef TYPE_2__ HTTPContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ,char*,char*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_2__*,char*,int) ;
 int FUNC_4 (TYPE_1__*,char*,int ,int*) ;

__attribute__((used)) static int FUNC_5(URLContext *VAR_3, int *VAR_4)
{
    HTTPContext *VAR_5 = VAR_3->priv_data;
    char VAR_6[VAR_1];
    int VAR_7 = 0;

    VAR_5->chunksize = VAR_2;

    for (;;) {
        if ((VAR_7 = FUNC_3(VAR_5, VAR_6, sizeof(VAR_6))) < 0)
            return VAR_7;

        FUNC_1(VAR_3, VAR_0, "header='%s'\n", VAR_6);

        VAR_7 = FUNC_4(VAR_3, VAR_6, VAR_5->line_count, VAR_4);
        if (VAR_7 < 0)
            return VAR_7;
        if (VAR_7 == 0)
            break;
        VAR_5->line_count++;
    }

    if (VAR_5->seekable == -1 && VAR_5->is_mediagateway && VAR_5->filesize == 2000000000)
        VAR_3->is_streamed = 1;


    FUNC_2(VAR_5->cookie_dict, &VAR_5->cookies);
    FUNC_0(&VAR_5->cookie_dict);

    return VAR_7;
}
