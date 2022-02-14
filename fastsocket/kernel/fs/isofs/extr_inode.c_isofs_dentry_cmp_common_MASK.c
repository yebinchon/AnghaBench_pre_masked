
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int len; char* name; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (char*,char*,int) ;

__attribute__((used)) static int FUNC_1(struct dentry *VAR_0, struct qstr *VAR_1,
     struct qstr *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;


 VAR_4 = VAR_1->len;
 VAR_5 = VAR_2->len;
 if (VAR_3) {
  while (VAR_4 && VAR_1->name[VAR_4-1] == '.')
   VAR_4--;
  while (VAR_5 && VAR_2->name[VAR_5-1] == '.')
   VAR_5--;
 }
 if (VAR_4 == VAR_5) {
  if (FUNC_0(VAR_1->name, VAR_2->name, VAR_4) == 0)
   return 0;
 }
 return 1;
}
