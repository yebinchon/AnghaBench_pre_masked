
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* prot; } ;
typedef TYPE_2__ URLContext ;
struct TYPE_5__ {int (* url_get_file_handle ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_2__*) ;

int FUNC_1(URLContext *VAR_0)
{
    if (!VAR_0 || !VAR_0->prot || !VAR_0->prot->url_get_file_handle)
        return -1;
    return VAR_0->prot->url_get_file_handle(VAR_0);
}
