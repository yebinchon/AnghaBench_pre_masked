
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct capi_ctr {scalar_t__ driverdata; } ;
struct TYPE_5__ {TYPE_2__* card; } ;
typedef TYPE_1__ avmctrl_info ;
struct TYPE_6__ {unsigned int port; int irq; } ;
typedef TYPE_2__ avmcard ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct capi_ctr*) ;
 int FUNC_3 (int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(struct capi_ctr *VAR_0)
{
 avmctrl_info *VAR_1 = (avmctrl_info *)(VAR_0->driverdata);
 avmcard *VAR_2 = VAR_1->card;
 unsigned int VAR_3 = VAR_2->port;

 FUNC_1(VAR_3);
 FUNC_1(VAR_3);

 FUNC_2(VAR_0);
 FUNC_3(VAR_2->irq, VAR_2);
 FUNC_0(VAR_2);
}
