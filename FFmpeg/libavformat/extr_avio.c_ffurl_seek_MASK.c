
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_6__ {TYPE_1__* prot; } ;
typedef TYPE_2__ URLContext ;
struct TYPE_5__ {int (* url_seek ) (TYPE_2__*,int ,int) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

int64_t FUNC_2(URLContext *VAR_2, int64_t VAR_3, int VAR_4)
{
    int64_t VAR_5;

    if (!VAR_2->prot->url_seek)
        return FUNC_0(VAR_1);
    VAR_5 = VAR_2->prot->url_seek(VAR_2, VAR_3, VAR_4 & ~VAR_0);
    return VAR_5;
}
