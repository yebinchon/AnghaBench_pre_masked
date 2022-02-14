
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int mb_param_info_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_2__ {scalar_t__ (* get_param_info ) (int *,int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int ,char*,...) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_1 (int *,int ) ;

esp_err_t FUNC_2(mb_param_info_t* VAR_3, uint32_t VAR_4)
{
    esp_err_t VAR_5 = VAR_1;
    FUNC_0((VAR_2 != ((void*)0)),
                    VAR_0,
                    "Slave interface is not correctly initialized.");
    FUNC_0((VAR_2->get_param_info != ((void*)0)),
                    VAR_0,
                    "Slave interface is not correctly initialized.");
    VAR_5 = VAR_2->get_param_info(VAR_3, VAR_4);
    FUNC_0((VAR_5 == VAR_1),
                    VAR_0,
                    "SERIAL slave get parameter info failure error=(0x%x).", VAR_5);
    return VAR_5;
}
