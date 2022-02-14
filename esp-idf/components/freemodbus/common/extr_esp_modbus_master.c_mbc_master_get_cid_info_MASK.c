
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
typedef int mb_parameter_descriptor_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_2__ {scalar_t__ (* get_cid_info ) (int ,int const**) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int ,char*,...) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_1 (int ,int const**) ;

esp_err_t FUNC_2(uint16_t VAR_3, const mb_parameter_descriptor_t** VAR_4)
{
    esp_err_t VAR_5 = VAR_1;
    FUNC_0((VAR_2 != ((void*)0)),
                    VAR_0,
                    "Master interface is not correctly initialized.");
    FUNC_0((VAR_2->get_cid_info != ((void*)0)),
                    VAR_0,
                    "Master interface is not correctly initialized.");
    VAR_5 = VAR_2->get_cid_info(VAR_3, VAR_4);
    FUNC_0((VAR_5 == VAR_1),
                    VAR_0,
                    "SERIAL master get cid info failure error=(0x%x).",
                    (uint16_t)VAR_5);
    return VAR_5;
}
