
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdrom_device_info {int use_count; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* lock_door ) (struct cdrom_device_info*,int ) ;int (* tray_move ) (struct cdrom_device_info*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct cdrom_device_info*,int ) ;
 int FUNC_3 (struct cdrom_device_info*,int) ;

__attribute__((used)) static int FUNC_4(struct cdrom_device_info *VAR_6)
{
 FUNC_1(VAR_2, "entering CDROMEJECT\n");

 if (!FUNC_0(VAR_1))
  return -VAR_4;
 if (VAR_6->use_count != 1 || VAR_5)
  return -VAR_3;
 if (FUNC_0(VAR_0)) {
  int VAR_7 = VAR_6->ops->lock_door(VAR_6, 0);
  if (VAR_7)
   return VAR_7;
 }

 return VAR_6->ops->tray_move(VAR_6, 1);
}
