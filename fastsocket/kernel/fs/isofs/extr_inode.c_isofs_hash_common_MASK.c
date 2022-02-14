
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int len; char* name; int hash; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (char const*,int) ;

__attribute__((used)) static int
FUNC_1(struct dentry *VAR_0, struct qstr *VAR_1, int VAR_2)
{
 const char *VAR_3;
 int VAR_4;

 VAR_4 = VAR_1->len;
 VAR_3 = VAR_1->name;
 if (VAR_2) {
  while (VAR_4 && VAR_3[VAR_4-1] == '.')
   VAR_4--;
 }

 VAR_1->hash = FUNC_0(VAR_3, VAR_4);

 return 0;
}
