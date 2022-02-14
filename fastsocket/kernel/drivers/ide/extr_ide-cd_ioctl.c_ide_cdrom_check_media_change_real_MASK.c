
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cdrom_device_info {TYPE_1__* handle; } ;
struct TYPE_3__ {int dev_flags; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int *) ;

int FUNC_1(struct cdrom_device_info *VAR_3,
           int VAR_4)
{
 ide_drive_t *VAR_5 = VAR_3->handle;
 int VAR_6;

 if (VAR_4 == VAR_0) {
  (void) FUNC_0(VAR_5, ((void*)0));
  VAR_6 = (VAR_5->dev_flags & VAR_2) ? 1 : 0;
  VAR_5->dev_flags &= ~VAR_2;
  return VAR_6;
 } else {
  return -VAR_1;
 }
}
