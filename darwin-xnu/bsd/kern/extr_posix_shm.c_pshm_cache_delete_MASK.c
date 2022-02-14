
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ le_prev; struct pshmcache* le_next; } ;
struct pshmcache {TYPE_1__ pshm_hash; } ;


 int FUNC_0 (struct pshmcache*,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct pshmcache *VAR_2)
{






 FUNC_0(VAR_2, VAR_0);
 VAR_2->pshm_hash.le_prev = 0;
 VAR_1--;
}
