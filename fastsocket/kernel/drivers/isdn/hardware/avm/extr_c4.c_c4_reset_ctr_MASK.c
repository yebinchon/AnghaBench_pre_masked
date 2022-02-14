
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u_int ;
struct capi_ctr {scalar_t__ driverdata; } ;
struct TYPE_4__ {int capi_ctrl; int version; TYPE_2__* card; } ;
typedef TYPE_1__ avmctrl_info ;
struct TYPE_5__ {size_t nr_controllers; scalar_t__ nlogcontr; TYPE_1__* ctrlinfo; int lock; } ;
typedef TYPE_2__ avmcard ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct capi_ctr *VAR_0)
{
 avmcard *VAR_1 = ((avmctrl_info *)(VAR_0->driverdata))->card;
 avmctrl_info *VAR_2;
 u_int VAR_3;
 unsigned long VAR_4;

 FUNC_3(&VAR_1->lock, VAR_4);

  FUNC_0(VAR_1);

 FUNC_4(&VAR_1->lock, VAR_4);

        for (VAR_3=0; VAR_3 < VAR_1->nr_controllers; VAR_3++) {
  VAR_2 = &VAR_1->ctrlinfo[VAR_3];
  FUNC_2(VAR_2->version, 0, sizeof(VAR_2->version));
  FUNC_1(&VAR_2->capi_ctrl);
 }
 VAR_1->nlogcontr = 0;
}
