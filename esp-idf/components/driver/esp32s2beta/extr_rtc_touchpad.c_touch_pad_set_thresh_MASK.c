
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
 int VAR_1 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

esp_err_t FUNC_3(touch_pad_t VAR_5, uint32_t VAR_6)
{
    FUNC_0((VAR_5 < VAR_4) && (VAR_5 != VAR_3), "touch num error", VAR_0);
    FUNC_1();
    VAR_2.touch_thresh[VAR_5 - 1].thresh = VAR_6;
    FUNC_2();
    return VAR_1;
}
