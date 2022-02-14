
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ (* toupper_t ) (int ) ;
struct TYPE_2__ {int* name; int len; } ;
struct dentry {TYPE_1__ d_name; } ;



__attribute__((used)) static inline int
FUNC_0(struct dentry *VAR_0, const u8 *VAR_1, toupper_t VAR_2)
{
 const u8 *VAR_3 = VAR_0->d_name.name;
 int VAR_4 = VAR_0->d_name.len;

 if (VAR_4 >= 30) {
  if (*VAR_1 < 30)
   return 0;
  VAR_4 = 30;
 } else if (VAR_4 != *VAR_1)
  return 0;

 for (VAR_1++; VAR_4 > 0; VAR_4--)
  if (VAR_2(*VAR_3++) != VAR_2(*VAR_1++))
   return 0;
 return 1;
}
