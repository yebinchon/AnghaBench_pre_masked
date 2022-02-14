
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int queue; int lock; int running; int timer; int gpio; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(void)
{
 unsigned long VAR_3;

 FUNC_2(&VAR_2.lock, VAR_3);
 if (!VAR_2.queue) {
  VAR_2.queue = 1;
  FUNC_0(VAR_2.gpio, 1);
  FUNC_1(&VAR_2.timer, VAR_1 + VAR_0);
 }
 VAR_2.running++;
 FUNC_3(&VAR_2.lock, VAR_3);
}
