
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dev_flags; scalar_t__ sleep; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_0 (ide_drive_t *VAR_3, unsigned long VAR_4)
{
 if (VAR_4 > VAR_1)
  VAR_4 = VAR_1;
 VAR_3->sleep = VAR_4 + VAR_2;
 VAR_3->dev_flags |= VAR_0;
}
