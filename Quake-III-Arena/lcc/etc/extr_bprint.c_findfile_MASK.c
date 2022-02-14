
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {char* name; struct file* link; } ;


 struct file* VAR_0 ;

__attribute__((used)) static struct file *FUNC_0(char *VAR_1) {
 struct file *VAR_2;

 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->link)
  if (VAR_2->name == VAR_1)
   return VAR_2;
 return 0;
}
