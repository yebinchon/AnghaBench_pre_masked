
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ speed; } ;
struct TYPE_4__ {int irqs_resume; } ;
struct pxa_udc {TYPE_3__ gadget; TYPE_2__* driver; TYPE_1__ stats; } ;
struct TYPE_5__ {int (* resume ) (TYPE_3__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct pxa_udc*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct pxa_udc *VAR_3)
{
 FUNC_1(VAR_3, VAR_0, VAR_1);
 VAR_3->stats.irqs_resume++;

 if (VAR_3->gadget.speed != VAR_2
   && VAR_3->driver && VAR_3->driver->resume)
  VAR_3->driver->resume(&VAR_3->gadget);
}
