
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int XRC_supported; } ;
struct TYPE_7__ {TYPE_2__ facilities; } ;
struct dasd_eckd_private {TYPE_3__ rdc_data; } ;
struct dasd_device {scalar_t__ private; } ;
struct TYPE_8__ {int ga_extended; int ep_sys_time; } ;
struct TYPE_5__ {int time_stamp; } ;
struct PFX_eckd_data {TYPE_4__ define_extent; TYPE_1__ validity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct PFX_eckd_data *VAR_2,
          struct dasd_device *VAR_3)
{
 struct dasd_eckd_private *VAR_4;
 int VAR_5;

 VAR_4 = (struct dasd_eckd_private *) VAR_3->private;
 if (!VAR_4->rdc_data.facilities.XRC_supported)
  return 0;


 VAR_2->define_extent.ga_extended |= 0x08;
 VAR_2->define_extent.ga_extended |= 0x02;
 VAR_2->validity.time_stamp = 1;

 VAR_5 = FUNC_0(&VAR_2->define_extent.ep_sys_time);

 if (VAR_5 == -VAR_1 || VAR_5 == -VAR_0)
  VAR_5 = 0;
 return VAR_5;
}
