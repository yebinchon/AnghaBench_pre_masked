
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct r10conf {TYPE_1__* mirrors; } ;
struct r10bio {int sectors; int sector; TYPE_3__* devs; struct mddev* mddev; struct bio* master_bio; } ;
struct mddev {struct r10conf* private; } ;
struct TYPE_5__ {int shift; } ;
struct md_rdev {int bdev; TYPE_2__ badblocks; } ;
struct bio {int bi_sector; int bi_bdev; } ;
typedef int sector_t ;
struct TYPE_6__ {size_t devnum; int addr; } ;
struct TYPE_4__ {struct md_rdev* rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bio* FUNC_0 (struct bio*,int ,struct mddev*) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct r10bio*,struct md_rdev*) ;
 int FUNC_3 (struct bio*,int,int) ;
 scalar_t__ FUNC_4 (struct md_rdev*,int,int,int ) ;
 scalar_t__ FUNC_5 (int ,struct bio*) ;

__attribute__((used)) static int FUNC_6(struct r10bio *VAR_2, int VAR_3)
{
 struct bio *VAR_4 = VAR_2->master_bio;
 struct mddev *VAR_5 = VAR_2->mddev;
 struct r10conf *VAR_6 = VAR_5->private;
 struct md_rdev *VAR_7 = VAR_6->mirrors[VAR_2->devs[VAR_3].devnum].rdev;
 int VAR_8;
 sector_t VAR_9;
 int VAR_10;
 int VAR_11 = VAR_2->sectors;
 int VAR_12 = 1;

 if (VAR_7->badblocks.shift < 0)
  return 0;

 VAR_8 = 1 << VAR_7->badblocks.shift;
 VAR_9 = VAR_2->sector;
 VAR_10 = ((VAR_2->sector + VAR_8)
     & ~(sector_t)(VAR_8 - 1))
  - VAR_9;

 while (VAR_11) {
  struct bio *VAR_13;
  if (VAR_10 > VAR_11)
   VAR_10 = VAR_11;

  VAR_13 = FUNC_0(VAR_4, VAR_0, VAR_5);
  FUNC_3(VAR_13, VAR_9 - VAR_4->bi_sector, VAR_10);
  VAR_13->bi_sector = (VAR_2->devs[VAR_3].addr+
       FUNC_2(VAR_2, VAR_7) +
       (VAR_9 - VAR_2->sector));
  VAR_13->bi_bdev = VAR_7->bdev;
  if (FUNC_5(VAR_1, VAR_13) == 0)

   VAR_12 = FUNC_4(VAR_7, VAR_9,
      VAR_10, 0)
    && VAR_12;

  FUNC_1(VAR_13);
  VAR_11 -= VAR_10;
  VAR_9 += VAR_10;
  VAR_10 = VAR_8;
 }
 return VAR_12;
}
