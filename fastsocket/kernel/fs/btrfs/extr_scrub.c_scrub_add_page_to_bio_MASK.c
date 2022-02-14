
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scrub_page {int physical; scalar_t__ logical; int page; struct scrub_block* sblock; } ;
struct scrub_dev {int curr; int first_free; scalar_t__ pages_per_bio; TYPE_1__* dev; struct scrub_bio** bios; int list_wait; int list_lock; } ;
struct scrub_block {int outstanding_pages; } ;
struct scrub_bio {int next_free; int page_count; int physical; scalar_t__ logical; struct bio* bio; struct scrub_page** pagev; scalar_t__ err; } ;
struct bio {int bi_sector; int bi_bdev; int bi_end_io; struct scrub_bio* bi_private; } ;
struct TYPE_2__ {int bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct bio*,int ,int,int ) ;
 struct bio* FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct bio*) ;
 int VAR_4 ;
 int FUNC_4 (struct scrub_block*) ;
 int FUNC_5 (struct scrub_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static int FUNC_9(struct scrub_dev *VAR_5,
     struct scrub_page *VAR_6)
{
 struct scrub_block *VAR_7 = VAR_6->sblock;
 struct scrub_bio *VAR_8;
 int VAR_9;

again:



 while (VAR_5->curr == -1) {
  FUNC_6(&VAR_5->list_lock);
  VAR_5->curr = VAR_5->first_free;
  if (VAR_5->curr != -1) {
   VAR_5->first_free = VAR_5->bios[VAR_5->curr]->next_free;
   VAR_5->bios[VAR_5->curr]->next_free = -1;
   VAR_5->bios[VAR_5->curr]->page_count = 0;
   FUNC_7(&VAR_5->list_lock);
  } else {
   FUNC_7(&VAR_5->list_lock);
   FUNC_8(VAR_5->list_wait, VAR_5->first_free != -1);
  }
 }
 VAR_8 = VAR_5->bios[VAR_5->curr];
 if (VAR_8->page_count == 0) {
  struct bio *VAR_10;

  VAR_8->physical = VAR_6->physical;
  VAR_8->logical = VAR_6->logical;
  VAR_10 = VAR_8->bio;
  if (!VAR_10) {
   VAR_10 = FUNC_2(VAR_2, VAR_5->pages_per_bio);
   if (!VAR_10)
    return -VAR_1;
   VAR_8->bio = VAR_10;
  }

  VAR_10->bi_private = VAR_8;
  VAR_10->bi_end_io = VAR_4;
  VAR_10->bi_bdev = VAR_5->dev->bdev;
  VAR_10->bi_sector = VAR_6->physical >> 9;
  VAR_8->err = 0;
 } else if (VAR_8->physical + VAR_8->page_count * VAR_3 !=
     VAR_6->physical ||
     VAR_8->logical + VAR_8->page_count * VAR_3 !=
     VAR_6->logical) {
  FUNC_5(VAR_5);
  goto again;
 }

 VAR_8->pagev[VAR_8->page_count] = VAR_6;
 VAR_9 = FUNC_1(VAR_8->bio, VAR_6->page, VAR_3, 0);
 if (VAR_9 != VAR_3) {
  if (VAR_8->page_count < 1) {
   FUNC_3(VAR_8->bio);
   VAR_8->bio = ((void*)0);
   return -VAR_0;
  }
  FUNC_5(VAR_5);
  goto again;
 }

 FUNC_4(VAR_7);
 FUNC_0(&VAR_7->outstanding_pages);
 VAR_8->page_count++;
 if (VAR_8->page_count == VAR_5->pages_per_bio)
  FUNC_5(VAR_5);

 return 0;
}
