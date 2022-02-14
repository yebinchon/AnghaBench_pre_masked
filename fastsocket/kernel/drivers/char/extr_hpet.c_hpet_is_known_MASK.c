
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpets {scalar_t__ hp_hpet_phys; struct hpets* hp_next; } ;
struct hpet_data {scalar_t__ hd_phys_address; } ;


 struct hpets* VAR_0 ;

__attribute__((used)) static int FUNC_0(struct hpet_data *VAR_1)
{
 struct hpets *VAR_2;

 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->hp_next)
  if (VAR_2->hp_hpet_phys == VAR_1->hd_phys_address)
   return 1;

 return 0;
}
