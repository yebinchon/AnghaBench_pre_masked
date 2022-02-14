
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int clk_speed; } ;
struct TYPE_5__ {int mode; TYPE_1__ master; void* scl_pullup_en; int scl_io_num; void* sda_pullup_en; int sda_io_num; } ;
typedef TYPE_2__ i2c_config_t ;
typedef int esp_err_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int ,int ,int ,int ) ;
 int FUNC_1 (int,TYPE_2__*) ;

__attribute__((used)) static esp_err_t FUNC_2(void)
{
    int VAR_8 = VAR_2;
    i2c_config_t VAR_9;
    VAR_9.mode = VAR_7;
    VAR_9.sda_io_num = VAR_5;
    VAR_9.sda_pullup_en = VAR_0;
    VAR_9.scl_io_num = VAR_4;
    VAR_9.scl_pullup_en = VAR_0;
    VAR_9.master.clk_speed = VAR_1;
    FUNC_1(VAR_8, &VAR_9);
    return FUNC_0(VAR_8, VAR_9.mode,
                              VAR_3,
                              VAR_6, 0);
}
