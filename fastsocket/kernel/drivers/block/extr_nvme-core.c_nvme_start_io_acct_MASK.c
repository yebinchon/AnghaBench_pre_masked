
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gendisk {int part0; } ;
struct bio {TYPE_1__* bi_bdev; } ;
struct TYPE_2__ {struct gendisk* bd_disk; } ;


 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*) ;
 int * VAR_0 ;
 int FUNC_2 (int *,int const) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int,int *,int ,int ) ;
 int FUNC_5 (int,int *,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_8(struct bio *VAR_2)
{
 struct gendisk *VAR_3 = VAR_2->bi_bdev->bd_disk;
 const int VAR_4 = FUNC_0(VAR_2);
 int VAR_5 = FUNC_6();
 FUNC_3(VAR_5, &VAR_3->part0);
 FUNC_5(VAR_5, &VAR_3->part0, VAR_0[VAR_4]);
 FUNC_4(VAR_5, &VAR_3->part0, VAR_1[VAR_4], FUNC_1(VAR_2));
 FUNC_2(&VAR_3->part0, VAR_4);
 FUNC_7();
}
