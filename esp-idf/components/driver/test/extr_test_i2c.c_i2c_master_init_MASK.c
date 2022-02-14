
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int clk_speed; } ;
struct TYPE_5__ {int scl_io_num; int sda_io_num; TYPE_1__ master; int scl_pullup_en; int sda_pullup_en; int mode; } ;
typedef TYPE_2__ i2c_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static i2c_config_t FUNC_0(void)
{
    i2c_config_t VAR_5 = {
        .mode = VAR_4,
  .sda_pullup_en = VAR_0,
  .scl_pullup_en = VAR_0,
        .master.clk_speed = VAR_1,
        .sda_io_num = VAR_3,
        .scl_io_num = VAR_2,
    };
    return VAR_5;
}
