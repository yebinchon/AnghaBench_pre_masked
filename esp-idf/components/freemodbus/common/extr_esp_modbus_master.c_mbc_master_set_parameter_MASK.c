
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_2__ {scalar_t__ (* set_parameter ) (int ,char*,int *,int *) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,scalar_t__,char*,...) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_2 (int ,char*,int *,int *) ;

esp_err_t FUNC_3(uint16_t VAR_3, char* VAR_4, uint8_t* VAR_5, uint8_t* VAR_6)
{
    esp_err_t VAR_7 = VAR_1;
    FUNC_0((VAR_2 != ((void*)0)),
                    VAR_0,
                    "Master interface is not correctly initialized.");
    FUNC_0((VAR_2->set_parameter != ((void*)0)),
                    VAR_0,
                    "Master interface is not correctly initialized.");
    VAR_7 = VAR_2->set_parameter(VAR_3, VAR_4, VAR_5, VAR_6);
    FUNC_0((VAR_7 == VAR_1),
                    VAR_7,
                    "SERIAL master set parameter failure error=(0x%x) (%s).",
                    VAR_7, FUNC_1(VAR_7));
    return VAR_1;
}
