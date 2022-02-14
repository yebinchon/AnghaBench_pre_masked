
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct HvLpEvent {int flags; int xSubtype; int xSizeMinus1; int xTargetInstanceId; int xSourceInstanceId; int xTargetLp; int xSourceLp; int xType; } ;
struct viocharlpevent {struct HvLpEvent event; } ;
typedef int HvLpIndex ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 (struct viocharlpevent*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct viocharlpevent *VAR_6, HvLpIndex VAR_7)
{
 struct HvLpEvent *VAR_8 = &VAR_6->event;

 FUNC_1(VAR_6, 0, sizeof(struct viocharlpevent));

 VAR_8->flags = VAR_2 | VAR_0 |
  VAR_1;
 VAR_8->xType = VAR_3;
 VAR_8->xSubtype = VAR_5 | VAR_4;
 VAR_8->xSourceLp = FUNC_0();
 VAR_8->xTargetLp = VAR_7;
 VAR_8->xSizeMinus1 = sizeof(struct viocharlpevent);
 VAR_8->xSourceInstanceId = FUNC_2(VAR_7);
 VAR_8->xTargetInstanceId = FUNC_3(VAR_7);
}
