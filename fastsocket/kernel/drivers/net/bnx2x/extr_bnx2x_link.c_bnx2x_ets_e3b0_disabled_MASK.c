
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_vars {int dummy; } ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct link_params const*,struct link_vars const*) ;
 int FUNC_3 (struct link_params const*) ;

__attribute__((used)) static int FUNC_4(const struct link_params *VAR_2,
       const struct link_vars *VAR_3)
{
 struct bnx2x *VAR_4 = VAR_2->bp;

 if (!FUNC_0(VAR_4)) {
  FUNC_1(VAR_1,
     "bnx2x_ets_e3b0_disabled the chip isn't E3B0\n");
  return -VAR_0;
 }

 FUNC_2(VAR_2, VAR_3);

 FUNC_3(VAR_2);

 return 0;
}
