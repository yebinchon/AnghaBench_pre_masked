
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* nfsnode_t ;
struct TYPE_6__ {TYPE_1__* n_cookiecache; scalar_t__ n_cookieverf; scalar_t__ n_eofcookie; } ;
struct TYPE_5__ {int mru; int next; scalar_t__ free; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int,int ) ;
 scalar_t__ FUNC_2 (int ) ;

void
FUNC_3(nfsnode_t VAR_2)
{
 if (FUNC_2(FUNC_0(VAR_2)) != VAR_1)
  return;
 VAR_2->n_eofcookie = 0;
 VAR_2->n_cookieverf = 0;
 if (!VAR_2->n_cookiecache)
  return;
 VAR_2->n_cookiecache->free = 0;
 VAR_2->n_cookiecache->mru = -1;
 FUNC_1(VAR_2->n_cookiecache->next, -1, VAR_0);
}
