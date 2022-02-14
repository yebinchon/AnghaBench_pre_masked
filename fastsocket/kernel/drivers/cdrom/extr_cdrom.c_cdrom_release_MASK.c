
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdrom_device_ops {int capability; int (* tray_move ) (struct cdrom_device_info*,int) ;int (* release ) (struct cdrom_device_info*) ;int (* lock_door ) (struct cdrom_device_info*,int ) ;} ;
struct cdrom_device_info {scalar_t__ use_count; int options; scalar_t__ for_data; int name; struct cdrom_device_ops* ops; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct cdrom_device_info*) ;
 int FUNC_3 (struct cdrom_device_info*) ;
 int VAR_7 ;
 int FUNC_4 (struct cdrom_device_info*,int ) ;
 int FUNC_5 (struct cdrom_device_info*) ;
 int FUNC_6 (struct cdrom_device_info*,int) ;

void FUNC_7(struct cdrom_device_info *VAR_8, fmode_t VAR_9)
{
 struct cdrom_device_ops *VAR_10;
 int VAR_11;

 if (VAR_8 == ((void*)0))
  return;
 VAR_10 = VAR_8->ops;

 FUNC_1(VAR_5, "entering cdrom_release\n");

 if (VAR_8->use_count > 0)
  VAR_8->use_count--;

 if (VAR_8->use_count == 0) {
  FUNC_1(VAR_5, "Use count for \"/dev/%s\" now zero\n", VAR_8->name);
  FUNC_3(VAR_8);

  if ((VAR_10->capability & VAR_0) && !VAR_7) {
   FUNC_1(VAR_5, "Unlocking door!\n");
   VAR_10->lock_door(VAR_8, 0);
  }
 }

 VAR_11 = !(VAR_8->options & VAR_4) ||
  !(VAR_9 & VAR_6);




 if (FUNC_0(VAR_2) && !VAR_8->use_count && VAR_8->for_data)
  FUNC_2(VAR_8);

 VAR_10->release(VAR_8);
 if (VAR_8->use_count == 0) {
  if (VAR_11 &&
      VAR_8->options & VAR_3 && FUNC_0(VAR_1))
   VAR_10->tray_move(VAR_8, 1);
 }
}
