
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcast_group {scalar_t__ retries; int work; int leave_state; } ;
struct ib_sa_mcmember_rec {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mcast_group*,int ) ;

__attribute__((used)) static void FUNC_2(int VAR_0, struct ib_sa_mcmember_rec *VAR_1,
     void *VAR_2)
{
 struct mcast_group *VAR_3 = VAR_2;

 if (VAR_0 && VAR_3->retries > 0 &&
     !FUNC_1(VAR_3, VAR_3->leave_state))
  VAR_3->retries--;
 else
  FUNC_0(&VAR_3->work);
}
