
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int bi_bdev; scalar_t__ bi_size; struct bio* bi_next; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct bio*,int ) ;
 int FUNC_2 (int ,struct bio*) ;

__attribute__((used)) static void FUNC_3(struct bio *VAR_0)
{
 struct bio *VAR_1 = VAR_0;
 while (VAR_1) {

  VAR_0 = VAR_1->bi_next;
  VAR_1->bi_next = ((void*)0);
  VAR_1->bi_size = 0;
  FUNC_2(FUNC_0(VAR_1->bi_bdev),
      VAR_1);
  FUNC_1(VAR_1, 0);
  VAR_1 = VAR_0;
 }
}
