
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct at91_udc {int dummy; } ;
struct TYPE_4__ {int status; int (* complete ) (TYPE_1__*,TYPE_2__*) ;} ;
struct at91_request {TYPE_2__ req; int queue; } ;
struct TYPE_3__ {int name; } ;
struct at91_ep {unsigned int stopped; int int_mask; int queue; TYPE_1__ ep; struct at91_udc* udc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,struct at91_request*,int) ;
 int FUNC_1 (struct at91_udc*,int ,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(struct at91_ep *VAR_3, struct at91_request *VAR_4, int VAR_5)
{
 unsigned VAR_6 = VAR_3->stopped;
 struct at91_udc *VAR_7 = VAR_3->udc;

 FUNC_2(&VAR_4->queue);
 if (VAR_4->req.status == -VAR_1)
  VAR_4->req.status = VAR_5;
 else
  VAR_5 = VAR_4->req.status;
 if (VAR_5 && VAR_5 != -VAR_2)
  FUNC_0("%s done %p, status %d\n", VAR_3->ep.name, VAR_4, VAR_5);

 VAR_3->stopped = 1;
 VAR_4->req.complete(&VAR_3->ep, &VAR_4->req);
 VAR_3->stopped = VAR_6;


 if (FUNC_3(&VAR_3->queue) && VAR_3->int_mask != (1 << 0))
  FUNC_1(VAR_7, VAR_0, VAR_3->int_mask);
}
