
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct radeon_connector_atom_dig {int* dpcd; } ;
struct radeon_connector {struct radeon_connector_atom_dig* con_priv; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct radeon_connector*,int ,int *,int,int ) ;

__attribute__((used)) static void FUNC_2(struct radeon_connector *VAR_4)
{
 struct radeon_connector_atom_dig *VAR_5 = VAR_4->con_priv;
 u8 VAR_6[3];

 if (!(VAR_5->dpcd[VAR_1] & VAR_2))
  return;

 if (FUNC_1(VAR_4, VAR_3, VAR_6, 3, 0))
  FUNC_0("Sink OUI: %02hx%02hx%02hx\n",
         VAR_6[0], VAR_6[1], VAR_6[2]);

 if (FUNC_1(VAR_4, VAR_0, VAR_6, 3, 0))
  FUNC_0("Branch OUI: %02hx%02hx%02hx\n",
         VAR_6[0], VAR_6[1], VAR_6[2]);
}
