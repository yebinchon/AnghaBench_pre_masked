
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {long data; void* function; } ;
struct IsdnCardState {TYPE_1__* bcs; TYPE_2__ dbusytimer; } ;
struct TYPE_3__ {void* BC_Close; void* BC_SetStack; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 void* VAR_2 ;

__attribute__((used)) static void
FUNC_2(struct IsdnCardState *VAR_3)
{
 VAR_3->bcs[0].BC_SetStack = VAR_2;
 VAR_3->bcs[1].BC_SetStack = VAR_2;
 VAR_3->bcs[0].BC_Close = VAR_0;
 VAR_3->bcs[1].BC_Close = VAR_0;
 VAR_3->dbusytimer.function = (void *) VAR_1;
 VAR_3->dbusytimer.data = (long) VAR_3;
 FUNC_0(&VAR_3->dbusytimer);
 FUNC_1(VAR_3->bcs, 0, 0);
 FUNC_1(VAR_3->bcs + 1, 0, 1);
}
