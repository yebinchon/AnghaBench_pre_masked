
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * lockGroupLeader; } ;
typedef TYPE_1__ PGPROC ;



__attribute__((used)) static bool
FUNC_0(PGPROC *VAR_0, PGPROC *VAR_1)
{
 return VAR_0 == VAR_1 ||
     (VAR_0->lockGroupLeader != ((void*)0) &&
   VAR_0->lockGroupLeader == VAR_1->lockGroupLeader);
}
