
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {TYPE_2__* mbs_area_descriptors; } ;
typedef TYPE_1__ mb_slave_options_t ;
struct TYPE_6__ {size_t type; scalar_t__ size; int * address; } ;
typedef TYPE_2__ mb_register_area_descriptor_t ;
typedef int esp_err_t ;
struct TYPE_7__ {TYPE_1__ opts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int,int ,char*,...) ;
 TYPE_3__* VAR_7 ;

esp_err_t FUNC_1(const mb_register_area_descriptor_t VAR_8)
{
    FUNC_0((VAR_7 != ((void*)0)),
                    VAR_1,
                    "Slave interface is not correctly initialized.");
    mb_slave_options_t* VAR_9 = &VAR_7->opts;
    FUNC_0(((VAR_8.type < VAR_5) && (VAR_8.type >= VAR_6)),
                VAR_0, "mb incorrect modbus instance type = (0x%x).",
                (uint32_t)VAR_8.type);
    FUNC_0((VAR_8.address != ((void*)0)),
                VAR_0, "mb instance pointer is NULL.");
    FUNC_0((VAR_8.size >= VAR_4) && (VAR_8.size < (VAR_3)),
                VAR_0, "mb instance size is incorrect = (0x%x).",
                (uint32_t)VAR_8.size);
    VAR_9->mbs_area_descriptors[VAR_8.type] = VAR_8;
    return VAR_2;
}
