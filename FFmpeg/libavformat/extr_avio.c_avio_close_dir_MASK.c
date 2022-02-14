
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* prot; } ;
typedef TYPE_2__ URLContext ;
struct TYPE_11__ {TYPE_2__* url_context; } ;
struct TYPE_9__ {int (* url_close_dir ) (TYPE_2__*) ;} ;
typedef TYPE_3__ AVIODirContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__**) ;
 int FUNC_2 (TYPE_3__**) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

int FUNC_5(AVIODirContext **VAR_1)
{
    URLContext *VAR_2;

    FUNC_1(VAR_1);
    if (!(*VAR_1) || !(*VAR_1)->url_context)
        return FUNC_0(VAR_0);
    VAR_2 = (*VAR_1)->url_context;
    VAR_2->prot->url_close_dir(VAR_2);
    FUNC_3(VAR_2);
    FUNC_2(VAR_1);
    *VAR_1 = ((void*)0);
    return 0;
}
