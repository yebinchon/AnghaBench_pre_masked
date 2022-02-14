
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int bio_set; } ;
struct bio {int bi_destructor; int bi_max_vecs; } ;
typedef int gfp_t ;


 int FUNC_0 (struct bio*,struct bio*) ;
 struct bio* FUNC_1 (int ,int ,int ) ;
 struct bio* FUNC_2 (struct bio*,int ) ;
 scalar_t__ FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*,struct bio*,int ,int ) ;
 int FUNC_5 (struct bio*) ;
 int VAR_0 ;

struct bio *FUNC_6(struct bio *VAR_1, gfp_t VAR_2,
       struct mddev *VAR_3)
{
 struct bio *VAR_4;
 struct mddev **VAR_5;

 if (!VAR_3 || !VAR_3->bio_set)
  return FUNC_2(VAR_1, VAR_2);

 VAR_4 = FUNC_1(VAR_2, VAR_1->bi_max_vecs,
        VAR_3->bio_set);
 if (!VAR_4)
  return ((void*)0);
 VAR_5 = (void*)VAR_4;
 VAR_5[-1] = VAR_3;
 VAR_4->bi_destructor = VAR_0;
 FUNC_0(VAR_4, VAR_1);
 if (FUNC_3(VAR_1)) {
  int VAR_6;

  VAR_6 = FUNC_4(VAR_4, VAR_1, VAR_2, VAR_3->bio_set);

  if (VAR_6 < 0) {
   FUNC_5(VAR_4);
   return ((void*)0);
  }
 }

 return VAR_4;
}
