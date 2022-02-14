
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int bi_sector; int bi_size; struct bio* bi_private; } ;


 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*) ;

__attribute__((used)) static void FUNC_2(struct bio *VAR_0, int VAR_1)
{
 struct bio *VAR_2 = VAR_0->bi_private;

 VAR_2->bi_size = VAR_0->bi_size;
 VAR_2->bi_sector = VAR_0->bi_sector;

 FUNC_1(VAR_0);

 FUNC_0(VAR_2);
}
