
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int is_connected; TYPE_1__* prot; int priv_data; } ;
typedef TYPE_2__ URLContext ;
struct TYPE_13__ {TYPE_2__* url_context; } ;
struct TYPE_11__ {int (* url_open_dir ) (TYPE_2__*) ;scalar_t__ priv_data_class; scalar_t__ url_close_dir; scalar_t__ url_read_dir; } ;
typedef TYPE_3__ AVIODirContext ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__**) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_3__* FUNC_3 (int) ;
 int FUNC_4 (int ,int **) ;
 int FUNC_5 (TYPE_2__**,char const*,int ,int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;

int FUNC_8(AVIODirContext **VAR_3, const char *VAR_4, AVDictionary **VAR_5)
{
    URLContext *VAR_6 = ((void*)0);
    AVIODirContext *VAR_7 = ((void*)0);
    int VAR_8;
    FUNC_1(VAR_3);

    VAR_7 = FUNC_3(sizeof(*VAR_7));
    if (!VAR_7) {
        VAR_8 = FUNC_0(VAR_1);
        goto fail;
    }

    if ((VAR_8 = FUNC_5(&VAR_6, VAR_4, VAR_0, ((void*)0))) < 0)
        goto fail;

    if (VAR_6->prot->url_open_dir && VAR_6->prot->url_read_dir && VAR_6->prot->url_close_dir) {
        if (VAR_5 && VAR_6->prot->priv_data_class &&
            (VAR_8 = FUNC_4(VAR_6->priv_data, VAR_5)) < 0)
            goto fail;
        VAR_8 = VAR_6->prot->url_open_dir(VAR_6);
    } else
        VAR_8 = FUNC_0(VAR_2);
    if (VAR_8 < 0)
        goto fail;

    VAR_6->is_connected = 1;
    VAR_7->url_context = VAR_6;
    *VAR_3 = VAR_7;
    return 0;

  fail:
    FUNC_2(VAR_7);
    *VAR_3 = ((void*)0);
    FUNC_6(VAR_6);
    return VAR_8;
}
