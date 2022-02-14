
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nchashhead {struct namecache* lh_first; } ;
struct TYPE_3__ {struct namecache* le_next; } ;
struct namecache {TYPE_2__* nc_dvp; TYPE_1__ nc_hash; } ;
struct mount {int dummy; } ;
struct TYPE_4__ {struct mount* v_mount; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct namecache*,int ) ;
 int VAR_0 ;
 struct nchashhead* VAR_1 ;

void
FUNC_3(struct mount *VAR_2)
{
 struct nchashhead *VAR_3;
 struct namecache *VAR_4;

 FUNC_0();

 for (VAR_3 = &VAR_1[VAR_0 - 1]; VAR_3 >= VAR_1; VAR_3--) {
restart:
  for (VAR_4 = VAR_3->lh_first; VAR_4 != 0; VAR_4 = VAR_4->nc_hash.le_next) {
   if (VAR_4->nc_dvp->v_mount == VAR_2) {
    FUNC_2(VAR_4, 0);
    goto restart;
   }
  }
 }
 FUNC_1();
}
