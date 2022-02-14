
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union map_info {unsigned int ll; } ;
struct flakey_c {scalar_t__ corrupt_bio_rw; scalar_t__ corrupt_bio_byte; } ;
struct dm_target {struct flakey_c* private; } ;
struct bio {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct bio*,struct flakey_c*) ;
 scalar_t__ FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*,struct flakey_c*) ;

__attribute__((used)) static int FUNC_3(struct dm_target *VAR_1, struct bio *VAR_2,
    int VAR_3, union map_info *VAR_4)
{
 struct flakey_c *VAR_5 = VAR_1->private;
 unsigned VAR_6 = VAR_4->ll;





 if (VAR_5->corrupt_bio_byte && !VAR_3 && VAR_6 &&
     (FUNC_1(VAR_2) == VAR_0) && (VAR_5->corrupt_bio_rw == VAR_0) &&
     FUNC_0(VAR_2, VAR_5))
  FUNC_2(VAR_2, VAR_5);

 return VAR_3;
}
