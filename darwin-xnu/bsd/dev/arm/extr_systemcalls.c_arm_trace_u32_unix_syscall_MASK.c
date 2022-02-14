
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int boolean_t ;
struct TYPE_3__ {scalar_t__ save_r12; int save_r3; int save_r2; int save_r1; int save_r0; int save_r4; } ;
typedef TYPE_1__ arm_saved_state32_t ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(int VAR_3, arm_saved_state32_t *VAR_4)
{
 boolean_t VAR_5 = (VAR_4->save_r12 == 0);
 if (VAR_5)
  FUNC_1(VAR_2,
   FUNC_0(VAR_0, VAR_3) | VAR_1,
   VAR_4->save_r1, VAR_4->save_r2, VAR_4->save_r3, VAR_4->save_r4, 0);
 else
  FUNC_1(VAR_2,
   FUNC_0(VAR_0, VAR_3) | VAR_1,
   VAR_4->save_r0, VAR_4->save_r1, VAR_4->save_r2, VAR_4->save_r3, 0);
}
