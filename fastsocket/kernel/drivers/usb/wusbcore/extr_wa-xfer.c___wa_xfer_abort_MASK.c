
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int bLength; int dwTransferID; int wRPipe; int bRequestType; } ;
struct wa_xfer_abort_buffer {int urb; TYPE_6__ cmd; } ;
struct wa_xfer {TYPE_5__* wa; TYPE_2__* ep; } ;
struct TYPE_9__ {int wRPipeIndex; } ;
struct wa_rpipe {TYPE_3__ descr; } ;
struct device {int dummy; } ;
struct TYPE_11__ {TYPE_4__* dto_epd; int usb_dev; TYPE_1__* usb_iface; } ;
struct TYPE_10__ {int bEndpointAddress; } ;
struct TYPE_8__ {struct wa_rpipe* hcpriv; } ;
struct TYPE_7__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,struct wa_xfer*,int) ;
 int FUNC_1 (struct wa_xfer_abort_buffer*) ;
 struct wa_xfer_abort_buffer* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *,int ,int ,TYPE_6__*,int,int ,struct wa_xfer_abort_buffer*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (struct wa_xfer*) ;

__attribute__((used)) static void FUNC_9(struct wa_xfer *VAR_3)
{
 int VAR_4;
 struct device *VAR_5 = &VAR_3->wa->usb_iface->dev;
 struct wa_xfer_abort_buffer *VAR_6;
 struct wa_rpipe *VAR_7 = VAR_3->ep->hcpriv;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_0);
 if (VAR_6 == ((void*)0))
  goto error_kmalloc;
 VAR_6->cmd.bLength = sizeof(VAR_6->cmd);
 VAR_6->cmd.bRequestType = VAR_1;
 VAR_6->cmd.wRPipe = VAR_7->descr.wRPipeIndex;
 VAR_6->cmd.dwTransferID = FUNC_8(VAR_3);

 FUNC_5(&VAR_6->urb);
 FUNC_4(&VAR_6->urb, VAR_3->wa->usb_dev,
  FUNC_6(VAR_3->wa->usb_dev,
    VAR_3->wa->dto_epd->bEndpointAddress),
  &VAR_6->cmd, sizeof(VAR_6->cmd), VAR_2, VAR_6);
 VAR_4 = FUNC_7(&VAR_6->urb, VAR_0);
 if (VAR_4 < 0)
  goto error_submit;
 return;


error_submit:
 if (FUNC_3())
  FUNC_0(VAR_5, "xfer %p: Can't submit abort request: %d\n",
   VAR_3, VAR_4);
 FUNC_1(VAR_6);
error_kmalloc:
 return;

}
