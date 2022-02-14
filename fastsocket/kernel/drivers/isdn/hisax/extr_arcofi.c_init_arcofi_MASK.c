
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {long data; void* function; } ;
struct TYPE_5__ {int arcofi_wait; TYPE_3__ arcofitimer; } ;
struct TYPE_4__ {TYPE_2__ isac; } ;
struct IsdnCardState {int HW_Flags; TYPE_1__ dc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

void
FUNC_3(struct IsdnCardState *VAR_2) {
 VAR_2->dc.isac.arcofitimer.function = (void *) VAR_1;
 VAR_2->dc.isac.arcofitimer.data = (long) VAR_2;
 FUNC_0(&VAR_2->dc.isac.arcofitimer);
 FUNC_1(&VAR_2->dc.isac.arcofi_wait);
 FUNC_2(VAR_0, &VAR_2->HW_Flags);
}
