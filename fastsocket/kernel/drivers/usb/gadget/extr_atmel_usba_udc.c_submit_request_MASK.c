
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ length; int dma; scalar_t__ zero; scalar_t__ actual; } ;
struct usba_request {int submitted; scalar_t__ last_transaction; int ctrl; TYPE_2__ req; scalar_t__ using_dma; } ;
struct TYPE_3__ {int name; } ;
struct usba_ep {TYPE_1__ ep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,struct usba_request*,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct usba_ep*,struct usba_request*) ;
 int FUNC_2 (struct usba_ep*,int ,int ) ;
 int FUNC_3 (struct usba_ep*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct usba_ep *VAR_8, struct usba_request *VAR_9)
{
 FUNC_0(VAR_4, "%s: submit_request: req %p (length %d)\n",
  VAR_8->ep.name, VAR_9, VAR_9->req.length);

 VAR_9->req.actual = 0;
 VAR_9->submitted = 1;

 if (VAR_9->using_dma) {
  if (VAR_9->req.length == 0) {
   FUNC_3(VAR_8, VAR_3, VAR_7);
   return;
  }

  if (VAR_9->req.zero)
   FUNC_3(VAR_8, VAR_3, VAR_5);
  else
   FUNC_3(VAR_8, VAR_2, VAR_5);

  FUNC_2(VAR_8, VAR_0, VAR_9->req.dma);
  FUNC_2(VAR_8, VAR_1, VAR_9->ctrl);
 } else {
  FUNC_1(VAR_8, VAR_9);
  if (VAR_9->last_transaction) {
   FUNC_3(VAR_8, VAR_2, VAR_7);
   FUNC_3(VAR_8, VAR_3, VAR_6);
  } else {
   FUNC_3(VAR_8, VAR_2, VAR_6);
   FUNC_3(VAR_8, VAR_3, VAR_7);
  }
 }
}
