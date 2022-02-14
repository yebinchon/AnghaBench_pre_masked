
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int queue; int running; int timer; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int,int ) ;
 TYPE_1__ VAR_7 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(void)
{
 unsigned long VAR_8;

 if (!VAR_7.queue) {
  VAR_7.queue = 1;


  FUNC_2(&VAR_7.lock, VAR_8);
  FUNC_1(VAR_2, VAR_0);


  FUNC_1(VAR_4 | VAR_3, VAR_1);
  FUNC_3(&VAR_7.lock, VAR_8);

  FUNC_0(&VAR_7.timer,
    VAR_6 + VAR_5);
 }


 VAR_7.running++;
}
