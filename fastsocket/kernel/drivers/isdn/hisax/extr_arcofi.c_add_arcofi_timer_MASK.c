
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ expires; } ;
struct TYPE_6__ {TYPE_3__ arcofitimer; } ;
struct TYPE_7__ {TYPE_1__ isac; } ;
struct IsdnCardState {TYPE_2__ dc; int HW_Flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(struct IsdnCardState *VAR_4) {
 if (FUNC_3(VAR_1, &VAR_4->HW_Flags)) {
  FUNC_1(&VAR_4->dc.isac.arcofitimer);
 }
 FUNC_2(&VAR_4->dc.isac.arcofitimer);
 VAR_4->dc.isac.arcofitimer.expires = VAR_3 + ((VAR_0 * VAR_2)/1000);
 FUNC_0(&VAR_4->dc.isac.arcofitimer);
}
