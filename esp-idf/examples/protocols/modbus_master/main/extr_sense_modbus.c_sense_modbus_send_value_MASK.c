
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t uint16_t ;
typedef int esp_err_t ;
struct TYPE_3__ {size_t cid; scalar_t__ instance_type; int change_flag; int timestamp; int status; int * param_key; int instance_size; int * instance_ptr; } ;
typedef TYPE_1__ characteristic_descriptor_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,int ,char*,...) ;
 TYPE_1__** VAR_5 ;
 size_t VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (size_t,char*,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (void*,void*,int ) ;
 int FUNC_4 () ;

esp_err_t FUNC_5(uint16_t VAR_7, void* VAR_8)
{
    FUNC_1(VAR_5 != ((void*)0));
    FUNC_0((VAR_7 < VAR_6), VAR_0, "incorrect cid to set.");
    characteristic_descriptor_t* VAR_9 = VAR_5[VAR_7];
    FUNC_0((VAR_9->instance_ptr != ((void*)0)), VAR_1, "incorrect cid table instance_ptr.");
    FUNC_0((VAR_9->param_key != ((void*)0)), VAR_1, "incorrect cid table param_key or not initialized.");
    FUNC_0((VAR_9->cid == VAR_7), VAR_1, "incorrect cid in table or not initialized.");

    uint8_t* VAR_10 = (uint8_t*)VAR_9->instance_ptr;

    FUNC_3((void*)VAR_10, (void*)VAR_8, VAR_9->instance_size);

    uint8_t VAR_11 = 0;

    esp_err_t VAR_12 = FUNC_2(VAR_7, (char*)VAR_9->param_key, VAR_10, &VAR_11);
    FUNC_0((VAR_9->instance_type == VAR_11), VAR_2, "incorrect type of parameter (%u)", VAR_11);
    FUNC_0((VAR_11 <= VAR_4), VAR_3, "returned data type is not supported (%u)", VAR_11);
    VAR_9->change_flag = 0x55;
    VAR_9->status = VAR_12;
    VAR_9->timestamp = FUNC_4();
    return VAR_12;
}
