
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zram {int lock; } ;
struct bio_vec {int dummy; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct zram*,struct bio_vec*,int ,int,struct bio*) ;
 int FUNC_5 (struct zram*,struct bio_vec*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct zram *VAR_1, struct bio_vec *VAR_2, u32 VAR_3,
   int VAR_4, struct bio *VAR_5, int VAR_6)
{
 int VAR_7;

 if (VAR_6 == VAR_0) {
  FUNC_0(&VAR_1->lock);
  VAR_7 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
  FUNC_2(&VAR_1->lock);
 } else {
  FUNC_1(&VAR_1->lock);
  VAR_7 = FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4);
  FUNC_3(&VAR_1->lock);
 }

 return VAR_7;
}
