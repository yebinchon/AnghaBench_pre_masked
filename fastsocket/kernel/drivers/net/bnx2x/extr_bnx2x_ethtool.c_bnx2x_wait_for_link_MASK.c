
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int link_up; } ;
struct bnx2x {TYPE_1__ link_vars; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct bnx2x*,scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct bnx2x *VAR_1, u8 VAR_2, u8 VAR_3)
{
 int VAR_4 = 1400;

 if (VAR_2) {
  while (FUNC_1(VAR_1, VAR_3) && VAR_4--)
   FUNC_2(20);

  if (VAR_4 <= 0 && FUNC_1(VAR_1, VAR_3))
   FUNC_0(VAR_0, "Timeout waiting for link up\n");

  VAR_4 = 1400;
  while (!VAR_1->link_vars.link_up && VAR_4--)
   FUNC_2(20);

  if (VAR_4 <= 0 && !VAR_1->link_vars.link_up)
   FUNC_0(VAR_0,
      "Timeout waiting for link init\n");
 }
}
