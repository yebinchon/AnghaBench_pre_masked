
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct radeon_connector_atom_dig {scalar_t__* dpcd; } ;
struct radeon_connector {struct radeon_connector_atom_dig* con_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (scalar_t__*,int *,int) ;
 int FUNC_2 (struct radeon_connector*,int ,int *,int,int ) ;
 int FUNC_3 (struct radeon_connector*) ;

bool FUNC_4(struct radeon_connector *VAR_2)
{
 struct radeon_connector_atom_dig *VAR_3 = VAR_2->con_priv;
 u8 VAR_4[VAR_1];
 int VAR_5, VAR_6;

 VAR_5 = FUNC_2(VAR_2, VAR_0, VAR_4,
     VAR_1, 0);
 if (VAR_5 > 0) {
  FUNC_1(VAR_3->dpcd, VAR_4, VAR_1);
  FUNC_0("DPCD: ");
  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
   FUNC_0("%02x ", VAR_4[VAR_6]);
  FUNC_0("\n");

  FUNC_3(VAR_2);

  return 1;
 }
 VAR_3->dpcd[0] = 0;
 return 0;
}
