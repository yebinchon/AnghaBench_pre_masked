
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ length; } ;
struct qe_req {TYPE_1__ req; } ;
struct qe_frame {int dummy; } ;
struct qe_ep {scalar_t__ sent; struct qe_req* tx_req; } ;


 int VAR_0 ;
 int FUNC_0 (struct qe_ep*,struct qe_frame*) ;
 int FUNC_1 (struct qe_ep*,struct qe_frame*,int ) ;

__attribute__((used)) static int FUNC_2(struct qe_ep *VAR_1, struct qe_frame *VAR_2)
{
 struct qe_req *VAR_3 = VAR_1->tx_req;
 int VAR_4;

 if (VAR_3 == ((void*)0))
  return -VAR_0;

 if ((VAR_3->req.length - VAR_1->sent) > 0)
  VAR_4 = FUNC_0(VAR_1, VAR_2);
 else
  VAR_4 = FUNC_1(VAR_1, VAR_2, 0);

 return VAR_4;
}
