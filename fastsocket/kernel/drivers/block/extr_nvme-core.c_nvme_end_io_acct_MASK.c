
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gendisk {int part0; } ;
struct bio {TYPE_1__* bi_bdev; } ;
struct TYPE_2__ {struct gendisk* bd_disk; } ;


 int FUNC_0 (struct bio*) ;
 unsigned long VAR_0 ;
 int FUNC_1 (int *,int const) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int,int *,int ,unsigned long) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_6(struct bio *VAR_2, unsigned long VAR_3)
{
 struct gendisk *VAR_4 = VAR_2->bi_bdev->bd_disk;
 const int VAR_5 = FUNC_0(VAR_2);
 unsigned long VAR_6 = VAR_0 - VAR_3;
 int VAR_7 = FUNC_4();
 FUNC_3(VAR_7, &VAR_4->part0, VAR_1[VAR_5], VAR_6);
 FUNC_2(VAR_7, &VAR_4->part0);
 FUNC_1(&VAR_4->part0, VAR_5);
 FUNC_5();
}
