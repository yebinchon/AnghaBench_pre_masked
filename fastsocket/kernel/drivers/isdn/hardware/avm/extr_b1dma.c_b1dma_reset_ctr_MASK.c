
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct capi_ctr {scalar_t__ driverdata; } ;
struct TYPE_4__ {int ncci_head; int version; TYPE_2__* card; } ;
typedef TYPE_1__ avmctrl_info ;
struct TYPE_5__ {int lock; } ;
typedef TYPE_2__ avmcard ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct capi_ctr*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct capi_ctr *VAR_0)
{
 avmctrl_info *VAR_1 = (avmctrl_info *)(VAR_0->driverdata);
 avmcard *VAR_2 = VAR_1->card;
 unsigned long VAR_3;

 FUNC_4(&VAR_2->lock, VAR_3);
  FUNC_0(VAR_2);

 FUNC_3(VAR_1->version, 0, sizeof(VAR_1->version));
 FUNC_2(&VAR_1->ncci_head);
 FUNC_5(&VAR_2->lock, VAR_3);
 FUNC_1(VAR_0);
}
