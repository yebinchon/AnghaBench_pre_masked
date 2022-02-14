
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mapsz; struct ipath_mr** map; } ;
struct ipath_mr {scalar_t__ umem; TYPE_1__ mr; } ;
struct ib_mr {int lkey; int device; } ;
struct TYPE_4__ {int lk_table; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct ipath_mr*) ;
 TYPE_2__* FUNC_3 (int ) ;
 struct ipath_mr* FUNC_4 (struct ib_mr*) ;

int FUNC_5(struct ib_mr *VAR_0)
{
 struct ipath_mr *VAR_1 = FUNC_4(VAR_0);
 int VAR_2;

 FUNC_1(&FUNC_3(VAR_0->device)->lk_table, VAR_0->lkey);
 VAR_2 = VAR_1->mr.mapsz;
 while (VAR_2) {
  VAR_2--;
  FUNC_2(VAR_1->mr.map[VAR_2]);
 }

 if (VAR_1->umem)
  FUNC_0(VAR_1->umem);

 FUNC_2(VAR_1);
 return 0;
}
