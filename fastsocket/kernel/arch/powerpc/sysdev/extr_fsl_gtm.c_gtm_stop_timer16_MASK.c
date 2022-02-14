
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gtm_timer {int gtevr; int gtcfr; struct gtm* gtm; } ;
struct gtm {int lock; struct gtm_timer* timers; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct gtm_timer *VAR_0)
{
 struct gtm *VAR_1 = VAR_0->gtm;
 int VAR_2 = VAR_0 - &VAR_1->timers[0];
 unsigned long VAR_3;

 FUNC_3(&VAR_1->lock, VAR_3);

 FUNC_2(VAR_0->gtcfr, FUNC_0(VAR_2));
 FUNC_1(VAR_0->gtevr, 0xFFFF);

 FUNC_4(&VAR_1->lock, VAR_3);
}
