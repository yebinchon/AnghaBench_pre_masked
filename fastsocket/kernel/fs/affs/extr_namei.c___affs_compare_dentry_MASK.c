
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ (* toupper_t ) (int ) ;
struct qstr {int len; int * name; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (int *,int) ;

__attribute__((used)) static inline int
FUNC_1(struct dentry *VAR_0, struct qstr *VAR_1, struct qstr *VAR_2, toupper_t VAR_3)
{
 const u8 *VAR_4 = VAR_1->name;
 const u8 *VAR_5 = VAR_2->name;
 int VAR_6;





 if (FUNC_0(VAR_2->name,VAR_2->len))
  return 1;




 VAR_6 = VAR_1->len;
 if (VAR_6 >= 30) {
  if (VAR_2->len < 30)
   return 1;
  VAR_6 = 30;
 } else if (VAR_6 != VAR_2->len)
  return 1;

 for (; VAR_6 > 0; VAR_6--)
  if (VAR_3(*VAR_4++) != VAR_3(*VAR_5++))
   return 1;

 return 0;
}
