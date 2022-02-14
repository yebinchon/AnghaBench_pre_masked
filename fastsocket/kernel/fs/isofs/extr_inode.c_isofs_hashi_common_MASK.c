
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int len; char* name; int hash; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 () ;
 unsigned long FUNC_2 (char,unsigned long) ;
 char FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct dentry *VAR_0, struct qstr *VAR_1, int VAR_2)
{
 const char *VAR_3;
 int VAR_4;
 char VAR_5;
 unsigned long VAR_6;

 VAR_4 = VAR_1->len;
 VAR_3 = VAR_1->name;
 if (VAR_2) {
  while (VAR_4 && VAR_3[VAR_4-1] == '.')
   VAR_4--;
 }

 VAR_6 = FUNC_1();
 while (VAR_4--) {
  VAR_5 = FUNC_3(*VAR_3++);
  VAR_6 = FUNC_2(VAR_5, VAR_6);
 }
 VAR_1->hash = FUNC_0(VAR_6);

 return 0;
}
