
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mddev {int pending_writes; } ;
struct md_rdev {scalar_t__ bdev; scalar_t__ meta_bdev; } ;
struct bio {int bi_end_io; struct md_rdev* bi_private; int bi_sector; scalar_t__ bi_bdev; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct bio*,struct page*,int,int ) ;
 struct bio* FUNC_2 (int ,int,struct mddev*) ;
 int FUNC_3 (int,struct bio*) ;
 int VAR_3 ;

void FUNC_4(struct mddev *VAR_4, struct md_rdev *VAR_5,
     sector_t VAR_6, int VAR_7, struct page *VAR_8)
{






 struct bio *VAR_9 = FUNC_2(VAR_1, 1, VAR_4);

 VAR_9->bi_bdev = VAR_5->meta_bdev ? VAR_5->meta_bdev : VAR_5->bdev;
 VAR_9->bi_sector = VAR_6;
 FUNC_1(VAR_9, VAR_8, VAR_7, 0);
 VAR_9->bi_private = VAR_5;
 VAR_9->bi_end_io = VAR_3;

 FUNC_0(&VAR_4->pending_writes);
 FUNC_3((VAR_2 & ~(1 << VAR_0)), VAR_9);
}
