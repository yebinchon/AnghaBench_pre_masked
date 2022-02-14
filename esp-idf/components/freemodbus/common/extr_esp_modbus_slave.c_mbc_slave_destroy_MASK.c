
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ esp_err_t ;
struct TYPE_2__ {scalar_t__ (* destroy ) () ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int ,char*,...) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_1 () ;

esp_err_t FUNC_2(void)
{
    esp_err_t VAR_3 = VAR_1;

    FUNC_0((VAR_2 != ((void*)0)),
                    VAR_0,
                    "Slave interface is not correctly initialized.");

    FUNC_0((VAR_2->destroy != ((void*)0)),
                    VAR_0,
                    "Slave interface is not correctly initialized.");

    VAR_3 = VAR_2->destroy();
    FUNC_0((VAR_3 == VAR_1),
                    VAR_0,
                    "SERIAL slave destroy failure error=(0x%x).", VAR_3);
    return VAR_3;
}
