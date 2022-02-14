
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_udc {int ep0_state; struct fsl_ep* eps; int ep0_dir; struct fsl_req* status_req; } ;
struct TYPE_2__ {int * complete; scalar_t__ actual; int status; scalar_t__ length; } ;
struct fsl_req {int queue; scalar_t__ dtd_count; TYPE_1__ req; struct fsl_ep* ep; } ;
struct fsl_ep {int queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct fsl_ep*,struct fsl_req*) ;
 scalar_t__ FUNC_1 (struct fsl_req*) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(struct fsl_udc *VAR_6, int VAR_7)
{
 struct fsl_req *VAR_8 = VAR_6->status_req;
 struct fsl_ep *VAR_9;

 if (VAR_7 == VAR_2)
  VAR_6->ep0_dir = VAR_3;
 else
  VAR_6->ep0_dir = VAR_4;

 VAR_9 = &VAR_6->eps[0];
 VAR_6->ep0_state = VAR_5;

 VAR_8->ep = VAR_9;
 VAR_8->req.length = 0;
 VAR_8->req.status = -VAR_0;
 VAR_8->req.actual = 0;
 VAR_8->req.complete = ((void*)0);
 VAR_8->dtd_count = 0;

 if (FUNC_1(VAR_8) == 0)
  FUNC_0(VAR_9, VAR_8);
 else
  return -VAR_1;

 FUNC_2(&VAR_8->queue, &VAR_9->queue);

 return 0;
}
