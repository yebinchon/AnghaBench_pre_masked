
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct agp_bridge_data {int dummy; } ;
struct _parisc_agp_info {int gatt_entries; unsigned long* gatt; } ;
struct TYPE_2__ {scalar_t__ scratch_page; } ;


 TYPE_1__* VAR_0 ;
 struct _parisc_agp_info VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct agp_bridge_data *VAR_2)
{
 struct _parisc_agp_info *VAR_3 = &VAR_1;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->gatt_entries; VAR_4++) {
  VAR_3->gatt[VAR_4] = (unsigned long)VAR_0->scratch_page;
 }

 return 0;
}
