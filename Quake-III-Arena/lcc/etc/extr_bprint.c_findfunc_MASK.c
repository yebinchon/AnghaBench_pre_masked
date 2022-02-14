
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count; } ;
struct func {char* name; TYPE_1__ count; struct func* link; } ;
struct file {char* name; struct func* funcs; } ;


 struct file* FUNC_0 (char*) ;

int FUNC_1(char *VAR_0, char *VAR_1) {
 static struct file *VAR_2;

 if (VAR_2 == 0 || VAR_2->name != VAR_1)
  VAR_2 = FUNC_0(VAR_1);
 if (VAR_2) {
  struct func *VAR_3;
  for (VAR_3 = VAR_2->funcs; VAR_3; VAR_3 = VAR_3->link)
   if (VAR_3->name == VAR_0)
    return VAR_3->count.count;
 }
 return -1;
}
