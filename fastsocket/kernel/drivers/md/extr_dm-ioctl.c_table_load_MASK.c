
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_type {int name; } ;
struct mapped_device {int dummy; } ;
struct hash_cell {struct dm_table* new_map; struct mapped_device* md; } ;
struct dm_table {int dummy; } ;
struct dm_ioctl {int flags; int target_count; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mapped_device*,struct dm_ioctl*) ;
 int VAR_4 ;
 struct target_type* FUNC_2 (struct mapped_device*) ;
 scalar_t__ FUNC_3 (struct mapped_device*) ;
 struct hash_cell* FUNC_4 (struct mapped_device*) ;
 int FUNC_5 (struct mapped_device*) ;
 int FUNC_6 (struct mapped_device*) ;
 int FUNC_7 (struct mapped_device*,scalar_t__) ;
 int FUNC_8 (struct mapped_device*) ;
 int FUNC_9 (struct dm_table**,int ,int ,struct mapped_device*) ;
 int FUNC_10 (struct dm_table*) ;
 struct target_type* FUNC_11 (struct dm_table*) ;
 scalar_t__ FUNC_12 (struct dm_table*) ;
 int FUNC_13 (struct mapped_device*) ;
 int FUNC_14 (int *) ;
 struct mapped_device* FUNC_15 (struct dm_ioctl*) ;
 int FUNC_16 (struct dm_ioctl*) ;
 int FUNC_17 (struct dm_table*,struct dm_ioctl*,size_t) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int FUNC_19(struct dm_ioctl *VAR_5, size_t VAR_6)
{
 int VAR_7;
 struct hash_cell *VAR_8;
 struct dm_table *VAR_9;
 struct mapped_device *VAR_10;
 struct target_type *VAR_11;

 VAR_10 = FUNC_15(VAR_5);
 if (!VAR_10)
  return -VAR_3;

 VAR_7 = FUNC_9(&VAR_9, FUNC_16(VAR_5), VAR_5->target_count, VAR_10);
 if (VAR_7)
  goto out;

 VAR_7 = FUNC_17(VAR_9, VAR_5, VAR_6);
 if (VAR_7) {
  FUNC_10(VAR_9);
  goto out;
 }

 VAR_11 = FUNC_2(VAR_10);
 if (VAR_11 &&
     (VAR_11 != FUNC_11(VAR_9))) {
  FUNC_0("can't replace immutable target type %s",
         VAR_11->name);
  FUNC_10(VAR_9);
  VAR_7 = -VAR_2;
  goto out;
 }


 FUNC_5(VAR_10);
 if (FUNC_3(VAR_10) == VAR_1)

  FUNC_7(VAR_10, FUNC_12(VAR_9));
 else if (FUNC_3(VAR_10) != FUNC_12(VAR_9)) {
  FUNC_0("can't change device type after initial table load.");
  FUNC_10(VAR_9);
  FUNC_13(VAR_10);
  VAR_7 = -VAR_2;
  goto out;
 }


 VAR_7 = FUNC_8(VAR_10);
 if (VAR_7) {
  FUNC_0("unable to set up device queue for new table.");
  FUNC_10(VAR_9);
  FUNC_13(VAR_10);
  goto out;
 }
 FUNC_13(VAR_10);


 FUNC_14(&VAR_4);
 VAR_8 = FUNC_4(VAR_10);
 if (!VAR_8 || VAR_8->md != VAR_10) {
  FUNC_0("device has been removed from the dev hash table.");
  FUNC_10(VAR_9);
  FUNC_18(&VAR_4);
  VAR_7 = -VAR_3;
  goto out;
 }

 if (VAR_8->new_map)
  FUNC_10(VAR_8->new_map);
 VAR_8->new_map = VAR_9;
 FUNC_18(&VAR_4);

 VAR_5->flags |= VAR_0;
 FUNC_1(VAR_10, VAR_5);

out:
 FUNC_6(VAR_10);

 return VAR_7;
}
