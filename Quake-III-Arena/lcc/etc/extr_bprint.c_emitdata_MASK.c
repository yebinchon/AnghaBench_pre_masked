
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ count; int x; int y; } ;
struct func {char* name; TYPE_1__ count; struct caller* callers; struct func* link; } ;
struct file {char* name; int count; TYPE_2__* counts; struct func* funcs; struct file* link; } ;
struct caller {int count; char* name; char* file; int x; int y; struct caller* link; } ;
struct TYPE_4__ {int x; int y; int count; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 struct file* VAR_0 ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,...) ;
 char* VAR_1 ;
 int VAR_2 ;

void FUNC_3(char *VAR_3) {
 FILE *VAR_4;

 if ((VAR_4 = FUNC_1(VAR_3, "w"))) {
  struct file *VAR_5;
  for (VAR_5 = VAR_0; VAR_5; VAR_5 = VAR_5->link) {
   int VAR_6;
   struct func *VAR_7;
   struct caller *VAR_8;
   FUNC_2(*VAR_4, "1\n%s\n", VAR_5->name);
   for (VAR_6 = 0, VAR_7 = VAR_5->funcs; VAR_7; VAR_6++, VAR_7 = VAR_7->link)
    if ((VAR_8 = VAR_7->callers))
     for (VAR_6--; VAR_8; VAR_8 = VAR_8->link)
      VAR_6++;
   FUNC_2(*VAR_4, "%d\n", VAR_6);
   for (VAR_7 = VAR_5->funcs; VAR_7; VAR_7 = VAR_7->link)
    if (VAR_7->count.count == 0 || !VAR_7->callers)
     FUNC_2(*VAR_4, "%s 1 %d %d %d ? ? 0 0\n", VAR_7->name, VAR_7->count.x,
      VAR_7->count.y, VAR_7->count.count);
    else
     for (VAR_8 = VAR_7->callers; VAR_8; VAR_8 = VAR_8->link)
      FUNC_2(*VAR_4, "%s 1 %d %d %d %s %s %d %d\n", VAR_7->name, VAR_7->count.x,
       VAR_7->count.y, VAR_8->count, VAR_8->name, VAR_8->file, VAR_8->x, VAR_8->y);
   FUNC_2(*VAR_4, "%d\n", VAR_5->count);
   for (VAR_6 = 0; VAR_6 < VAR_5->count; VAR_6++)
    FUNC_2(*VAR_4, "1 %d %d %d\n", VAR_5->counts[VAR_6].x,
     VAR_5->counts[VAR_6].y, VAR_5->counts[VAR_6].count);
  }
  FUNC_0(VAR_4);
 } else
  FUNC_2(VAR_2, "%s: can't create `%s'\n", VAR_1, VAR_3);
}
