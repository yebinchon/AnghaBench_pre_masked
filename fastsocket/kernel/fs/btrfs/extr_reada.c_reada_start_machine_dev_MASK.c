
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct reada_extent {int logical; int blocksize; int nzones; int lock; struct btrfs_device* scheduled_for; TYPE_2__** zones; int refcnt; } ;
struct extent_buffer {int start; } ;
struct btrfs_fs_info {int extent_root; int reada_lock; } ;
struct btrfs_device {int reada_next; int reada_in_flight; int reada_extents; TYPE_1__* reada_curr_zone; } ;
struct TYPE_4__ {struct btrfs_device* device; } ;
struct TYPE_3__ {int end; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct extent_buffer*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct extent_buffer*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,void**,int,int) ;
 int FUNC_5 (struct btrfs_fs_info*,struct reada_extent*) ;
 int FUNC_6 (struct btrfs_device*) ;
 int FUNC_7 (int ,int,int,int,struct extent_buffer**) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct btrfs_fs_info *VAR_1,
       struct btrfs_device *VAR_2)
{
 struct reada_extent *VAR_3 = ((void*)0);
 int VAR_4 = 0;
 struct extent_buffer *VAR_5 = ((void*)0);
 u64 VAR_6;
 u32 VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10 = 0;

 FUNC_8(&VAR_1->reada_lock);
 if (VAR_2->reada_curr_zone == ((void*)0)) {
  VAR_8 = FUNC_6(VAR_2);
  if (!VAR_8) {
   FUNC_9(&VAR_1->reada_lock);
   return 0;
  }
 }





 VAR_8 = FUNC_4(&VAR_2->reada_extents, (void **)&VAR_3,
         VAR_2->reada_next >> VAR_0, 1);
 if (VAR_8 == 0 || VAR_3->logical >= VAR_2->reada_curr_zone->end) {
  VAR_8 = FUNC_6(VAR_2);
  if (!VAR_8) {
   FUNC_9(&VAR_1->reada_lock);
   return 0;
  }
  VAR_3 = ((void*)0);
  VAR_8 = FUNC_4(&VAR_2->reada_extents, (void **)&VAR_3,
     VAR_2->reada_next >> VAR_0, 1);
 }
 if (VAR_8 == 0) {
  FUNC_9(&VAR_1->reada_lock);
  return 0;
 }
 VAR_2->reada_next = VAR_3->logical + VAR_3->blocksize;
 FUNC_3(&VAR_3->refcnt);

 FUNC_9(&VAR_1->reada_lock);




 for (VAR_9 = 0; VAR_9 < VAR_3->nzones; ++VAR_9) {
  if (VAR_3->zones[VAR_9]->device == VAR_2) {
   VAR_4 = VAR_9 + 1;
   break;
  }
 }
 VAR_6 = VAR_3->logical;
 VAR_7 = VAR_3->blocksize;

 FUNC_8(&VAR_3->lock);
 if (VAR_3->scheduled_for == ((void*)0)) {
  VAR_3->scheduled_for = VAR_2;
  VAR_10 = 1;
 }
 FUNC_9(&VAR_3->lock);

 FUNC_5(VAR_1, VAR_3);

 if (!VAR_10)
  return 0;

 FUNC_1(&VAR_2->reada_in_flight);
 VAR_8 = FUNC_7(VAR_1->extent_root, VAR_6, VAR_7,
    VAR_4, &VAR_5);
 if (VAR_8)
  FUNC_0(VAR_1->extent_root, ((void*)0), VAR_6, VAR_8);
 else if (VAR_5)
  FUNC_0(VAR_1->extent_root, VAR_5, VAR_5->start, VAR_8);

 if (VAR_5)
  FUNC_2(VAR_5);

 return 1;

}
