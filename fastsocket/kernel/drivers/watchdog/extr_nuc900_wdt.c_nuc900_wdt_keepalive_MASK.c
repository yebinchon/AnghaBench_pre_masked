
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wdt_lock; scalar_t__ wdt_base; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(void)
{
 unsigned int VAR_4;

 FUNC_2(&VAR_3->wdt_lock);

 VAR_4 = FUNC_0(VAR_3->wdt_base + VAR_0);
 VAR_4 |= (VAR_2 | VAR_1);
 FUNC_1(VAR_4, VAR_3->wdt_base + VAR_0);

 FUNC_3(&VAR_3->wdt_lock);
}
