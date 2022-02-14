
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
typedef TYPE_1__* nfsnode_t ;
struct TYPE_3__ {scalar_t__* n_accessuid; int* n_access; } ;


 int VAR_0 ;

int
FUNC_0(nfsnode_t VAR_1, uid_t VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4=0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_1->n_accessuid[VAR_4] == VAR_2)
   break;
 if (VAR_4 == VAR_0) {
  if (!VAR_3)
   return (-1);
  VAR_4 = VAR_1->n_access[VAR_0];
  VAR_1->n_access[VAR_0] = (VAR_4 + 1) % VAR_0;
 }
 return (VAR_4);
}
