
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int XRC_supported; } ;
struct TYPE_4__ {TYPE_1__ facilities; } ;
struct dasd_eckd_private {TYPE_2__ rdc_data; } ;
struct dasd_device {scalar_t__ private; } ;
struct ccw1 {int count; int flags; } ;
struct DE_eckd_data {int ga_extended; int ep_sys_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1 (struct ccw1 *VAR_3,
           struct DE_eckd_data *VAR_4,
           struct dasd_device *VAR_5)
{
        struct dasd_eckd_private *VAR_6;
 int VAR_7;

        VAR_6 = (struct dasd_eckd_private *) VAR_5->private;
 if (!VAR_6->rdc_data.facilities.XRC_supported)
  return 0;


 VAR_4->ga_extended |= 0x08;
 VAR_4->ga_extended |= 0x02;

 VAR_7 = FUNC_0(&VAR_4->ep_sys_time);

 if (VAR_7 == -VAR_2 || VAR_7 == -VAR_1)
  VAR_7 = 0;

 VAR_3->count = sizeof(struct DE_eckd_data);
 VAR_3->flags |= VAR_0;
 return VAR_7;
}
