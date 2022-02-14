
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int arcofi_bc; int arcofi_wait; } ;
struct TYPE_4__ {TYPE_1__ isac; } ;
struct IsdnCardState {TYPE_2__ dc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct IsdnCardState*,int ,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct IsdnCardState *VAR_2, int VAR_3) {
 VAR_2->dc.isac.arcofi_bc = VAR_3;
 FUNC_0(VAR_2, VAR_1, &VAR_0);
 FUNC_1(&VAR_2->dc.isac.arcofi_wait);
}
