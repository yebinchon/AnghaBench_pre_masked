
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mapsz; struct ipath_fmr** map; } ;
struct ipath_fmr {TYPE_1__ mr; } ;
struct ib_fmr {int lkey; int device; } ;
struct TYPE_4__ {int lk_table; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct ipath_fmr*) ;
 TYPE_2__* FUNC_2 (int ) ;
 struct ipath_fmr* FUNC_3 (struct ib_fmr*) ;

int FUNC_4(struct ib_fmr *VAR_0)
{
 struct ipath_fmr *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 FUNC_0(&FUNC_2(VAR_0->device)->lk_table, VAR_0->lkey);
 VAR_2 = VAR_1->mr.mapsz;
 while (VAR_2)
  FUNC_1(VAR_1->mr.map[--VAR_2]);
 FUNC_1(VAR_1);
 return 0;
}
