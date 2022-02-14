
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_vars {int dummy; } ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct link_params*) ;
 int FUNC_5 (struct link_params*,struct link_vars*) ;

int FUNC_6(struct link_params *VAR_2,
        struct link_vars *VAR_3)
{
 struct bnx2x *VAR_4 = VAR_2->bp;
 int VAR_5 = 0;

 if ((FUNC_0(VAR_4)) || (FUNC_1(VAR_4)))
  FUNC_4(VAR_2);
 else if (FUNC_2(VAR_4))
  VAR_5 = FUNC_5(VAR_2, VAR_3);
 else {
  FUNC_3(VAR_1, "bnx2x_ets_disabled - chip not supported\n");
  return -VAR_0;
 }

 return VAR_5;
}
