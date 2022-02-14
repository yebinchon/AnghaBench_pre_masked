
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int stop; int timer; scalar_t__ queue; int lock; scalar_t__ running; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int,int ) ;
 TYPE_1__ VAR_4 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_6)
{
 unsigned long VAR_7;

 if (VAR_4.running)
  VAR_5--;


 FUNC_4(&VAR_4.lock, VAR_7);
 FUNC_3(VAR_1 | FUNC_1(VAR_0),
  VAR_0);
 FUNC_5(&VAR_4.lock, VAR_7);


 if (VAR_4.queue && VAR_5)
  FUNC_2(&VAR_4.timer,
    VAR_3 + VAR_2);
 else {

  FUNC_0(&VAR_4.stop);
 }

}
