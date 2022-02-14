
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ link_up; } ;
struct bnx2x {int cmng; TYPE_1__ link_vars; } ;


 int FUNC_0 (struct bnx2x*) ;
 int VAR_0 ;
 int FUNC_1 (struct bnx2x*,int,int ) ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*,int *,int ) ;

__attribute__((used)) static void FUNC_4(struct bnx2x *VAR_1)
{
 if (VAR_1->link_vars.link_up) {
  FUNC_1(VAR_1, 1, VAR_0);
  FUNC_2(VAR_1);
 }
 FUNC_3(VAR_1, &VAR_1->cmng, FUNC_0(VAR_1));
}
