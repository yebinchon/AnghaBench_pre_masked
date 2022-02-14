
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct stv090x_state {struct stv090x_config* config; } ;
struct stv090x_config {int xtal; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct stv090x_state*,int ) ;

__attribute__((used)) static u32 FUNC_2(struct stv090x_state *VAR_3)
{
 const struct stv090x_config *VAR_4 = VAR_3->config;
 u32 VAR_5, VAR_6;
 u8 VAR_7;

 VAR_5 = FUNC_1(VAR_3, VAR_1);
 VAR_6 = FUNC_1(VAR_3, VAR_2);
 VAR_7 = FUNC_0(VAR_6, VAR_0) ? 4 : 6;

 return (VAR_5 + 1) * VAR_4->xtal / VAR_7;
}
