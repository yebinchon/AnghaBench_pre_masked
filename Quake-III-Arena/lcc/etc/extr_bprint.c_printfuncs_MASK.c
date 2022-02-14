
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ count; } ;
struct func {char* name; struct caller* callers; TYPE_1__ count; struct func* link; } ;
struct file {char* name; struct func* funcs; } ;
struct caller {int count; char* name; char* file; int y; int x; struct caller* link; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;

void FUNC_1(struct file *VAR_1, int VAR_2) {
 struct func *VAR_3;

 if (VAR_2)
  FUNC_0("%s:\n", VAR_1->name);
 for (VAR_3 = VAR_1->funcs; VAR_3; VAR_3 = VAR_3->link)
  if (VAR_0 <= 1 || VAR_3->count.count == 0 || !VAR_3->callers)
   FUNC_0("%d\t%s\n", VAR_3->count.count, VAR_3->name);
  else {
   struct caller *VAR_4;
   for (VAR_4 = VAR_3->callers; VAR_4; VAR_4 = VAR_4->link)
    FUNC_0("%d\t%s\tfrom %s\tin %s:%d.%d\n", VAR_4->count, VAR_3->name, VAR_4->name,
     VAR_4->file, VAR_4->y, VAR_4->x + 1);
  }

}
