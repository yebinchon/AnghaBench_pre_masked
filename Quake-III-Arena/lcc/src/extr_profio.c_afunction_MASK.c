
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x; int y; scalar_t__ count; } ;
struct func {char* name; TYPE_1__ count; struct func* link; scalar_t__ callers; } ;
struct file {struct func* funcs; } ;


 int FUNC_0 (struct func*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct file*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 struct file* FUNC_3 (char*) ;

__attribute__((used)) static struct func *FUNC_4(char *VAR_1, char *VAR_2, int VAR_3, int VAR_4, int VAR_5) {
 struct file *VAR_6 = FUNC_3(VAR_2);
 struct func *VAR_7;

 FUNC_1(VAR_6);
 for (VAR_7 = VAR_6->funcs; VAR_7 && VAR_1 != VAR_7->name; VAR_7 = VAR_7->link)
  ;
 if (!VAR_7) {
  struct func **VAR_8;
  FUNC_0(VAR_7, VAR_0);
  VAR_7->name = VAR_1;
  VAR_7->count.x = VAR_3;
  VAR_7->count.y = VAR_4;
  VAR_7->count.count = 0;
  VAR_7->callers = 0;
  for (VAR_8 = &VAR_6->funcs; *VAR_8 && FUNC_2(&VAR_7->count, &(*VAR_8)->count) > 0; VAR_8 = &(*VAR_8)->link)
   ;
  VAR_7->link = *VAR_8;
  *VAR_8 = VAR_7;
 }
 VAR_7->count.count += VAR_5;
 return VAR_7;
}
