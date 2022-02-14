
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int len; char* name; } ;
struct object_info {int name_len; char* name; } ;



__attribute__((used)) static int
FUNC_0(struct qstr *VAR_0, struct object_info *VAR_1)
{
 int VAR_2;

 if (VAR_0->len != VAR_1->name_len)
  return 0;

 for (VAR_2 = 0; VAR_2 < VAR_0->len; VAR_2++) {
  char VAR_3, VAR_4;

  VAR_3 = VAR_0->name[VAR_2];
  VAR_4 = VAR_1->name[VAR_2];

  if (VAR_3 >= 'A' && VAR_3 <= 'Z')
   VAR_3 += 'a' - 'A';
  if (VAR_4 >= 'A' && VAR_4 <= 'Z')
   VAR_4 += 'a' - 'A';

  if (VAR_3 != VAR_4)
   return 0;
 }
 return 1;
}
