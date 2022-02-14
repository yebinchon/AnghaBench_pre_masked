
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int len; char* name; } ;
struct dentry {int dummy; } ;



__attribute__((used)) static int
FUNC_0(struct dentry *VAR_0, struct qstr *VAR_1, struct qstr *VAR_2)
{
 int VAR_3;

 if (VAR_1->len != VAR_2->len)
  return 1;

 for (VAR_3 = 0; VAR_3 < VAR_2->len; VAR_3++) {
  char VAR_4, VAR_5;

  VAR_4 = VAR_1->name[VAR_3];
  VAR_5 = VAR_2->name[VAR_3];

  if (VAR_4 >= 'A' && VAR_4 <= 'Z')
   VAR_4 += 'a' - 'A';
  if (VAR_5 >= 'A' && VAR_5 <= 'Z')
   VAR_5 += 'a' - 'A';

  if (VAR_4 != VAR_5)
   return 1;
 }
 return 0;
}
