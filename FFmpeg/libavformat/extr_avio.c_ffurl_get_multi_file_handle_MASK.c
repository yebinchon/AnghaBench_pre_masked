
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* prot; } ;
typedef TYPE_2__ URLContext ;
struct TYPE_6__ {int (* url_get_multi_file_handle ) (TYPE_2__*,int**,int*) ;int (* url_get_file_handle ) (TYPE_2__*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int* FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int**,int*) ;

int FUNC_4(URLContext *VAR_2, int **VAR_3, int *VAR_4)
{
    if (!VAR_2 || !VAR_2->prot)
        return FUNC_0(VAR_1);
    if (!VAR_2->prot->url_get_multi_file_handle) {
        if (!VAR_2->prot->url_get_file_handle)
            return FUNC_0(VAR_1);
        *VAR_3 = FUNC_1(sizeof(**VAR_3));
        if (!*VAR_3)
            return FUNC_0(VAR_0);
        *VAR_4 = 1;
        *VAR_3[0] = VAR_2->prot->url_get_file_handle(VAR_2);
        return 0;
    }
    return VAR_2->prot->url_get_multi_file_handle(VAR_2, VAR_3, VAR_4);
}
