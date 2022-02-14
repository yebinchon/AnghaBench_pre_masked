
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stripe_head {int lock; int stripe_lock; TYPE_2__* dev; int state; scalar_t__ bm_seq; scalar_t__ sector; struct r5conf* raid_conf; } ;
struct r5conf {scalar_t__ seq_flush; TYPE_1__* mddev; } ;
struct bio {scalar_t__ bi_sector; int bi_size; struct bio* bi_next; } ;
typedef scalar_t__ sector_t ;
struct TYPE_4__ {scalar_t__ sector; int flags; struct bio* towrite; struct bio* toread; } ;
struct TYPE_3__ {scalar_t__ bitmap; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (char*,unsigned long long,unsigned long long,...) ;
 struct bio* FUNC_3 (struct bio*,scalar_t__) ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct stripe_head *VAR_4, struct bio *VAR_5, int VAR_6, int VAR_7)
{
 struct bio **VAR_8;
 struct r5conf *VAR_9 = VAR_4->raid_conf;
 int VAR_10=0;

 FUNC_2("adding bi b#%llu to stripe s#%llu\n",
  (unsigned long long)VAR_5->bi_sector,
  (unsigned long long)VAR_4->sector);
 FUNC_6(&VAR_4->lock);
 FUNC_7(&VAR_4->stripe_lock);
 if (VAR_7) {
  VAR_8 = &VAR_4->dev[VAR_6].towrite;
  if (*VAR_8 == ((void*)0))
   VAR_10 = 1;
 } else
  VAR_8 = &VAR_4->dev[VAR_6].toread;
 while (*VAR_8 && (*VAR_8)->bi_sector < VAR_5->bi_sector) {
  if ((*VAR_8)->bi_sector + ((*VAR_8)->bi_size >> 9) > VAR_5->bi_sector)
   goto overlap;
  VAR_8 = & (*VAR_8)->bi_next;
 }
 if (*VAR_8 && (*VAR_8)->bi_sector < VAR_5->bi_sector + ((VAR_5->bi_size)>>9))
  goto overlap;

 FUNC_0(*VAR_8 && VAR_5->bi_next && (*VAR_8) != VAR_5->bi_next);
 if (*VAR_8)
  VAR_5->bi_next = *VAR_8;
 *VAR_8 = VAR_5;
 FUNC_4(VAR_5);

 if (VAR_7) {

  sector_t VAR_11 = VAR_4->dev[VAR_6].sector;
  for (VAR_5=VAR_4->dev[VAR_6].towrite;
       VAR_11 < VAR_4->dev[VAR_6].sector + VAR_3 &&
        VAR_5 && VAR_5->bi_sector <= VAR_11;
       VAR_5 = FUNC_3(VAR_5, VAR_4->dev[VAR_6].sector)) {
   if (VAR_5->bi_sector + (VAR_5->bi_size>>9) >= VAR_11)
    VAR_11 = VAR_5->bi_sector + (VAR_5->bi_size>>9);
  }
  if (VAR_11 >= VAR_4->dev[VAR_6].sector + VAR_3)
   FUNC_5(VAR_0, &VAR_4->dev[VAR_6].flags);
 }

 FUNC_2("added bi b#%llu to stripe s#%llu, disk %d.\n",
  (unsigned long long)(*VAR_8)->bi_sector,
  (unsigned long long)VAR_4->sector, VAR_6);
 FUNC_9(&VAR_4->stripe_lock);
 FUNC_8(&VAR_4->lock);

 if (VAR_9->mddev->bitmap && VAR_10) {
  FUNC_1(VAR_9->mddev->bitmap, VAR_4->sector,
      VAR_3, 0);
  VAR_4->bm_seq = VAR_9->seq_flush+1;
  FUNC_5(VAR_2, &VAR_4->state);
 }
 return 1;

 overlap:
 FUNC_5(VAR_1, &VAR_4->dev[VAR_6].flags);
 FUNC_9(&VAR_4->stripe_lock);
 FUNC_8(&VAR_4->lock);
 return 0;
}
