
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * le_prev; } ;
struct namecache {int * nc_name; TYPE_2__ nc_hash; TYPE_1__* nc_dvp; scalar_t__ nc_vp; } ;
struct TYPE_6__ {int nc_negentry; int nc_link; } ;
struct TYPE_4__ {int v_ncchildren; } ;


 int FUNC_0 (struct namecache*,int,int ) ;
 int FUNC_1 (struct namecache*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,struct namecache*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct namecache *VAR_10, int VAR_11)
{
        FUNC_2(VAR_6);

        if (VAR_10->nc_vp) {
         FUNC_1(VAR_10, VAR_4.nc_link);
 } else {
         FUNC_3(&VAR_8, VAR_10, VAR_4.nc_negentry);
         VAR_7--;
 }
        FUNC_3(&(VAR_10->nc_dvp->v_ncchildren), VAR_10, VAR_1);

 FUNC_1(VAR_10, VAR_3);






 VAR_10->nc_hash.le_prev = ((void*)0);

 FUNC_4(VAR_10->nc_name);
 VAR_10->nc_name = ((void*)0);
 if (VAR_11) {
         FUNC_3(&VAR_5, VAR_10, VAR_2);
  FUNC_0(VAR_10, sizeof(*VAR_10), VAR_0);
  VAR_9--;
 }
}
