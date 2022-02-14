
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ vector_desc_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;

esp_err_t FUNC_3(int VAR_6, int VAR_7)
{
    if (VAR_6>31) return VAR_0;
    if (VAR_7>=VAR_4) return VAR_0;

    FUNC_1(&VAR_5);
    vector_desc_t *VAR_8=FUNC_0(VAR_6, VAR_7);
    if (VAR_8==((void*)0)) {
        FUNC_2(&VAR_5);
        return VAR_1;
    }
    VAR_8->flags=VAR_3;
    FUNC_2(&VAR_5);

    return VAR_2;
}
