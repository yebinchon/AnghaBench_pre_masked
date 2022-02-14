
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_bridge_data {int dummy; } ;
struct _parisc_agp_info {int * gatt; } ;


 int VAR_0 ;
 struct _parisc_agp_info VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct agp_bridge_data *VAR_2)
{
 struct _parisc_agp_info *VAR_3 = &VAR_1;

 VAR_3->gatt[0] = VAR_0;

 return 0;
}
