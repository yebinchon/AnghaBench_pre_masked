
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_snapshot {int tracked_chunk_pool; int tracked_chunk_lock; } ;
struct dm_snap_tracked_chunk {int node; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct dm_snap_tracked_chunk*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct dm_snapshot *VAR_0,
    struct dm_snap_tracked_chunk *VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(&VAR_0->tracked_chunk_lock, VAR_2);
 FUNC_0(&VAR_1->node);
 FUNC_3(&VAR_0->tracked_chunk_lock, VAR_2);

 FUNC_1(VAR_1, VAR_0->tracked_chunk_pool);
}
