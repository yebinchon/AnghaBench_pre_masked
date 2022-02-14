
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* prot; } ;
typedef TYPE_2__ URLContext ;
struct TYPE_7__ {int (* url_accept ) (TYPE_2__*,TYPE_2__**) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__**) ;

int FUNC_3(URLContext *VAR_1, URLContext **VAR_2)
{
    FUNC_1(!*VAR_2);
    if (VAR_1->prot->url_accept)
        return VAR_1->prot->url_accept(VAR_1, VAR_2);
    return FUNC_0(VAR_0);
}
