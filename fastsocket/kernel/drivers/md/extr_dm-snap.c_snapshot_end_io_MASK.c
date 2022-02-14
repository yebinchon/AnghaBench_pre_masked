
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union map_info {struct dm_snap_tracked_chunk* ptr; } ;
struct dm_target {struct dm_snapshot* private; } ;
struct dm_snapshot {int dummy; } ;
struct dm_snap_tracked_chunk {int dummy; } ;
struct bio {int dummy; } ;


 int FUNC_0 (struct dm_snapshot*,struct dm_snap_tracked_chunk*) ;

__attribute__((used)) static int FUNC_1(struct dm_target *VAR_0, struct bio *VAR_1,
      int VAR_2, union map_info *VAR_3)
{
 struct dm_snapshot *VAR_4 = VAR_0->private;
 struct dm_snap_tracked_chunk *VAR_5 = VAR_3->ptr;

 if (VAR_5)
  FUNC_0(VAR_4, VAR_5);

 return 0;
}
