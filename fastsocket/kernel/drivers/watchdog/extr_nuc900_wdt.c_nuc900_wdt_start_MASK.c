
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timer; scalar_t__ next_heartbeat; int wdt_lock; scalar_t__ wdt_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (int *,scalar_t__) ;
 TYPE_1__* VAR_12 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static inline void FUNC_5(void)
{
 unsigned int VAR_13;

 FUNC_3(&VAR_12->wdt_lock);

 VAR_13 = FUNC_0(VAR_12->wdt_base + VAR_1);
 VAR_13 |= (VAR_9 | VAR_5 | VAR_8 | VAR_4 | VAR_6);
 VAR_13 &= ~VAR_7;
 VAR_13 |= (VAR_2 << 0x04);
 FUNC_1(VAR_13, VAR_12->wdt_base + VAR_1);

 FUNC_4(&VAR_12->wdt_lock);

 VAR_12->next_heartbeat = VAR_11 + VAR_10 * VAR_0;
 FUNC_2(&VAR_12->timer, VAR_11 + VAR_3);
}
