
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int inuse; } ;
typedef TYPE_1__ gentity_t ;
typedef int byte ;
struct TYPE_7__ {size_t num_entities; } ;


 int FUNC_0 (char*,char const*) ;
 TYPE_1__* VAR_0 ;
 TYPE_2__ VAR_1 ;

gentity_t *FUNC_1 (gentity_t *VAR_2, int VAR_3, const char *VAR_4)
{
 char *VAR_5;

 if (!VAR_2)
  VAR_2 = VAR_0;
 else
  VAR_2++;

 for ( ; VAR_2 < &VAR_0[VAR_1.num_entities] ; VAR_2++)
 {
  if (!VAR_2->inuse)
   continue;
  VAR_5 = *(char **) ((byte *)VAR_2 + VAR_3);
  if (!VAR_5)
   continue;
  if (!FUNC_0 (VAR_5, VAR_4))
   return VAR_2;
 }

 return ((void*)0);
}
