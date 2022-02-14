
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int lock; int port; int irq; } ;
typedef TYPE_1__ act2000_card ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void
FUNC_4(act2000_card * VAR_3)
{
        unsigned long VAR_4;

        FUNC_2(&VAR_3->lock, VAR_4);
        if (VAR_3->flags & VAR_0)
                FUNC_0(VAR_3->irq, VAR_3);

        VAR_3->flags &= ~VAR_0;
        if (VAR_3->flags & VAR_1)
                FUNC_1(VAR_3->port, VAR_2);
        VAR_3->flags &= ~VAR_1;
        FUNC_3(&VAR_3->lock, VAR_4);
}
