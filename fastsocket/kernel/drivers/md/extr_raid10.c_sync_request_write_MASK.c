
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct r10conf {int copies; TYPE_5__* mirrors; } ;
struct r10bio {int sectors; int remaining; TYPE_3__* devs; } ;
struct mddev {int recovery; int resync_mismatches; struct r10conf* private; } ;
struct bio {int bi_flags; scalar_t__ bi_end_io; int bi_vcnt; int bi_size; TYPE_2__* bi_io_vec; int bi_bdev; int bi_sector; struct r10bio* bi_private; int bi_rw; int * bi_next; scalar_t__ bi_phys_segments; scalar_t__ bi_idx; } ;
struct TYPE_10__ {TYPE_1__* replacement; TYPE_4__* rdev; } ;
struct TYPE_9__ {int bdev; scalar_t__ data_offset; int nr_pending; } ;
struct TYPE_8__ {int devnum; struct bio* bio; struct bio* repl_bio; int addr; } ;
struct TYPE_7__ {int bv_len; int bv_page; scalar_t__ bv_offset; } ;
struct TYPE_6__ {int bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct bio*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 (struct mddev*,int,int) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct r10bio*) ;
 scalar_t__ FUNC_12 (int,int*) ;

__attribute__((used)) static void FUNC_13(struct mddev *VAR_8, struct r10bio *VAR_9)
{
 struct r10conf *VAR_10 = VAR_8->private;
 int VAR_11, VAR_12;
 struct bio *VAR_13, *VAR_14;
 int VAR_15;

 FUNC_3(&VAR_9->remaining, 1);


 for (VAR_11=0; VAR_11<VAR_10->copies; VAR_11++)
  if (FUNC_12(VAR_1, &VAR_9->devs[VAR_11].bio->bi_flags))
   break;

 if (VAR_11 == VAR_10->copies)
  goto done;

 VAR_12 = VAR_11;
 VAR_14 = VAR_9->devs[VAR_11].bio;

 VAR_15 = (VAR_9->sectors + (VAR_4 >> 9) - 1) >> (VAR_3 - 9);

 for (VAR_11=0 ; VAR_11 < VAR_10->copies ; VAR_11++) {
  int VAR_16, VAR_17;

  VAR_13 = VAR_9->devs[VAR_11].bio;

  if (VAR_13->bi_end_io != VAR_6)
   continue;
  if (VAR_11 == VAR_12)
   continue;
  if (FUNC_12(VAR_1, &VAR_9->devs[VAR_11].bio->bi_flags)) {




   int VAR_18 = VAR_9->sectors;
   for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++) {
    int VAR_19 = VAR_4;
    if (VAR_18 < (VAR_19 / 512))
     VAR_19 = VAR_18 * 512;
    if (FUNC_8(FUNC_10(VAR_14->bi_io_vec[VAR_16].bv_page),
        FUNC_10(VAR_13->bi_io_vec[VAR_16].bv_page),
        VAR_19))
     break;
    VAR_18 -= VAR_19/512;
   }
   if (VAR_16 == VAR_15)
    continue;
   FUNC_0(VAR_9->sectors, &VAR_8->resync_mismatches);
   if (FUNC_12(VAR_2, &VAR_8->recovery))

    continue;
  }





  VAR_13->bi_vcnt = VAR_15;
  VAR_13->bi_size = VAR_9->sectors << 9;
  VAR_13->bi_idx = 0;
  VAR_13->bi_phys_segments = 0;
  VAR_13->bi_flags &= ~(VAR_0 - 1);
  VAR_13->bi_flags |= 1 << VAR_1;
  VAR_13->bi_next = ((void*)0);
  VAR_13->bi_rw = VAR_5;
  VAR_13->bi_private = VAR_9;
  VAR_13->bi_sector = VAR_9->devs[VAR_11].addr;

  for (VAR_16=0; VAR_16 < VAR_15 ; VAR_16++) {
   VAR_13->bi_io_vec[VAR_16].bv_offset = 0;
   VAR_13->bi_io_vec[VAR_16].bv_len = VAR_4;

   FUNC_9(FUNC_10(VAR_13->bi_io_vec[VAR_16].bv_page),
          FUNC_10(VAR_14->bi_io_vec[VAR_16].bv_page),
          VAR_4);
  }
  VAR_13->bi_end_io = VAR_7;

  VAR_17 = VAR_9->devs[VAR_11].devnum;
  FUNC_2(&VAR_10->mirrors[VAR_17].rdev->nr_pending);
  FUNC_2(&VAR_9->remaining);
  FUNC_7(VAR_10->mirrors[VAR_17].rdev->bdev, FUNC_4(VAR_13));

  VAR_13->bi_sector += VAR_10->mirrors[VAR_17].rdev->data_offset;
  VAR_13->bi_bdev = VAR_10->mirrors[VAR_17].rdev->bdev;
  FUNC_5(VAR_13);
 }




 for (VAR_11 = 0; VAR_11 < VAR_10->copies; VAR_11++) {
  int VAR_20, VAR_21;

  VAR_13 = VAR_9->devs[VAR_11].repl_bio;
  if (!VAR_13 || !VAR_13->bi_end_io)
   continue;
  if (VAR_9->devs[VAR_11].bio->bi_end_io != VAR_7
      && VAR_9->devs[VAR_11].bio != VAR_14)
   for (VAR_20 = 0; VAR_20 < VAR_15; VAR_20++)
    FUNC_9(FUNC_10(VAR_13->bi_io_vec[VAR_20].bv_page),
           FUNC_10(VAR_14->bi_io_vec[VAR_20].bv_page),
           VAR_4);
  VAR_21 = VAR_9->devs[VAR_11].devnum;
  FUNC_2(&VAR_9->remaining);
  FUNC_7(VAR_10->mirrors[VAR_21].replacement->bdev,
        FUNC_4(VAR_13));
  FUNC_5(VAR_13);
 }

done:
 if (FUNC_1(&VAR_9->remaining)) {
  FUNC_6(VAR_8, VAR_9->sectors, 1);
  FUNC_11(VAR_9);
 }
}
