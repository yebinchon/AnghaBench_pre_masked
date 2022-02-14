
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* l1l2 ) (struct PStack*,int,int *) ;} ;
struct PStack {struct PStack* next; TYPE_1__ l1; } ;
struct IsdnCardState {int HW_Flags; struct PStack* stlist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct PStack*,int,int *) ;
 int FUNC_1 (struct PStack*,int,int *) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(struct IsdnCardState *VAR_5)
{
 struct PStack *VAR_6;

 VAR_6 = VAR_5->stlist;
 while (VAR_6) {
  if (FUNC_3(VAR_1, &VAR_5->HW_Flags))
   VAR_6->l1.l1l2(VAR_6, VAR_4 | VAR_0, ((void*)0));
  VAR_6->l1.l1l2(VAR_6, VAR_3 | VAR_2, ((void*)0));
  VAR_6 = VAR_6->next;
 }
 FUNC_2(VAR_1, &VAR_5->HW_Flags);
}
