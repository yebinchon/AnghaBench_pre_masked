
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* prot; } ;
typedef TYPE_2__ URLContext ;
struct TYPE_7__ {int (* url_move ) (TYPE_2__*,TYPE_2__*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__**,char const*,int ,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*) ;

int FUNC_4(const char *VAR_3, const char *VAR_4)
{
    URLContext *VAR_5, *VAR_6;
    int VAR_7 = FUNC_1(&VAR_5, VAR_3, VAR_0, ((void*)0));
    if (VAR_7 < 0)
        return VAR_7;
    VAR_7 = FUNC_1(&VAR_6, VAR_4, VAR_1, ((void*)0));
    if (VAR_7 < 0) {
        FUNC_2(VAR_5);
        return VAR_7;
    }

    if (VAR_5->prot == VAR_6->prot && VAR_5->prot->url_move)
        VAR_7 = VAR_5->prot->url_move(VAR_5, VAR_6);
    else
        VAR_7 = FUNC_0(VAR_2);

    FUNC_2(VAR_5);
    FUNC_2(VAR_6);
    return VAR_7;
}
