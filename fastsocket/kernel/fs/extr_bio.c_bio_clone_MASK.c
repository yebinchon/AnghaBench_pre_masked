
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int bi_destructor; int bi_max_vecs; } ;
typedef int gfp_t ;


 int FUNC_0 (struct bio*,struct bio*) ;
 struct bio* FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio*,struct bio*,int ,int ) ;
 int FUNC_4 (struct bio*) ;
 int VAR_1 ;

struct bio *FUNC_5(struct bio *VAR_2, gfp_t VAR_3)
{
 struct bio *VAR_4 = FUNC_1(VAR_3, VAR_2->bi_max_vecs, VAR_1);

 if (!VAR_4)
  return ((void*)0);

 VAR_4->bi_destructor = VAR_0;
 FUNC_0(VAR_4, VAR_2);

 if (FUNC_2(VAR_2)) {
  int VAR_5;

  VAR_5 = FUNC_3(VAR_4, VAR_2, VAR_3, VAR_1);

  if (VAR_5 < 0) {
   FUNC_4(VAR_4);
   return ((void*)0);
  }
 }

 return VAR_4;
}
