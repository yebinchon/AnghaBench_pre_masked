
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint16_t ;
typedef int esp_err_t ;
struct TYPE_4__ {size_t cid; int change_flag; int * param_key; int * instance_ptr; } ;
typedef TYPE_1__ characteristic_descriptor_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,char*) ;
 TYPE_1__** VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (int ) ;

esp_err_t FUNC_2(uint16_t VAR_5, characteristic_descriptor_t* VAR_6)
{
    FUNC_1(VAR_3 != ((void*)0));
    FUNC_0((VAR_6 != ((void*)0)), VAR_0, "incorrect data pointer.");
    FUNC_0((VAR_5 < VAR_4), VAR_0, "cid is not found in the table.");

    characteristic_descriptor_t* VAR_7 = VAR_3[VAR_5];
    FUNC_0((VAR_7 != ((void*)0)), VAR_1, "incorrect cid table or not initialized.");
    FUNC_0((VAR_7->instance_ptr != ((void*)0)), VAR_1, "incorrect cid table instance_ptr.");
    FUNC_0((VAR_7->param_key != ((void*)0)), VAR_1, "incorrect cid table param_key.");
    FUNC_0((VAR_7->cid == VAR_5), VAR_1, "incorrect cid in the table or not initialized.");
    *VAR_6 = *VAR_7;
    VAR_7->change_flag = 0x00;

    return VAR_2;
}
