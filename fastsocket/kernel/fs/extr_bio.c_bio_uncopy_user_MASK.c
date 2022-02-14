
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_map_data {int is_our_pages; int nr_sgvecs; int sgvecs; int iovecs; } ;
struct bio {struct bio_map_data* bi_private; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct bio*,int ,int ,int ,int,int ,int ) ;
 scalar_t__ FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*,int ) ;
 int FUNC_3 (struct bio_map_data*) ;
 int FUNC_4 (struct bio*) ;

int FUNC_5(struct bio *VAR_2)
{
 struct bio_map_data *VAR_3 = VAR_2->bi_private;
 int VAR_4 = 0;

 if (!FUNC_2(VAR_2, VAR_0))
  VAR_4 = FUNC_0(VAR_2, VAR_3->iovecs, VAR_3->sgvecs,
         VAR_3->nr_sgvecs, FUNC_1(VAR_2) == VAR_1,
         0, VAR_3->is_our_pages);
 FUNC_3(VAR_3);
 FUNC_4(VAR_2);
 return VAR_4;
}
