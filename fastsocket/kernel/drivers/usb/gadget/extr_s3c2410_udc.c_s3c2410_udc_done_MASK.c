
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; int (* complete ) (int *,TYPE_1__*) ;} ;
struct s3c2410_request {TYPE_1__ req; int queue; } ;
struct s3c2410_ep {unsigned int halted; int ep; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct s3c2410_ep *VAR_1,
  struct s3c2410_request *VAR_2, int VAR_3)
{
 unsigned VAR_4 = VAR_1->halted;

 FUNC_1(&VAR_2->queue);

 if (FUNC_0 (VAR_2->req.status == -VAR_0))
  VAR_2->req.status = VAR_3;
 else
  VAR_3 = VAR_2->req.status;

 VAR_1->halted = 1;
 VAR_2->req.complete(&VAR_1->ep, &VAR_2->req);
 VAR_1->halted = VAR_4;
}
