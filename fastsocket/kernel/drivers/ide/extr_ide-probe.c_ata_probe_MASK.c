
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct TYPE_3__ {TYPE_2__** devices; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_4__ {int dev_flags; scalar_t__ media; } ;
typedef TYPE_2__ ide_drive_t ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static struct kobject *FUNC_1(dev_t VAR_7, int *VAR_8, void *VAR_9)
{
 ide_hwif_t *VAR_10 = VAR_9;
 int VAR_11 = *VAR_8 >> VAR_1;
 ide_drive_t *VAR_12 = VAR_10->devices[VAR_11];

 if ((VAR_12->dev_flags & VAR_0) == 0)
  return ((void*)0);

 if (VAR_12->media == VAR_3)
  FUNC_0("ide-disk");
 if (VAR_12->media == VAR_2 || VAR_12->media == VAR_5)
  FUNC_0("ide-cd");
 if (VAR_12->media == VAR_6)
  FUNC_0("ide-tape");
 if (VAR_12->media == VAR_4)
  FUNC_0("ide-floppy");

 return ((void*)0);
}
