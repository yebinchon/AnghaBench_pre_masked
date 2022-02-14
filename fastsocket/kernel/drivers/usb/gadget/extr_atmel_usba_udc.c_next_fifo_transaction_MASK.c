
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int length; unsigned int actual; unsigned int buf; scalar_t__ zero; } ;
struct usba_request {int last_transaction; TYPE_2__ req; } ;
struct TYPE_3__ {unsigned int maxpacket; int name; } ;
struct usba_ep {int fifo; TYPE_1__ ep; } ;


 int FUNC_0 (int ,char*,int ,struct usba_request*,unsigned int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,unsigned int,unsigned int) ;
 int FUNC_2 (struct usba_ep*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct usba_ep *VAR_3, struct usba_request *VAR_4)
{
 unsigned int VAR_5;

 VAR_5 = VAR_4->req.length - VAR_4->req.actual;
 VAR_4->last_transaction = 1;
 if (VAR_5 > VAR_3->ep.maxpacket) {
  VAR_5 = VAR_3->ep.maxpacket;
  VAR_4->last_transaction = 0;
 } else if (VAR_5 == VAR_3->ep.maxpacket && VAR_4->req.zero)
  VAR_4->last_transaction = 0;

 FUNC_0(VAR_0, "%s: submit_transaction, req %p (length %d)%s\n",
  VAR_3->ep.name, VAR_4, VAR_5,
  VAR_4->last_transaction ? ", done" : "");

 FUNC_1(VAR_3->fifo, VAR_4->req.buf + VAR_4->req.actual, VAR_5);
 FUNC_2(VAR_3, VAR_1, VAR_2);
 VAR_4->req.actual += VAR_5;
}
