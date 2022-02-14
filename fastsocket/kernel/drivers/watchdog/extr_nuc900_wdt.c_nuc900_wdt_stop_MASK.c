
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wdt_lock; scalar_t__ wdt_base; int timer; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static inline void FUNC_5(void)
{
 unsigned int VAR_3;

 FUNC_2(&VAR_2->timer);

 FUNC_3(&VAR_2->wdt_lock);

 VAR_3 = FUNC_0(VAR_2->wdt_base + VAR_0);
 VAR_3 &= ~VAR_1;
 FUNC_1(VAR_3, VAR_2->wdt_base + VAR_0);

 FUNC_4(&VAR_2->wdt_lock);
}
