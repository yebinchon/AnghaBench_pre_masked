
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r1bio {TYPE_2__** bios; } ;
struct pool_info {int raid_disks; } ;
struct TYPE_4__ {TYPE_1__* bi_io_vec; } ;
struct TYPE_3__ {scalar_t__ bv_page; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct r1bio*,void*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(void *VAR_1, void *VAR_2)
{
 struct pool_info *VAR_3 = VAR_2;
 int VAR_4,VAR_5;
 struct r1bio *VAR_6 = VAR_1;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  for (VAR_5 = VAR_3->raid_disks; VAR_5-- ;) {
   if (VAR_5 == 0 ||
       VAR_6->bios[VAR_5]->bi_io_vec[VAR_4].bv_page !=
       VAR_6->bios[0]->bi_io_vec[VAR_4].bv_page)
    FUNC_2(VAR_6->bios[VAR_5]->bi_io_vec[VAR_4].bv_page);
  }
 for (VAR_4=0 ; VAR_4 < VAR_3->raid_disks; VAR_4++)
  FUNC_0(VAR_6->bios[VAR_4]);

 FUNC_1(VAR_6, VAR_2);
}
