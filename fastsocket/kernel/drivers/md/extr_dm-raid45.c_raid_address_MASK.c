
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int chunk_shift; int data_devs; int pi; int raid_devs; int io_inv_mask; TYPE_1__* raid_type; } ;
struct raid_set {TYPE_2__ set; } ;
struct raid_address {int di; int pi; int key; } ;
typedef int sector_t ;
struct TYPE_3__ {int level; int algorithm; } ;


 int FUNC_0 () ;







 void* FUNC_1 (int,int) ;

__attribute__((used)) static struct raid_address *FUNC_2(struct raid_set *VAR_0, sector_t VAR_1,
      struct raid_address *VAR_2)
{
 sector_t VAR_3, VAR_4;






 VAR_3 = VAR_1 >> VAR_0->set.chunk_shift;
 VAR_2->di = FUNC_1(VAR_3, VAR_0->set.data_devs);

 switch (VAR_0->set.raid_type->level) {
 case 131:
  VAR_2->pi = VAR_0->set.pi;
  goto check_shift_di;
 case 130:
  VAR_4 = VAR_3;
  VAR_2->pi = FUNC_1(VAR_4, VAR_0->set.raid_devs);

  switch (VAR_0->set.raid_type->algorithm) {
  case 134:
   VAR_2->pi = VAR_0->set.data_devs - VAR_2->pi;
  case 129:
check_shift_di:
   if (VAR_2->di >= VAR_2->pi)
    VAR_2->di++;
   break;
  case 133:
   VAR_2->pi = VAR_0->set.data_devs - VAR_2->pi;
  case 128:
   VAR_2->di = (VAR_2->pi + VAR_2->di + 1) %
       VAR_0->set.raid_devs;
   break;
  case 132:
   FUNC_0();
  }
 }





 VAR_2->key = (VAR_3 << VAR_0->set.chunk_shift) +
      (VAR_1 & VAR_0->set.io_inv_mask);
 return VAR_2;
}
