
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct multipath_info {TYPE_1__* rdev; } ;
struct bio {int bi_rw; struct multipath_bh* bi_private; int bi_end_io; int bi_bdev; int bi_sector; } ;
struct multipath_bh {scalar_t__ path; struct bio bio; struct mddev* mddev; struct bio* master_bio; } ;
struct mpconf {struct multipath_info* multipaths; int pool; } ;
struct mddev {struct mpconf* private; } ;
struct TYPE_2__ {int bdev; scalar_t__ data_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bio*,int ) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct mddev*,struct bio*) ;
 struct multipath_bh* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct multipath_bh*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (struct mpconf*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct mddev *VAR_5, struct bio * VAR_6)
{
 struct mpconf *VAR_7 = VAR_5->private;
 struct multipath_bh * VAR_8;
 struct multipath_info *VAR_9;

 if (FUNC_6(VAR_6->bi_rw & VAR_0)) {
  FUNC_2(VAR_5, VAR_6);
  return 0;
 }

 VAR_8 = FUNC_3(VAR_7->pool, VAR_3);

 VAR_8->master_bio = VAR_6;
 VAR_8->mddev = VAR_5;

 VAR_8->path = FUNC_5(VAR_7);
 if (VAR_8->path < 0) {
  FUNC_0(VAR_6, -VAR_2);
  FUNC_4(VAR_8, VAR_7->pool);
  return 0;
 }
 VAR_9 = VAR_7->multipaths + VAR_8->path;

 VAR_8->bio = *VAR_6;
 VAR_8->bio.bi_sector += VAR_9->rdev->data_offset;
 VAR_8->bio.bi_bdev = VAR_9->rdev->bdev;
 VAR_8->bio.bi_rw |= (1 << VAR_1);
 VAR_8->bio.bi_end_io = VAR_4;
 VAR_8->bio.bi_private = VAR_8;
 FUNC_1(&VAR_8->bio);
 return 0;
}
