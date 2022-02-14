
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ present; } ;
struct TYPE_6__ {TYPE_1__ status; } ;
struct TYPE_5__ {TYPE_3__* device; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 () ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_2 = 0;

 VAR_2 = FUNC_0(VAR_1->device);
 if (VAR_2)
  return VAR_2;

 if (VAR_1->device->status.present) {
  VAR_2 = FUNC_1();
 } else {
  FUNC_2("Hotkey device not present, aborting\n");
  return -VAR_0;
 }

 return VAR_2;
}
