
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adx_wdt {unsigned int state; unsigned long timeout; int lock; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct adx_wdt*) ;
 int FUNC_1 (struct adx_wdt*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct adx_wdt *VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4 = VAR_3 * 1000;
 unsigned long VAR_5;
 unsigned int VAR_6;

 FUNC_2(&VAR_2->lock, VAR_5);
 VAR_6 = VAR_2->state;
 FUNC_1(VAR_2);
 FUNC_4(VAR_4, VAR_2->base + VAR_0);

 if (VAR_6 == VAR_1)
  FUNC_0(VAR_2);

 VAR_2->timeout = VAR_4;
 FUNC_3(&VAR_2->lock, VAR_5);
}
