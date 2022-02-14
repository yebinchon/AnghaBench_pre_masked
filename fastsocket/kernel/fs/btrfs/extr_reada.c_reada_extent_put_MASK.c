
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct reada_zone {scalar_t__ elems; int refcnt; int lock; TYPE_1__* device; } ;
struct reada_extent {unsigned long logical; int nzones; TYPE_2__* scheduled_for; struct reada_zone** zones; int refcnt; } ;
struct btrfs_fs_info {int reada_lock; int reada_tree; } ;
struct TYPE_4__ {int reada_in_flight; } ;
struct TYPE_3__ {int reada_extents; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct reada_extent*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct btrfs_fs_info *VAR_3,
        struct reada_extent *VAR_4)
{
 int VAR_5;
 unsigned long VAR_6 = VAR_4->logical >> VAR_0;

 FUNC_5(&VAR_3->reada_lock);
 if (!FUNC_3(&VAR_4->refcnt, VAR_1)) {
  FUNC_6(&VAR_3->reada_lock);
  return;
 }

 FUNC_4(&VAR_3->reada_tree, VAR_6);
 for (VAR_5 = 0; VAR_5 < VAR_4->nzones; ++VAR_5) {
  struct reada_zone *VAR_7 = VAR_4->zones[VAR_5];

  FUNC_4(&VAR_7->device->reada_extents, VAR_6);
 }

 FUNC_6(&VAR_3->reada_lock);

 for (VAR_5 = 0; VAR_5 < VAR_4->nzones; ++VAR_5) {
  struct reada_zone *VAR_8 = VAR_4->zones[VAR_5];

  FUNC_2(&VAR_8->refcnt);
  FUNC_5(&VAR_8->lock);
  --VAR_8->elems;
  if (VAR_8->elems == 0) {


   FUNC_3(&VAR_8->refcnt, VAR_2);
  }
  FUNC_6(&VAR_8->lock);

  FUNC_5(&VAR_3->reada_lock);
  FUNC_3(&VAR_8->refcnt, VAR_2);
  FUNC_6(&VAR_3->reada_lock);
 }
 if (VAR_4->scheduled_for)
  FUNC_0(&VAR_4->scheduled_for->reada_in_flight);

 FUNC_1(VAR_4);
}
