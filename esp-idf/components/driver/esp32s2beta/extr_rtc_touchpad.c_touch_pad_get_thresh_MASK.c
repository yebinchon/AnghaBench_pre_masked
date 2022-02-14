
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int touch_pad_t ;
typedef int esp_err_t ;
struct TYPE_4__ {TYPE_1__* touch_thresh; } ;
struct TYPE_3__ {int thresh; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;

esp_err_t FUNC_0(touch_pad_t VAR_2, uint32_t *VAR_3)
{
    if (VAR_3) {
        *VAR_3 = VAR_1.touch_thresh[VAR_2 - 1].thresh;
    }
    return VAR_0;
}
