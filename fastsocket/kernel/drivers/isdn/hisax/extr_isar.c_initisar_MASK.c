
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct IsdnCardState {TYPE_3__* bcs; } ;
struct TYPE_8__ {long data; void* function; } ;
struct TYPE_5__ {TYPE_4__ ftimer; } ;
struct TYPE_6__ {TYPE_1__ isar; } ;
struct TYPE_7__ {TYPE_2__ hw; void* BC_Close; void* BC_SetStack; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 void* VAR_2 ;

void FUNC_1(struct IsdnCardState *VAR_3)
{
 VAR_3->bcs[0].BC_SetStack = VAR_2;
 VAR_3->bcs[1].BC_SetStack = VAR_2;
 VAR_3->bcs[0].BC_Close = VAR_0;
 VAR_3->bcs[1].BC_Close = VAR_0;
 VAR_3->bcs[0].hw.isar.ftimer.function = (void *) VAR_1;
 VAR_3->bcs[0].hw.isar.ftimer.data = (long) &VAR_3->bcs[0];
 FUNC_0(&VAR_3->bcs[0].hw.isar.ftimer);
 VAR_3->bcs[1].hw.isar.ftimer.function = (void *) VAR_1;
 VAR_3->bcs[1].hw.isar.ftimer.data = (long) &VAR_3->bcs[1];
 FUNC_0(&VAR_3->bcs[1].hw.isar.ftimer);
}
