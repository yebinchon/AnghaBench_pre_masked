
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
typedef int mb_parameter_descriptor_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_2__ {scalar_t__ (* set_descriptor ) (int const*,int const) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,scalar_t__,char*,...) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_2 (int const*,int const) ;

esp_err_t FUNC_3(const mb_parameter_descriptor_t* VAR_3, const uint16_t VAR_4)
{
    esp_err_t VAR_5 = VAR_1;
    FUNC_0((VAR_2 != ((void*)0)),
                    VAR_0,
                    "Master interface is not correctly initialized.");
    FUNC_0((VAR_2->set_descriptor != ((void*)0)),
                    VAR_0,
                    "Master interface is not correctly initialized.");
    VAR_5 = VAR_2->set_descriptor(VAR_3, VAR_4);
    FUNC_0((VAR_5 == VAR_1),
                    VAR_5,
                    "SERIAL master set descriptor failure error=(0x%x) (%s).",
                    VAR_5, FUNC_1(VAR_5));
    return VAR_1;
}
