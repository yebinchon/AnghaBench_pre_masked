
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int default_ticks; int gpio; scalar_t__ queue; } ;


 int FUNC_0 (int ,int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(void)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0.lock, VAR_2);
 if (VAR_0.queue) {
  VAR_0.queue = 0;
  FUNC_0(VAR_0.gpio, 0);
 }
 VAR_1 = VAR_0.default_ticks;
 FUNC_2(&VAR_0.lock, VAR_2);
 return 0;
}
