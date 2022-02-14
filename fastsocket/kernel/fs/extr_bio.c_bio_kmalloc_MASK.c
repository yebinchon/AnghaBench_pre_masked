
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_vec {int dummy; } ;
struct bio {int bi_flags; int bi_max_vecs; int bi_destructor; int bi_inline_vecs; int bi_io_vec; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bio*) ;
 int VAR_2 ;
 struct bio* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int) ;

struct bio *FUNC_3(gfp_t VAR_3, int VAR_4)
{
 struct bio *VAR_5;

 VAR_5 = FUNC_1(sizeof(struct bio) + VAR_4 * sizeof(struct bio_vec),
        VAR_3);
 if (FUNC_2(!VAR_5))
  return ((void*)0);

 FUNC_0(VAR_5);
 VAR_5->bi_flags |= VAR_0 << VAR_1;
 VAR_5->bi_max_vecs = VAR_4;
 VAR_5->bi_io_vec = VAR_5->bi_inline_vecs;
 VAR_5->bi_destructor = VAR_2;

 return VAR_5;
}
