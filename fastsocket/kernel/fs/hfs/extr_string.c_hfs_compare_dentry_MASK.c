
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int len; unsigned char* name; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;

int FUNC_0(struct dentry *VAR_2, struct qstr *VAR_3, struct qstr *VAR_4)
{
 const unsigned char *VAR_5, *VAR_6;
 int VAR_7;

 VAR_7 = VAR_3->len;
 if (VAR_7 >= VAR_0) {
  if (VAR_4->len < VAR_0)
   return 1;
  VAR_7 = VAR_0;
 } else if (VAR_7 != VAR_4->len)
  return 1;

 VAR_5 = VAR_3->name;
 VAR_6 = VAR_4->name;
 while (VAR_7--) {
  if (VAR_1[*VAR_5++] != VAR_1[*VAR_6++])
   return 1;
 }
 return 0;
}
