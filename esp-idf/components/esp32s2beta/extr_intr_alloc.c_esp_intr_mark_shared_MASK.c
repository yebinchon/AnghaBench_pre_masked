
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
 int VAR_4 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int VAR_6 ;

esp_err_t FUNC_3(int VAR_7, int VAR_8, bool VAR_9)
{
    if (VAR_7>31) return VAR_0;
    if (VAR_8>=VAR_5) return VAR_0;

    FUNC_1(&VAR_6);
    vector_desc_t *VAR_10=FUNC_0(VAR_7, VAR_8);
    if (VAR_10==((void*)0)) {
        FUNC_2(&VAR_6);
        return VAR_1;
    }
    VAR_10->flags=VAR_4;
    if (VAR_9) VAR_10->flags|=VAR_3;
    FUNC_2(&VAR_6);

    return VAR_2;
}
