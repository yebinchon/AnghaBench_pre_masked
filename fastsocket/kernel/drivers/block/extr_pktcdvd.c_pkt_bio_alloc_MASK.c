
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_vec {int dummy; } ;
struct bio {int bi_max_vecs; int bi_destructor; struct bio_vec* bi_io_vec; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio*) ;
 struct bio_vec* FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct bio*) ;
 struct bio* FUNC_3 (int,int ) ;
 int VAR_1 ;

__attribute__((used)) static struct bio *FUNC_4(int VAR_2)
{
 struct bio_vec *VAR_3 = ((void*)0);
 struct bio *VAR_4;

 VAR_4 = FUNC_3(sizeof(struct bio), VAR_0);
 if (!VAR_4)
  goto no_bio;
 FUNC_0(VAR_4);

 VAR_3 = FUNC_1(VAR_2, sizeof(struct bio_vec), VAR_0);
 if (!VAR_3)
  goto no_bvl;

 VAR_4->bi_max_vecs = VAR_2;
 VAR_4->bi_io_vec = VAR_3;
 VAR_4->bi_destructor = VAR_1;

 return VAR_4;

 no_bvl:
 FUNC_2(VAR_4);
 no_bio:
 return ((void*)0);
}
