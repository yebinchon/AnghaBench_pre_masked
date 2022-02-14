
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int dummy; } ;
struct dm_rq_target_io {struct mapped_device* md; } ;
struct dm_rq_clone_bio_info {struct dm_rq_target_io* tio; struct bio* orig; } ;
struct bio {int bi_destructor; struct dm_rq_clone_bio_info* bi_private; int bi_end_io; } ;


 int VAR_0 ;
 struct dm_rq_clone_bio_info* FUNC_0 (struct mapped_device*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct bio *VAR_3, struct bio *VAR_4,
     void *VAR_5)
{
 struct dm_rq_target_io *VAR_6 = VAR_5;
 struct mapped_device *VAR_7 = VAR_6->md;
 struct dm_rq_clone_bio_info *VAR_8 = FUNC_0(VAR_7);

 if (!VAR_8)
  return -VAR_0;

 VAR_8->orig = VAR_4;
 VAR_8->tio = VAR_6;
 VAR_3->bi_end_io = VAR_2;
 VAR_3->bi_private = VAR_8;
 VAR_3->bi_destructor = VAR_1;

 return 0;
}
