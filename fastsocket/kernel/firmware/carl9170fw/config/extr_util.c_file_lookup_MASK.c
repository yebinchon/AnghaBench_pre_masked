
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {char const* name; struct file* next; } ;


 struct file* VAR_0 ;
 int FUNC_0 (void*) ;
 struct file* FUNC_1 (int) ;
 int FUNC_2 (struct file*,int ,int) ;
 int FUNC_3 (char const*,char const*) ;
 char* FUNC_4 (char const*) ;

struct file *FUNC_5(const char *VAR_1)
{
 struct file *VAR_2;
 const char *VAR_3 = FUNC_4(VAR_1);

 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next) {
  if (!FUNC_3(VAR_1, VAR_2->name)) {
   FUNC_0((void *)VAR_3);
   return VAR_2;
  }
 }

 VAR_2 = FUNC_1(sizeof(*VAR_2));
 FUNC_2(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->name = VAR_3;
 VAR_2->next = VAR_0;
 VAR_0 = VAR_2;
 return VAR_2;
}
