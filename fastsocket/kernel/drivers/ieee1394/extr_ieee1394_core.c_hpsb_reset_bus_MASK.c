
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hpsb_host {TYPE_1__* driver; int in_bus_reset; } ;
struct TYPE_2__ {int (* devctl ) (struct hpsb_host*,int ,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct hpsb_host*,int ,int) ;

int FUNC_1(struct hpsb_host *VAR_1, int VAR_2)
{
 if (!VAR_1->in_bus_reset) {
  VAR_1->driver->devctl(VAR_1, VAR_0, VAR_2);
  return 0;
 } else {
  return 1;
 }
}
