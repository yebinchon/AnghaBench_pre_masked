
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct lvds_setting_information {int dummy; } ;
struct lvds_chip_information {int lvds_chip_slave_addr; int i2c_port; } ;
struct TYPE_6__ {TYPE_2__* shared; } ;
struct TYPE_4__ {int i2c_port; } ;
struct TYPE_5__ {TYPE_1__ i2c_stuff; } ;


 int FUNC_0 (int ,int ,int *) ;
 TYPE_3__* VAR_0 ;

u8 FUNC_1(struct lvds_setting_information
 *VAR_1, struct lvds_chip_information *VAR_2,
 u8 VAR_3)
{
 u8 VAR_4;

 VAR_0->shared->i2c_stuff.i2c_port = VAR_2->i2c_port;
 FUNC_0(VAR_2->lvds_chip_slave_addr, VAR_3, &VAR_4);

 return VAR_4;
}
