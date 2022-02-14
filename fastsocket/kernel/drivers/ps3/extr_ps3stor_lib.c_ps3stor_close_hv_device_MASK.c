
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ps3_system_bus_device {scalar_t__ match_id; } ;
struct TYPE_2__ {struct ps3_system_bus_device* disk_sbd; scalar_t__ disk_open; scalar_t__ flash_open; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ps3_system_bus_device*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_1(struct ps3_system_bus_device *VAR_3)
{
 int VAR_4;

 if (VAR_3->match_id == VAR_0
  && VAR_2.disk_open
  && VAR_2.flash_open) {
  VAR_2.disk_sbd = VAR_3;
  return 0;
 }

 VAR_4 = FUNC_0(VAR_3);

 if (VAR_4)
  return VAR_4;

 if (VAR_3->match_id == VAR_0)
  VAR_2.disk_open = 0;

 if (VAR_3->match_id == VAR_1) {
  VAR_2.flash_open = 0;

  if (VAR_2.disk_sbd) {
   FUNC_0(VAR_2.disk_sbd);
   VAR_2.disk_open = 0;
   VAR_2.disk_sbd = ((void*)0);
  }
 }

 return 0;
}
