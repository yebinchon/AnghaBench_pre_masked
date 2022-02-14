
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct radeon_connector_atom_dig {int dp_i2c_bus; } ;
struct radeon_connector {struct radeon_connector_atom_dig* con_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int*,int,int*,int,int,int*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct radeon_connector *VAR_7,
         u16 VAR_8, u8 *VAR_9, int VAR_10, u8 VAR_11)
{
 struct radeon_connector_atom_dig *VAR_12 = VAR_7->con_priv;
 u8 VAR_13[4];
 int VAR_14 = 4;
 u8 VAR_15;
 int VAR_16;
 unsigned VAR_17;

 VAR_13[0] = VAR_8;
 VAR_13[1] = VAR_8 >> 8;
 VAR_13[2] = VAR_0 << 4;
 VAR_13[3] = (VAR_14 << 4) | (VAR_10 - 1);

 for (VAR_17 = 0; VAR_17 < 4; VAR_17++) {
  VAR_16 = FUNC_0(VAR_12->dp_i2c_bus,
         VAR_13, VAR_14, VAR_9, VAR_10, VAR_11, &VAR_15);
  if (VAR_16 == -VAR_4)
   continue;
  else if (VAR_16 < 0)
   return VAR_16;
  if ((VAR_15 & VAR_3) == VAR_1)
   return VAR_16;
  else if ((VAR_15 & VAR_3) == VAR_2)
   FUNC_1(400);
  else if (VAR_16 == 0)
   return -VAR_6;
  else
   return -VAR_5;
 }

 return -VAR_5;
}
