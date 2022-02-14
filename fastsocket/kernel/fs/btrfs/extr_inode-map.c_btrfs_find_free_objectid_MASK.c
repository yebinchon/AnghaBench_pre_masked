
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_root {scalar_t__ highest_objectid; int objectid_mutex; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct btrfs_root*,scalar_t__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct btrfs_root *VAR_3, u64 *VAR_4)
{
 int VAR_5;
 FUNC_1(&VAR_3->objectid_mutex);

 if (FUNC_3(VAR_3->highest_objectid < VAR_0)) {
  VAR_5 = FUNC_0(VAR_3,
        &VAR_3->highest_objectid);
  if (VAR_5)
   goto out;
 }

 if (FUNC_3(VAR_3->highest_objectid >= VAR_1)) {
  VAR_5 = -VAR_2;
  goto out;
 }

 *VAR_4 = ++VAR_3->highest_objectid;
 VAR_5 = 0;
out:
 FUNC_2(&VAR_3->objectid_mutex);
 return VAR_5;
}
