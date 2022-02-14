
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ external; int mutex; scalar_t__ daemon_sleep; } ;
struct mddev {TYPE_4__ bitmap_info; TYPE_3__* thread; struct bitmap* bitmap; } ;
struct bitmap_counts {unsigned long chunks; int chunkshift; int lock; TYPE_1__* bp; } ;
struct TYPE_9__ {unsigned long file_pages; int * filemap; int sb_page; } ;
struct bitmap {int allclean; TYPE_2__ storage; int flags; scalar_t__ need_sync; struct bitmap_counts counts; int events_cleared; scalar_t__ daemon_lastrun; } ;
typedef int sector_t ;
struct TYPE_12__ {int events_cleared; } ;
typedef TYPE_5__ bitmap_super_t ;
typedef int bitmap_counter_t ;
struct TYPE_10__ {scalar_t__ timeout; } ;
struct TYPE_8__ {scalar_t__ pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned long VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_0 (struct bitmap_counts*,int,int) ;
 int FUNC_1 (struct bitmap*,int) ;
 int* FUNC_2 (struct bitmap_counts*,int,int*,int ) ;
 int FUNC_3 (struct bitmap_counts*,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_9 ;
 TYPE_5__* FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_5__*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct bitmap*,unsigned long,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (struct bitmap*,unsigned long,int ) ;
 int FUNC_13 (int ,int *) ;
 scalar_t__ FUNC_14 (struct bitmap*,unsigned long,int ) ;
 scalar_t__ FUNC_15 (scalar_t__,scalar_t__) ;
 int FUNC_16 (struct bitmap*,int ,int ) ;

void FUNC_17(struct mddev *VAR_10)
{
 struct bitmap *VAR_11;
 unsigned long VAR_12;
 unsigned long VAR_13;
 sector_t VAR_14;
 struct bitmap_counts *VAR_15;




 FUNC_7(&VAR_10->bitmap_info.mutex);
 VAR_11 = VAR_10->bitmap;
 if (VAR_11 == ((void*)0)) {
  FUNC_8(&VAR_10->bitmap_info.mutex);
  return;
 }
 if (FUNC_15(VAR_9, VAR_11->daemon_lastrun
   + VAR_10->bitmap_info.daemon_sleep))
  goto done;

 VAR_11->daemon_lastrun = VAR_9;
 if (VAR_11->allclean) {
  VAR_10->thread->timeout = VAR_5;
  goto done;
 }
 VAR_11->allclean = 1;





 for (VAR_12 = 0; VAR_12 < VAR_11->storage.file_pages; VAR_12++)
  if (FUNC_12(VAR_11, VAR_12,
          VAR_2))
   FUNC_9(VAR_11, VAR_12,
          VAR_1);

 if (VAR_11->need_sync &&
     VAR_10->bitmap_info.external == 0) {


  bitmap_super_t *VAR_16;
  VAR_11->need_sync = 0;
  if (VAR_11->storage.filemap) {
   VAR_16 = FUNC_5(VAR_11->storage.sb_page, VAR_4);
   VAR_16->events_cleared =
    FUNC_4(VAR_11->events_cleared);
   FUNC_6(VAR_16, VAR_4);
   FUNC_9(VAR_11, 0,
          VAR_1);
  }
 }



 VAR_15 = &VAR_11->counts;
 FUNC_10(&VAR_15->lock);
 VAR_13 = 0;
 for (VAR_12 = 0; VAR_12 < VAR_15->chunks; VAR_12++) {
  bitmap_counter_t *VAR_17;
  sector_t VAR_18 = (sector_t)VAR_12 << VAR_15->chunkshift;

  if (VAR_12 == VAR_13) {
   VAR_13 += VAR_7;
   if (!VAR_15->bp[VAR_12 >> VAR_8].pending) {
    VAR_12 |= VAR_6;
    continue;
   }
   VAR_15->bp[VAR_12 >> VAR_8].pending = 0;
  }
  VAR_17 = FUNC_2(VAR_15,
      VAR_18,
      &VAR_14, 0);

  if (!VAR_17) {
   VAR_12 |= VAR_6;
   continue;
  }
  if (*VAR_17 == 1 && !VAR_11->need_sync) {

   *VAR_17 = 0;
   FUNC_0(VAR_15, VAR_18, -1);
   FUNC_1(VAR_11, VAR_18);
  } else if (*VAR_17 && *VAR_17 <= 2) {
   *VAR_17 = 1;
   FUNC_3(VAR_15, VAR_18);
   VAR_11->allclean = 0;
  }
 }
 FUNC_11(&VAR_15->lock);
 for (VAR_12 = 0;
      VAR_12 < VAR_11->storage.file_pages
       && !FUNC_13(VAR_3, &VAR_11->flags);
      VAR_12++) {

  if (FUNC_14(VAR_11, VAR_12,
       VAR_0))

   break;
  if (FUNC_12(VAR_11, VAR_12,
          VAR_1)) {
   FUNC_16(VAR_11, VAR_11->storage.filemap[VAR_12], 0);
  }
 }

 done:
 if (VAR_11->allclean == 0)
  VAR_10->thread->timeout =
   VAR_10->bitmap_info.daemon_sleep;
 FUNC_8(&VAR_10->bitmap_info.mutex);
}
