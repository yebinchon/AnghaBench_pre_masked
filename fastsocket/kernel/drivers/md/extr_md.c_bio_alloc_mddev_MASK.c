
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int bio_set; } ;
struct bio {int bi_destructor; } ;
typedef int gfp_t ;


 struct bio* FUNC_0 (int ,int) ;
 struct bio* FUNC_1 (int ,int,int ) ;
 int VAR_0 ;

struct bio *FUNC_2(gfp_t VAR_1, int VAR_2,
       struct mddev *VAR_3)
{
 struct bio *VAR_4;
 struct mddev **VAR_5;

 if (!VAR_3 || !VAR_3->bio_set)
  return FUNC_0(VAR_1, VAR_2);

 VAR_4 = FUNC_1(VAR_1, VAR_2,
        VAR_3->bio_set);
 if (!VAR_4)
  return ((void*)0);
 VAR_5 = (void*)VAR_4;
 VAR_5[-1] = VAR_3;
 VAR_4->bi_destructor = VAR_0;
 return VAR_4;
}
