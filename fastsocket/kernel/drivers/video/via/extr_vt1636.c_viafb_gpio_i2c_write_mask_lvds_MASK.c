
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lvds_setting_information {int dummy; } ;
struct lvds_chip_information {int lvds_chip_slave_addr; int i2c_port; } ;
struct IODATA {int Index; int Mask; int Data; } ;
struct TYPE_6__ {TYPE_2__* shared; } ;
struct TYPE_4__ {int i2c_port; } ;
struct TYPE_5__ {TYPE_1__ i2c_stuff; } ;


 int FUNC_0 (struct lvds_setting_information*,struct lvds_chip_information*,int) ;
 int FUNC_1 (int ,int,int) ;
 TYPE_3__* VAR_0 ;

void FUNC_2(struct lvds_setting_information
         *VAR_1, struct lvds_chip_information
         *VAR_2, struct IODATA VAR_3)
{
 int VAR_4, VAR_5;

 VAR_0->shared->i2c_stuff.i2c_port = VAR_2->i2c_port;

 VAR_4 = VAR_3.Index;
 VAR_5 = FUNC_0(VAR_1, VAR_2,
  VAR_4);
 VAR_5 = (VAR_5 & (~VAR_3.Mask)) | VAR_3.Data;

 FUNC_1(VAR_2->lvds_chip_slave_addr, VAR_4, VAR_5);
}
