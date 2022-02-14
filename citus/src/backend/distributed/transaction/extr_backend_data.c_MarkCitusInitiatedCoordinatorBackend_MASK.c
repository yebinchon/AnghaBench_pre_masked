
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int initiatorNodeIdentifier; int transactionOriginator; } ;
struct TYPE_4__ {int mutex; TYPE_1__ citusBackend; } ;


 int FUNC_0 () ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(void)
{




 int VAR_1 = FUNC_0();

 FUNC_1(&VAR_0->mutex);

 VAR_0->citusBackend.initiatorNodeIdentifier = VAR_1;
 VAR_0->citusBackend.transactionOriginator = 1;

 FUNC_2(&VAR_0->mutex);
}
