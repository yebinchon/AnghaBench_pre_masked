
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* dev; int waitq; } ;
struct TYPE_7__ {TYPE_1__* port; } ;
struct TYPE_6__ {scalar_t__ irq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_3__* VAR_4 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int ) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_8 (int VAR_6)
{
 FUNC_0(VAR_5);
 int VAR_7;

 if (FUNC_1(VAR_6) & VAR_0)
  return;

 VAR_7 = VAR_4[VAR_6].dev->port->irq == VAR_2;
 if (VAR_7) FUNC_4 (&VAR_4[VAR_6]);
 FUNC_6(&VAR_4[VAR_6].waitq, &VAR_5, VAR_3);
 FUNC_7(VAR_1);
 FUNC_2(&VAR_4[VAR_6].waitq, &VAR_5);
 if (VAR_7) FUNC_3 (&VAR_4[VAR_6]);
 else FUNC_5 (VAR_4[VAR_6].dev);
}
