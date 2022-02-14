
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stv090x_state {int dummy; } ;
typedef enum stv090x_delsys { ____Placeholder_stv090x_delsys } stv090x_delsys ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct stv090x_state*,int ) ;

__attribute__((used)) static enum stv090x_delsys FUNC_2(struct stv090x_state *VAR_8)
{
 u32 VAR_9;
 enum stv090x_delsys VAR_10;

 VAR_9 = FUNC_1(VAR_8, VAR_0);
 if (FUNC_0(VAR_9, VAR_3) == 2)
  VAR_10 = VAR_6;
 else if (FUNC_0(VAR_9, VAR_3) == 3) {
  VAR_9 = FUNC_1(VAR_8, VAR_2);
  if (FUNC_0(VAR_9, VAR_1) == 1)
   VAR_10 = VAR_4;
  else
   VAR_10 = VAR_5;
 } else {
  VAR_10 = VAR_7;
 }

 return VAR_10;
}
