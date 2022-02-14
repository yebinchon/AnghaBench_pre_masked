
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int ptimer; int poll_tq; } ;
typedef TYPE_1__ act2000_card ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_4(unsigned long VAR_1)
{
 act2000_card * VAR_2 = (act2000_card *)VAR_1;
 unsigned long VAR_3;

 FUNC_0(&VAR_2->poll_tq);
 FUNC_2(&VAR_2->lock, VAR_3);
 FUNC_1(&VAR_2->ptimer, VAR_0+3);
 FUNC_3(&VAR_2->lock, VAR_3);
}
