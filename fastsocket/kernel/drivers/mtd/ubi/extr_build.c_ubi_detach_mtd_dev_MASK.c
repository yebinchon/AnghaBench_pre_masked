
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubi_device {int ubi_num; int dev; TYPE_1__* mtd; int dbg_peb_buf; int peb_buf2; int peb_buf1; int vtbl; scalar_t__ bgt_thread; int reboot_notifier; scalar_t__ ref_count; int ubi_name; } ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (struct ubi_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;
 int ** VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (char*,int ,scalar_t__) ;
 struct ubi_device* FUNC_10 (int) ;
 int FUNC_11 (char*,int ,int) ;
 int FUNC_12 (struct ubi_device*,int ,int *) ;
 int FUNC_13 (struct ubi_device*) ;
 int FUNC_14 (struct ubi_device*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ) ;

int FUNC_17(int VAR_6, int VAR_7)
{
 struct ubi_device *VAR_8;

 if (VAR_6 < 0 || VAR_6 >= VAR_2)
  return -VAR_1;

 VAR_8 = FUNC_10(VAR_6);
 if (!VAR_8)
  return -VAR_1;

 FUNC_6(&VAR_5);
 FUNC_4(&VAR_8->dev);
 VAR_8->ref_count -= 1;
 if (VAR_8->ref_count) {
  if (!VAR_7) {
   FUNC_7(&VAR_5);
   return -VAR_0;
  }

  FUNC_9("%s reference count %d, destroy anyway",
   VAR_8->ubi_name, VAR_8->ref_count);
 }
 VAR_4[VAR_6] = ((void*)0);
 FUNC_7(&VAR_5);

 FUNC_8(VAR_6 == VAR_8->ubi_num);
 FUNC_12(VAR_8, VAR_3, ((void*)0));
 FUNC_0("detaching mtd%d from ubi%d", VAR_8->mtd->index, VAR_6);





 FUNC_15(&VAR_8->reboot_notifier);
 if (VAR_8->bgt_thread)
  FUNC_3(VAR_8->bgt_thread);





 FUNC_2(&VAR_8->dev);

 FUNC_14(VAR_8);
 FUNC_13(VAR_8);
 FUNC_1(VAR_8);
 FUNC_16(VAR_8->vtbl);
 FUNC_5(VAR_8->mtd);
 FUNC_16(VAR_8->peb_buf1);
 FUNC_16(VAR_8->peb_buf2);



 FUNC_11("mtd%d is detached from ubi%d", VAR_8->mtd->index, VAR_8->ubi_num);
 FUNC_4(&VAR_8->dev);
 return 0;
}
