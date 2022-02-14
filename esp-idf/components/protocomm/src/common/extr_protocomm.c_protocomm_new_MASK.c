
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int endpoints; } ;
typedef TYPE_1__ protocomm_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int,int) ;

protocomm_t *FUNC_3(void)
{
    protocomm_t *VAR_1;

    VAR_1 = (protocomm_t *) FUNC_2(1, sizeof(protocomm_t));
    if (!VAR_1) {
       FUNC_0(VAR_0, "Error allocating protocomm");
       return ((void*)0);
    }
    FUNC_1(&VAR_1->endpoints);

    return VAR_1;
}
