
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* prot; } ;
typedef TYPE_2__ URLContext ;
struct TYPE_5__ {int (* url_get_short_seek ) (TYPE_2__*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;

int FUNC_2(URLContext *VAR_1)
{
    if (!VAR_1 || !VAR_1->prot || !VAR_1->prot->url_get_short_seek)
        return FUNC_0(VAR_0);
    return VAR_1->prot->url_get_short_seek(VAR_1);
}
