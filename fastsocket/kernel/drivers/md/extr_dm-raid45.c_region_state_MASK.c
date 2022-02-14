
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct dm_rh_client* rh; } ;
struct raid_set {TYPE_1__ recover; } ;
struct dm_rh_client {int dummy; } ;
typedef int sector_t ;
typedef int region_t ;
typedef enum dm_rh_region_states { ____Placeholder_dm_rh_region_states } dm_rh_region_states ;


 int FUNC_0 (struct dm_rh_client*,int ,int) ;
 int FUNC_1 (struct dm_rh_client*,int ) ;

__attribute__((used)) static int FUNC_2(struct raid_set *VAR_0, sector_t VAR_1,
   enum dm_rh_region_states VAR_2)
{
 struct dm_rh_client *VAR_3 = VAR_0->recover.rh;
 region_t VAR_4 = FUNC_1(VAR_3, VAR_1);

 return !!(FUNC_0(VAR_3, VAR_4, 1) & VAR_2);
}
