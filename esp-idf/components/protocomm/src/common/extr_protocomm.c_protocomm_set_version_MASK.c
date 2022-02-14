
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * ver; } ;
typedef TYPE_1__ protocomm_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_1__*,char const*,int ,void*,int ) ;
 int VAR_6 ;
 int * FUNC_2 (char const*) ;

esp_err_t FUNC_3(protocomm_t *VAR_7, const char *VAR_8, const char *VAR_9)
{
    if ((VAR_7 == ((void*)0)) || (VAR_8 == ((void*)0)) || (VAR_9 == ((void*)0))) {
        return VAR_0;
    }

    if (VAR_7->ver) {
        return VAR_1;
    }

    VAR_7->ver = FUNC_2(VAR_9);
    if (VAR_7->ver == ((void*)0)) {
        FUNC_0(VAR_4, "Error allocating version string");
        return VAR_2;
    }

    esp_err_t VAR_10 = FUNC_1(VAR_7, VAR_8,
                                                    VAR_6,
                                                    (void *) VAR_7, VAR_5);
    if (VAR_10 != VAR_3) {
        FUNC_0(VAR_4, "Error adding version endpoint");
        return VAR_10;
    }
    return VAR_3;
}
