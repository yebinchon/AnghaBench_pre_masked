
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int arcofi_state; int arcofi_wait; int arcofitimer; TYPE_1__* arcofi_list; } ;
struct TYPE_6__ {TYPE_2__ isac; } ;
struct IsdnCardState {int debug; TYPE_3__ dc; int HW_Flags; } ;
struct TYPE_4__ {struct TYPE_4__* next; int receive; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct IsdnCardState*) ;
 int FUNC_1 (struct IsdnCardState*,char*,int,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct IsdnCardState*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;

int
FUNC_7(struct IsdnCardState *VAR_7, int VAR_8, void *VAR_9) {
 if (VAR_7->debug & VAR_6) {
  FUNC_1(VAR_7, "arcofi state %d event %d", VAR_7->dc.isac.arcofi_state, VAR_8);
 }
 if (VAR_8 == VAR_2) {
  VAR_7->dc.isac.arcofi_state = 130;
  FUNC_5(VAR_4, &VAR_7->HW_Flags);
  FUNC_6(&VAR_7->dc.isac.arcofi_wait);
   return(1);
 }
 switch (VAR_7->dc.isac.arcofi_state) {
  case 130:
   if (VAR_8 == VAR_1) {
    VAR_7->dc.isac.arcofi_list = VAR_9;
    VAR_7->dc.isac.arcofi_state = 128;
    FUNC_3(VAR_7);
   }
   break;
  case 128:
   if (VAR_8 == VAR_3) {
    if (VAR_7->dc.isac.arcofi_list->receive) {
     FUNC_0(VAR_7);
     VAR_7->dc.isac.arcofi_state = 129;
    } else {
     if (VAR_7->dc.isac.arcofi_list->next) {
      VAR_7->dc.isac.arcofi_list =
       VAR_7->dc.isac.arcofi_list->next;
      FUNC_3(VAR_7);
     } else {
      if (FUNC_4(VAR_5, &VAR_7->HW_Flags)) {
       FUNC_2(&VAR_7->dc.isac.arcofitimer);
      }
      VAR_7->dc.isac.arcofi_state = 130;
      FUNC_6(&VAR_7->dc.isac.arcofi_wait);
     }
    }
   }
   break;
  case 129:
   if (VAR_8 == VAR_0) {
    if (VAR_7->dc.isac.arcofi_list->next) {
     VAR_7->dc.isac.arcofi_list =
      VAR_7->dc.isac.arcofi_list->next;
     VAR_7->dc.isac.arcofi_state = 128;
     FUNC_3(VAR_7);
    } else {
     if (FUNC_4(VAR_5, &VAR_7->HW_Flags)) {
      FUNC_2(&VAR_7->dc.isac.arcofitimer);
     }
     VAR_7->dc.isac.arcofi_state = 130;
     FUNC_6(&VAR_7->dc.isac.arcofi_wait);
    }
   }
   break;
  default:
   FUNC_1(VAR_7, "Arcofi unknown state %x", VAR_7->dc.isac.arcofi_state);
   return(2);
 }
 return(0);
}
