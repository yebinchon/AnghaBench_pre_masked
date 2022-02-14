
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_head_state {int dummy; } ;
struct stripe_head {int state; int reconstruct_state; int check_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct stripe_head*,struct stripe_head_state*,int,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct stripe_head *VAR_2,
          struct stripe_head_state *VAR_3,
          int VAR_4)
{
 int VAR_5;





 if (!FUNC_2(VAR_0, &VAR_2->state) && !VAR_2->check_state &&
     !VAR_2->reconstruct_state)
  for (VAR_5 = VAR_4; VAR_5--; )
   if (FUNC_0(VAR_2, VAR_3, VAR_5, VAR_4))
    break;
 FUNC_1(VAR_1, &VAR_2->state);
}
