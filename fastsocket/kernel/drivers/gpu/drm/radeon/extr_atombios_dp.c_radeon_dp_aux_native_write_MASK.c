
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
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int ,int*,int,int *,int ,int,int*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct radeon_connector *VAR_6,
          u16 VAR_7, u8 *VAR_8, u8 VAR_9, u8 VAR_10)
{
 struct radeon_connector_atom_dig *VAR_11 = VAR_6->con_priv;
 int VAR_12;
 u8 VAR_13[20];
 int VAR_14 = VAR_9 + 4;
 u8 VAR_15;
 unsigned VAR_16;

 if (VAR_9 > 16)
  return -1;

 VAR_13[0] = VAR_7;
 VAR_13[1] = VAR_7 >> 8;
 VAR_13[2] = VAR_3 << 4;
 VAR_13[3] = (VAR_14 << 4) | (VAR_9 - 1);
 FUNC_0(&VAR_13[4], VAR_8, VAR_9);

 for (VAR_16 = 0; VAR_16 < 4; VAR_16++) {
  VAR_12 = FUNC_1(VAR_11->dp_i2c_bus,
         VAR_13, VAR_14, ((void*)0), 0, VAR_10, &VAR_15);
  if (VAR_12 == -VAR_4)
   continue;
  else if (VAR_12 < 0)
   return VAR_12;
  if ((VAR_15 & VAR_2) == VAR_0)
   return VAR_9;
  else if ((VAR_15 & VAR_2) == VAR_1)
   FUNC_2(400);
  else
   return -VAR_5;
 }

 return -VAR_5;
}
