
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct func {struct caller* callers; } ;
struct caller {scalar_t__ caller; int count; struct caller* link; } ;
struct _bbdata {struct _bbdata* link; } ;


 struct _bbdata* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;

void FUNC_1(struct func *VAR_3, struct _bbdata *VAR_4) {
 static struct caller VAR_5[4096];
 static int VAR_6;
 struct caller *VAR_7;

 if (!VAR_4->link) {
  VAR_4->link = VAR_0;
  VAR_0 = VAR_4;
  if (VAR_6 == 0)
   FUNC_0(VAR_2);
 }
 for (VAR_7 = VAR_3->callers; VAR_7; VAR_7 = VAR_7->link)
  if (VAR_7->caller == VAR_1) {
   VAR_7->count++;
   break;
  }
 if (!VAR_7 && VAR_6 < sizeof VAR_5/sizeof VAR_5[0]) {
  VAR_7 = &VAR_5[VAR_6++];
  VAR_7->caller = VAR_1;
  VAR_7->count = 1;
  VAR_7->link = VAR_3->callers;
  VAR_3->callers = VAR_7;
 }
 VAR_1 = 0;
}
