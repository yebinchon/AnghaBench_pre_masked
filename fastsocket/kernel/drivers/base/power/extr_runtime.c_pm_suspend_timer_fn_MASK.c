
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long timer_expires; int lock; } ;
struct device {TYPE_1__ power; } ;


 int FUNC_0 (struct device*) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_1)
{
 struct device *VAR_2 = (struct device *)VAR_1;
 unsigned long VAR_3;
 unsigned long VAR_4;

 FUNC_1(&VAR_2->power.lock, VAR_3);

 VAR_4 = VAR_2->power.timer_expires;

 if (VAR_4 > 0 && !FUNC_3(VAR_4, VAR_0)) {
  VAR_2->power.timer_expires = 0;
  FUNC_0(VAR_2);
 }

 FUNC_2(&VAR_2->power.lock, VAR_3);
}
