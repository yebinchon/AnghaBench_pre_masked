
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bitmap_storage {int file_pages; scalar_t__ sb_page; int * file; } ;
struct bitmap_page {int dummy; } ;
struct bitmap_counts {unsigned long chunks; int chunkshift; long pages; long missing_pages; int lock; struct bitmap_page* bp; } ;
struct bitmap {TYPE_3__* mddev; struct bitmap_counts counts; struct bitmap_storage storage; } ;
typedef int store ;
typedef int sector_t ;
typedef int bitmap_super_t ;
typedef int bitmap_counter_t ;
struct TYPE_6__ {long space; int chunksize; int external; scalar_t__ file; scalar_t__ offset; } ;
struct TYPE_7__ {TYPE_1__* pers; TYPE_2__ bitmap_info; } ;
struct TYPE_5__ {int (* quiesce ) (TYPE_3__*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 long FUNC_0 (unsigned long,int) ;
 unsigned long FUNC_1 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct bitmap_counts*,int,int) ;
 int FUNC_4 (struct bitmap*,int) ;
 int FUNC_5 (struct bitmap_storage*) ;
 int* FUNC_6 (struct bitmap_counts*,int,int*,int) ;
 int FUNC_7 (struct bitmap_counts*,int) ;
 int FUNC_8 (struct bitmap_storage*,unsigned long,int) ;
 int FUNC_9 (struct bitmap*) ;
 int FUNC_10 (int) ;
 struct bitmap_page* FUNC_11 (long,int ) ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (struct bitmap_storage*,int ,int) ;
 int FUNC_14 (int,unsigned long) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (struct bitmap*,int,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (TYPE_3__*,int) ;
 int FUNC_20 (TYPE_3__*,int) ;

int FUNC_21(struct bitmap *VAR_6, sector_t VAR_7,
    int VAR_8, int VAR_9)
{
 struct bitmap_storage VAR_10;
 struct bitmap_counts VAR_11;
 unsigned long VAR_12;
 sector_t VAR_13;
 sector_t VAR_14, VAR_15;
 int VAR_16;
 int VAR_17 = 0;
 long VAR_18;
 struct bitmap_page *VAR_19;

 if (VAR_8 == 0) {



  long VAR_20;
  long VAR_21 = VAR_6->mddev->bitmap_info.space;

  if (VAR_21 == 0) {



   VAR_20 = FUNC_0(VAR_6->counts.chunks, 8);
   if (!VAR_6->mddev->bitmap_info.external)
    VAR_20 += sizeof(bitmap_super_t);
   VAR_21 = FUNC_0(VAR_20, 512);
   VAR_6->mddev->bitmap_info.space = VAR_21;
  }
  VAR_16 = VAR_6->counts.chunkshift;
  VAR_16--;
  do {

   VAR_16++;
   VAR_12 = FUNC_1(VAR_7, 1 << VAR_16);
   VAR_20 = FUNC_0(VAR_12, 8);
   if (!VAR_6->mddev->bitmap_info.external)
    VAR_20 += sizeof(bitmap_super_t);
  } while (VAR_20 > (VAR_21 << 9));
 } else
  VAR_16 = FUNC_10(~VAR_8) - VAR_0;

 VAR_12 = FUNC_1(VAR_7, 1 << VAR_16);
 FUNC_13(&VAR_10, 0, sizeof(VAR_10));
 if (VAR_6->mddev->bitmap_info.offset || VAR_6->mddev->bitmap_info.file)
  VAR_17 = FUNC_8(&VAR_10, VAR_12,
        !VAR_6->mddev->bitmap_info.external);
 if (VAR_17)
  goto err;

 VAR_18 = FUNC_0(VAR_12, VAR_5);

 VAR_19 = FUNC_11(VAR_18 * sizeof(*VAR_19), VAR_3);
 VAR_17 = -VAR_2;
 if (!VAR_19) {
  FUNC_5(&VAR_10);
  goto err;
 }

 if (!VAR_9)
  VAR_6->mddev->pers->quiesce(VAR_6->mddev, 1);

 VAR_10.file = VAR_6->storage.file;
 VAR_6->storage.file = ((void*)0);

 if (VAR_10.sb_page && VAR_6->storage.sb_page)
  FUNC_12(FUNC_15(VAR_10.sb_page),
         FUNC_15(VAR_6->storage.sb_page),
         sizeof(bitmap_super_t));
 FUNC_5(&VAR_6->storage);
 VAR_6->storage = VAR_10;

 VAR_11 = VAR_6->counts;
 VAR_6->counts.bp = VAR_19;
 VAR_6->counts.pages = VAR_18;
 VAR_6->counts.missing_pages = VAR_18;
 VAR_6->counts.chunkshift = VAR_16;
 VAR_6->counts.chunks = VAR_12;
 VAR_6->mddev->bitmap_info.chunksize = 1 << (VAR_16 +
           VAR_0);

 VAR_7 = FUNC_14(VAR_11.chunks << VAR_11.chunkshift,
       VAR_12 << VAR_16);

 FUNC_17(&VAR_6->counts.lock);
 for (VAR_13 = 0; VAR_13 < VAR_7; ) {
  bitmap_counter_t *VAR_22, *VAR_23;
  int VAR_24;

  VAR_22 = FUNC_6(&VAR_11, VAR_13,
          &VAR_14, 0);
  VAR_24 = VAR_22 && FUNC_2(*VAR_22);

  if (VAR_24) {
   VAR_23 = FUNC_6(&VAR_6->counts, VAR_13,
           &VAR_15, 1);
   if (*VAR_23 == 0) {

    sector_t VAR_25 = VAR_13 + VAR_15;
    sector_t VAR_26 = VAR_13 >> VAR_16;
    VAR_26 <<= VAR_16;
    while (VAR_26 < VAR_25) {
     FUNC_4(VAR_6, VAR_13);
     VAR_26 += 1 << VAR_16;
    }
    *VAR_23 = 2;
    FUNC_3(&VAR_6->counts,
        VAR_13, 1);
    FUNC_7(&VAR_6->counts,
         VAR_13);
   }
   *VAR_23 |= VAR_4;
   if (VAR_15 < VAR_14)
    VAR_14 = VAR_15;
  }
  VAR_13 += VAR_14;
 }

 if (!VAR_9) {
  int VAR_27;
  while (VAR_13 < (VAR_12 << VAR_16)) {
   bitmap_counter_t *VAR_28;
   VAR_28 = FUNC_6(&VAR_6->counts, VAR_13,
       &VAR_15, 1);
   if (VAR_28) {



    if (*VAR_28 == 0) {
     *VAR_28 = VAR_4 | 2;
     FUNC_3(&VAR_6->counts,
         VAR_13, 1);
     FUNC_7(&VAR_6->counts,
          VAR_13);
    }
   }
   VAR_13 += VAR_15;
  }
  for (VAR_27 = 0; VAR_27 < VAR_6->storage.file_pages; VAR_27++)
   FUNC_16(VAR_6, VAR_27, VAR_1);
 }
 FUNC_18(&VAR_6->counts.lock);

 if (!VAR_9) {
  FUNC_9(VAR_6);
  VAR_6->mddev->pers->quiesce(VAR_6->mddev, 0);
 }
 VAR_17 = 0;
err:
 return VAR_17;
}
