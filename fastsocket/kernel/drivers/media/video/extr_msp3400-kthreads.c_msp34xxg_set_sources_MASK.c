
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct msp_state {int route_in; scalar_t__ has_scart2_out; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int,int) ;
 struct msp_state* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct i2c_client *VAR_0)
{
 struct msp_state *VAR_1 = FUNC_2(FUNC_0(VAR_0));
 u32 VAR_2 = VAR_1->route_in;

 FUNC_1(VAR_0, 0x0008, (VAR_2 >> 4) & 0xf);

 FUNC_1(VAR_0, 0x000c, (VAR_2 >> 4) & 0xf);
 FUNC_1(VAR_0, 0x0009, (VAR_2 >> 8) & 0xf);
 FUNC_1(VAR_0, 0x000a, (VAR_2 >> 12) & 0xf);
 if (VAR_1->has_scart2_out)
  FUNC_1(VAR_0, 0x0041, (VAR_2 >> 16) & 0xf);
 FUNC_1(VAR_0, 0x000b, (VAR_2 >> 20) & 0xf);
}
