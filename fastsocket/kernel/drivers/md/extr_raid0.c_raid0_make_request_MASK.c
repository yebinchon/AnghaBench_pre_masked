
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strip_zone {unsigned int dev_start; } ;
struct mddev {unsigned int chunk_sectors; int private; } ;
struct md_rdev {unsigned int data_offset; int bdev; } ;
struct bio {int bi_rw; unsigned int bi_sector; int bi_vcnt; scalar_t__ bi_idx; int bi_bdev; } ;
struct bio_pair {struct bio bio2; struct bio bio1; } ;
typedef unsigned int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bio*,int ) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio_pair*) ;
 int FUNC_4 (struct bio*) ;
 struct bio_pair* FUNC_5 (struct bio*,unsigned int) ;
 int FUNC_6 (int ) ;
 struct strip_zone* FUNC_7 (int ,unsigned int*) ;
 int FUNC_8 (struct bio*) ;
 int FUNC_9 (struct mddev*,unsigned int,struct bio*) ;
 int FUNC_10 (unsigned int) ;
 scalar_t__ FUNC_11 (int ) ;
 struct md_rdev* FUNC_12 (struct mddev*,struct strip_zone*,unsigned int,unsigned int*) ;
 int FUNC_13 (struct mddev*,struct bio*) ;
 int FUNC_14 (struct mddev*) ;
 int FUNC_15 (char*,int ,unsigned int,unsigned long long,int) ;
 unsigned int FUNC_16 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static int FUNC_18(struct mddev *VAR_2, struct bio *VAR_3)
{
 unsigned int VAR_4;
 sector_t VAR_5;
 struct strip_zone *VAR_6;
 struct md_rdev *VAR_7;

 if (FUNC_17(VAR_3->bi_rw & VAR_1)) {
  FUNC_13(VAR_2, VAR_3);
  return 0;
 }

 VAR_4 = VAR_2->chunk_sectors;
 if (FUNC_17(!FUNC_9(VAR_2, VAR_4, VAR_3))) {
  sector_t VAR_8 = VAR_3->bi_sector;
  struct bio_pair *VAR_9;

  if ((VAR_3->bi_vcnt != 1 && VAR_3->bi_vcnt != 0) ||
      VAR_3->bi_idx != 0)
   goto bad_map;



  if (FUNC_11(FUNC_10(VAR_4)))
   VAR_9 = FUNC_5(VAR_3, VAR_4 - (VAR_8 &
          (VAR_4-1)));
  else
   VAR_9 = FUNC_5(VAR_3, VAR_4 -
           FUNC_16(VAR_8, VAR_4));
  if (FUNC_18(VAR_2, &VAR_9->bio1))
   FUNC_8(&VAR_9->bio1);
  if (FUNC_18(VAR_2, &VAR_9->bio2))
   FUNC_8(&VAR_9->bio2);

  FUNC_3(VAR_9);
  return 0;
 }

 VAR_5 = VAR_3->bi_sector;
 VAR_6 = FUNC_7(VAR_2->private, &VAR_5);
 VAR_7 = FUNC_12(VAR_2, VAR_6, VAR_3->bi_sector,
        &VAR_5);
 VAR_3->bi_bdev = VAR_7->bdev;
 VAR_3->bi_sector = VAR_5 + VAR_6->dev_start +
  VAR_7->data_offset;

 if (FUNC_17((VAR_3->bi_rw & VAR_0) &&
       !FUNC_6(FUNC_0(VAR_3->bi_bdev)))) {

  FUNC_1(VAR_3, 0);
  return 0;
 }




 return 1;

bad_map:
 FUNC_15("md/raid0:%s: make_request bug: can't convert block across chunks"
        " or bigger than %dk %llu %d\n",
        FUNC_14(VAR_2), VAR_4 / 2,
        (unsigned long long)VAR_3->bi_sector, FUNC_4(VAR_3) / 2);

 FUNC_2(VAR_3);
 return 0;
}
