
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* priv_data; TYPE_1__* prot; scalar_t__ is_connected; } ;
typedef TYPE_2__ URLContext ;
struct TYPE_7__ {int (* url_close ) (TYPE_2__*) ;int flags; scalar_t__ priv_data_class; scalar_t__ priv_data_size; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__**) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;

int FUNC_4(URLContext **VAR_1)
{
    URLContext *VAR_2= *VAR_1;
    int VAR_3 = 0;
    if (!VAR_2)
        return 0;

    if (VAR_2->is_connected && VAR_2->prot->url_close)
        VAR_3 = VAR_2->prot->url_close(VAR_2);




    if (VAR_2->prot->priv_data_size) {
        if (VAR_2->prot->priv_data_class)
            FUNC_1(VAR_2->priv_data);
        FUNC_0(&VAR_2->priv_data);
    }
    FUNC_1(VAR_2);
    FUNC_0(VAR_1);
    return VAR_3;
}
