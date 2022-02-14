
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zram {int disksize; } ;
struct bio {int bi_sector; int bi_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1(struct zram *VAR_3, struct bio *VAR_4)
{
 if (FUNC_0(
  (VAR_4->bi_sector >= (VAR_3->disksize >> VAR_0)) ||
  (VAR_4->bi_sector & (VAR_2 - 1)) ||
  (VAR_4->bi_size & (VAR_1 - 1)))) {

  return 0;
 }


 return 1;
}
