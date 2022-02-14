
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int can_queue; int cmd_per_lun; int max_sectors; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_5;

 if (VAR_3) {
  VAR_4.can_queue = 1;
  VAR_4.cmd_per_lun = 1;
 }

 VAR_4.max_sectors = VAR_2;

 FUNC_1(&VAR_1);
 VAR_5 = FUNC_2(&VAR_0);
 if (VAR_5) {
  FUNC_0("Failed to register protocol");
  FUNC_3(&VAR_1);
  return VAR_5;
 }
 return 0;
}
