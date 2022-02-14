
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int gpio; int lock; int stop; int timer; scalar_t__ queue; scalar_t__ running; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *,scalar_t__) ;
 TYPE_1__ VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_5)
{
 u32 VAR_6;

 FUNC_4(&VAR_3.lock);
 if (VAR_3.running)
  VAR_4--;



 VAR_6 = FUNC_0(VAR_0);
 VAR_6 = (VAR_6 & ~(1 << VAR_3.gpio)) |
       ((~VAR_6) & (1 << VAR_3.gpio));
 FUNC_1(VAR_6, VAR_0);

 if (VAR_3.queue && VAR_4)
  FUNC_3(&VAR_3.timer, VAR_2 + VAR_1);
 else
  FUNC_2(&VAR_3.stop);
 FUNC_5(&VAR_3.lock);
}
