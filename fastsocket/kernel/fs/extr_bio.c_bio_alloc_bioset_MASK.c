
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_vec {int dummy; } ;
struct bio_set {int front_pad; int bio_pool; } ;
struct bio {unsigned long bi_flags; int bi_max_vecs; struct bio_vec* bi_io_vec; struct bio_vec* bi_inline_vecs; } ;
typedef int gfp_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct bio*) ;
 struct bio_vec* FUNC_1 (int ,int,unsigned long*,struct bio_set*) ;
 int FUNC_2 (unsigned long) ;
 void* FUNC_3 (int ,int ) ;
 int FUNC_4 (void*,int ) ;
 scalar_t__ FUNC_5 (int) ;

struct bio *FUNC_6(gfp_t VAR_3, int VAR_4, struct bio_set *VAR_5)
{
 unsigned long VAR_6 = VAR_1;
 struct bio_vec *VAR_7 = ((void*)0);
 struct bio *VAR_8;
 void *VAR_9;

 VAR_9 = FUNC_3(VAR_5->bio_pool, VAR_3);
 if (FUNC_5(!VAR_9))
  return ((void*)0);
 VAR_8 = VAR_9 + VAR_5->front_pad;

 FUNC_0(VAR_8);

 if (FUNC_5(!VAR_4))
  goto out_set;

 if (VAR_4 <= VAR_0) {
  VAR_7 = VAR_8->bi_inline_vecs;
  VAR_4 = VAR_0;
 } else {
  VAR_7 = FUNC_1(VAR_3, VAR_4, &VAR_6, VAR_5);
  if (FUNC_5(!VAR_7))
   goto err_free;

  VAR_4 = FUNC_2(VAR_6);
 }
out_set:
 VAR_8->bi_flags |= VAR_6 << VAR_2;
 VAR_8->bi_max_vecs = VAR_4;
 VAR_8->bi_io_vec = VAR_7;
 return VAR_8;

err_free:
 FUNC_4(VAR_9, VAR_5->bio_pool);
 return ((void*)0);
}
