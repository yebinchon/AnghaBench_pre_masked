
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {struct bio* bi_next; int * bi_bdev; int bi_max_vecs; } ;
typedef int gfp_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct bio*,struct bio*) ;
 int FUNC_2 (struct bio*) ;
 struct bio* FUNC_3 (int ,int ) ;

__attribute__((used)) static struct bio *FUNC_4(struct bio *VAR_1, gfp_t VAR_2)
{
 struct bio *VAR_3, *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);

 while (VAR_1) {
  VAR_3 = FUNC_3(VAR_2, VAR_1->bi_max_vecs);
  if (!VAR_3)
   goto err_out;

  FUNC_1(VAR_3, VAR_1);
  VAR_3->bi_bdev = ((void*)0);
  VAR_2 &= ~VAR_0;
  VAR_3->bi_next = ((void*)0);

  if (!VAR_4)
   VAR_4 = VAR_5 = VAR_3;
  else {
   VAR_5->bi_next = VAR_3;
   VAR_5 = VAR_3;
  }

  VAR_1 = VAR_1->bi_next;
 }

 return VAR_4;

err_out:
 FUNC_0("bio_chain_clone with err\n");
 FUNC_2(VAR_4);
 return ((void*)0);
}
