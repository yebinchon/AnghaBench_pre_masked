
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_connector_atom_dig {scalar_t__ dp_i2c_bus; } ;
struct radeon_connector {struct radeon_connector_atom_dig* con_priv; struct radeon_connector_atom_dig* edid; } ;
struct drm_connector {scalar_t__ dp_i2c_bus; } ;


 int FUNC_0 (struct radeon_connector_atom_dig*) ;
 int FUNC_1 (struct radeon_connector_atom_dig*) ;
 int FUNC_2 (struct radeon_connector_atom_dig*) ;
 int FUNC_3 (scalar_t__) ;
 struct radeon_connector* FUNC_4 (struct radeon_connector_atom_dig*) ;

__attribute__((used)) static void FUNC_5(struct drm_connector *VAR_0)
{
 struct radeon_connector *VAR_1 = FUNC_4(VAR_0);
 struct radeon_connector_atom_dig *VAR_2 = VAR_1->con_priv;

 if (VAR_1->edid)
  FUNC_2(VAR_1->edid);
 if (VAR_2->dp_i2c_bus)
  FUNC_3(VAR_2->dp_i2c_bus);
 FUNC_2(VAR_1->con_priv);
 FUNC_1(VAR_0);
 FUNC_0(VAR_0);
 FUNC_2(VAR_0);
}
