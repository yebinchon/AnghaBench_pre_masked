
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct radeon_connector_atom_dig {int dp_lane_count; } ;
struct radeon_connector {struct radeon_connector_atom_dig* con_priv; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (struct radeon_connector*,int *) ;

bool FUNC_2(struct radeon_connector *VAR_1)
{
 u8 VAR_2[VAR_0];
 struct radeon_connector_atom_dig *VAR_3 = VAR_1->con_priv;

 if (!FUNC_1(VAR_1, VAR_2))
  return 0;
 if (FUNC_0(VAR_2, VAR_3->dp_lane_count))
  return 0;
 return 1;
}
