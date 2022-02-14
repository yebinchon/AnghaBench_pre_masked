
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdrom_device_info {int options; int use_count; TYPE_1__* ops; int name; scalar_t__ media_written; } ;
struct block_device {int dummy; } ;
typedef int fmode_t ;
struct TYPE_2__ {int (* open ) (struct cdrom_device_info*,int) ;int (* release ) (struct cdrom_device_info*) ;int (* lock_door ) (struct cdrom_device_info*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct cdrom_device_info*) ;
 scalar_t__ FUNC_3 (struct cdrom_device_info*) ;
 int FUNC_4 (struct block_device*) ;
 int FUNC_5 (struct cdrom_device_info*) ;
 int FUNC_6 (struct cdrom_device_info*,int) ;
 int FUNC_7 (struct cdrom_device_info*,int ) ;
 int FUNC_8 (struct cdrom_device_info*) ;

int FUNC_9(struct cdrom_device_info *VAR_8, struct block_device *VAR_9, fmode_t VAR_10)
{
 int VAR_11;

 FUNC_1(VAR_4, "entering cdrom_open\n");



 VAR_8->use_count++;
 if ((VAR_10 & VAR_6) && (VAR_8->options & VAR_3)) {
  VAR_11 = VAR_8->ops->open(VAR_8, 1);
 } else {
  VAR_11 = FUNC_5(VAR_8);
  if (VAR_11)
   goto err;
  FUNC_2(VAR_8);
  if (VAR_10 & VAR_7) {
   VAR_11 = -VAR_5;
   if (FUNC_3(VAR_8))
    goto err_release;
   if (!FUNC_0(VAR_1))
    goto err_release;
   VAR_11 = 0;
   VAR_8->media_written = 0;
  }
 }

 if (VAR_11)
  goto err;

 FUNC_1(VAR_4, "Use count for \"/dev/%s\" now %d\n",
   VAR_8->name, VAR_8->use_count);


 FUNC_4(VAR_9);
 return 0;
err_release:
 if (FUNC_0(VAR_0) && VAR_8->options & VAR_2) {
  VAR_8->ops->lock_door(VAR_8, 0);
  FUNC_1(VAR_4, "door unlocked.\n");
 }
 VAR_8->ops->release(VAR_8);
err:
 VAR_8->use_count--;
 return VAR_11;
}
