
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union map_info {int ll; } ;
struct flakey_c {unsigned int start_time; unsigned int up_interval; unsigned int down_interval; scalar_t__ corrupt_bio_rw; scalar_t__ corrupt_bio_byte; int flags; } ;
struct dm_target {struct flakey_c* private; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct bio*,struct flakey_c*) ;
 scalar_t__ FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*,int ) ;
 int FUNC_3 (struct bio*,struct flakey_c*) ;
 int FUNC_4 (struct dm_target*,struct bio*) ;
 unsigned int VAR_7 ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct dm_target *VAR_8, struct bio *VAR_9,
        union map_info *VAR_10)
{
 struct flakey_c *VAR_11 = VAR_8->private;
 unsigned VAR_12;


 VAR_12 = (VAR_7 - VAR_11->start_time) / VAR_4;
 if (VAR_12 % (VAR_11->up_interval + VAR_11->down_interval) >= VAR_11->up_interval) {



  VAR_10->ll = 1;




  if (FUNC_1(VAR_9) == VAR_5)
   goto map_bio;




  if (FUNC_5(VAR_2, &VAR_11->flags)) {
   FUNC_2(VAR_9, 0);
   return VAR_1;
  }




  if (VAR_11->corrupt_bio_byte && (VAR_11->corrupt_bio_rw == VAR_6)) {
   if (FUNC_0(VAR_9, VAR_11))
    FUNC_3(VAR_9, VAR_11);
   goto map_bio;
  }




  return -VAR_3;
 }

map_bio:
 FUNC_4(VAR_8, VAR_9);

 return VAR_0;
}
