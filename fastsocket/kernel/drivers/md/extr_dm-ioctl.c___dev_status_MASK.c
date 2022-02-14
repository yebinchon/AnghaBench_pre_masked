
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int dummy; } ;
struct gendisk {int dummy; } ;
struct dm_table {int dummy; } ;
struct dm_ioctl {int flags; void* target_count; int event_nr; int open_count; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct gendisk*) ;
 struct gendisk* FUNC_1 (struct mapped_device*) ;
 int FUNC_2 (struct mapped_device*) ;
 struct dm_table* FUNC_3 (struct mapped_device*) ;
 struct dm_table* FUNC_4 (struct mapped_device*) ;
 int FUNC_5 (struct mapped_device*) ;
 scalar_t__ FUNC_6 (struct mapped_device*) ;
 int FUNC_7 (struct dm_table*) ;
 void* FUNC_8 (struct dm_table*) ;
 int FUNC_9 (struct dm_table*) ;
 scalar_t__ FUNC_10 (struct gendisk*) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(struct mapped_device *VAR_5, struct dm_ioctl *VAR_6)
{
 struct gendisk *VAR_7 = FUNC_1(VAR_5);
 struct dm_table *VAR_8;

 VAR_6->flags &= ~(VAR_3 | VAR_2 |
     VAR_0);

 if (FUNC_6(VAR_5))
  VAR_6->flags |= VAR_3;

 VAR_6->dev = FUNC_11(FUNC_0(VAR_7));






 VAR_6->open_count = FUNC_5(VAR_5);

 VAR_6->event_nr = FUNC_2(VAR_5);
 VAR_6->target_count = 0;

 VAR_8 = FUNC_4(VAR_5);
 if (VAR_8) {
  if (!(VAR_6->flags & VAR_1)) {
   if (FUNC_10(VAR_7))
    VAR_6->flags |= VAR_2;
   VAR_6->target_count = FUNC_8(VAR_8);
  }
  FUNC_9(VAR_8);

  VAR_6->flags |= VAR_0;
 }

 if (VAR_6->flags & VAR_1) {
  VAR_8 = FUNC_3(VAR_5);
  if (VAR_8) {
   if (!(FUNC_7(VAR_8) & VAR_4))
    VAR_6->flags |= VAR_2;
   VAR_6->target_count = FUNC_8(VAR_8);
   FUNC_9(VAR_8);
  }
 }
}
