
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_set {int bio_pool; scalar_t__ front_pad; } ;
struct bio {int bi_io_vec; } ;


 int FUNC_0 (struct bio*) ;
 scalar_t__ FUNC_1 (struct bio*) ;
 scalar_t__ FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio*,struct bio_set*) ;
 int FUNC_4 (struct bio_set*,int ,int ) ;
 int FUNC_5 (void*,int ) ;

void FUNC_6(struct bio *VAR_0, struct bio_set *VAR_1)
{
 void *VAR_2;

 if (FUNC_1(VAR_0))
  FUNC_4(VAR_1, VAR_0->bi_io_vec, FUNC_0(VAR_0));

 if (FUNC_2(VAR_0))
  FUNC_3(VAR_0, VAR_1);




 VAR_2 = VAR_0;
 if (VAR_1->front_pad)
  VAR_2 -= VAR_1->front_pad;

 FUNC_5(VAR_2, VAR_1->bio_pool);
}
