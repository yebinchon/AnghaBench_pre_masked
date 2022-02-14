
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_3__ {int * tcache; } ;
typedef TYPE_1__ tcaches_t ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void
FUNC_1(tsd_t *VAR_0, tcaches_t *VAR_1)
{

 if (VAR_1->tcache == ((void*)0))
  return;
 FUNC_0(VAR_0, VAR_1->tcache);
 VAR_1->tcache = ((void*)0);
}
