
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct capi_ctr {scalar_t__ driverdata; } ;
struct TYPE_3__ {int ncci_head; int version; TYPE_2__* card; } ;
typedef TYPE_1__ avmctrl_info ;
struct TYPE_4__ {unsigned int port; int lock; } ;
typedef TYPE_2__ avmcard ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct capi_ctr*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (unsigned int) ;

__attribute__((used)) static void FUNC_7(struct capi_ctr *VAR_0)
{
 avmctrl_info *VAR_1 = (avmctrl_info *)(VAR_0->driverdata);
 avmcard *VAR_2 = VAR_1->card;
 unsigned int VAR_3 = VAR_2->port;
 unsigned long VAR_4;

 FUNC_6(VAR_3);
 FUNC_0(VAR_3);
 FUNC_0(VAR_3);

 FUNC_3(VAR_1->version, 0, sizeof(VAR_1->version));
 FUNC_4(&VAR_2->lock, VAR_4);
 FUNC_2(&VAR_1->ncci_head);
 FUNC_5(&VAR_2->lock, VAR_4);
 FUNC_1(VAR_0);
}
