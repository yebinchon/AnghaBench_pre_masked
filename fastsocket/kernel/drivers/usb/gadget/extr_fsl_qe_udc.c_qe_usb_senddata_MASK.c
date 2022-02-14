
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct qe_frame {int dummy; } ;
struct TYPE_4__ {int maxpacket; } ;
struct qe_ep {int sent; unsigned int last; TYPE_3__* tx_req; TYPE_1__ ep; } ;
struct TYPE_5__ {int length; scalar_t__ buf; } ;
struct TYPE_6__ {TYPE_2__ req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qe_frame*,int *) ;
 int FUNC_1 (struct qe_frame*,int ) ;
 int FUNC_2 (struct qe_frame*,unsigned int) ;
 int FUNC_3 (struct qe_frame*,int ) ;
 unsigned int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct qe_ep*,struct qe_frame*) ;
 int FUNC_6 (struct qe_frame*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_7(struct qe_ep *VAR_3, struct qe_frame *VAR_4)
{
 unsigned int VAR_5;
 u8 *VAR_6;

 FUNC_6(VAR_4);
 VAR_5 = FUNC_4(VAR_2, (VAR_3->tx_req->req.length - VAR_3->sent),
    VAR_3->ep.maxpacket);
 VAR_6 = (u8 *)VAR_3->tx_req->req.buf + VAR_3->sent;
 if (VAR_6 && VAR_5) {
  VAR_3->last = VAR_5;
  FUNC_0(VAR_4, VAR_6);
  FUNC_2(VAR_4, VAR_5);
  FUNC_3(VAR_4, VAR_1);
  FUNC_1(VAR_4, 0);
  return FUNC_5(VAR_3, VAR_4);
 }
 return -VAR_0;
}
