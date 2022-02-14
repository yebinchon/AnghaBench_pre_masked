
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_3__ {unsigned char state; struct timer_list timer; } ;
struct TYPE_4__ {TYPE_1__ scir; } ;


 unsigned char VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct timer_list*,scalar_t__) ;
 int FUNC_2 () ;
 TYPE_2__* VAR_4 ;
 int FUNC_3 (unsigned char) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_5)
{
 struct timer_list *VAR_6 = &VAR_4->scir.timer;
 unsigned char VAR_7 = VAR_4->scir.state;


 VAR_7 ^= VAR_2;


 if (FUNC_0(FUNC_2()))
  VAR_7 &= ~VAR_0;
 else
  VAR_7 |= VAR_0;


 FUNC_3(VAR_7);


 FUNC_1(VAR_6, VAR_3 + VAR_1);
}
