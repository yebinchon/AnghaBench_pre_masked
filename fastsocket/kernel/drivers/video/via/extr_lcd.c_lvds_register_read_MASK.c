
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_10__ {TYPE_4__* chip_info; TYPE_2__* shared; } ;
struct TYPE_8__ {scalar_t__ lvds_chip_slave_addr; } ;
struct TYPE_9__ {TYPE_3__ lvds_chip_info; } ;
struct TYPE_6__ {int i2c_port; } ;
struct TYPE_7__ {TYPE_1__ i2c_stuff; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,int*) ;
 TYPE_5__* VAR_1 ;

__attribute__((used)) static int FUNC_1(int VAR_2)
{
 u8 VAR_3;

 VAR_1->shared->i2c_stuff.i2c_port = VAR_0;
 FUNC_0((u8) VAR_1->chip_info->
     lvds_chip_info.lvds_chip_slave_addr,
   (u8) VAR_2, &VAR_3);
 return VAR_3;
}
