
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iss_net_private {int lock; scalar_t__ timer_val; int timer; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_1)
{
 struct iss_net_private* VAR_2 = (struct iss_net_private*) VAR_1;

 FUNC_2(&VAR_2->lock);

 FUNC_0();

 FUNC_1(&VAR_2->timer, VAR_0 + VAR_2->timer_val);

 FUNC_3(&VAR_2->lock);
}
