
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * ver; } ;
typedef TYPE_1__ protocomm_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,char const*) ;

esp_err_t FUNC_2(protocomm_t *VAR_1, const char *VAR_2)
{
    if ((VAR_1 == ((void*)0)) || (VAR_2 == ((void*)0))) {
        return VAR_0;
    }

    if (VAR_1->ver) {
        FUNC_0((char *)VAR_1->ver);
        VAR_1->ver = ((void*)0);
    }

    return FUNC_1(VAR_1, VAR_2);
}
