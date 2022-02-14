
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int mb_register_area_descriptor_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_2__ {scalar_t__ (* set_descriptor ) (int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int ,char*,...) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;

esp_err_t FUNC_2(mb_register_area_descriptor_t VAR_3)
{
    esp_err_t VAR_4 = VAR_1;
    FUNC_0((VAR_2 != ((void*)0)),
                    VAR_0,
                    "Slave interface is not correctly initialized.");
    FUNC_0((VAR_2->set_descriptor != ((void*)0)),
                    VAR_0,
                    "Slave interface is not correctly initialized.");
    VAR_4 = VAR_2->set_descriptor(VAR_3);
    FUNC_0((VAR_4 == VAR_1),
                    VAR_0,
                    "SERIAL slave set descriptor failure error=(0x%x).", VAR_4);
    return VAR_4;
}
