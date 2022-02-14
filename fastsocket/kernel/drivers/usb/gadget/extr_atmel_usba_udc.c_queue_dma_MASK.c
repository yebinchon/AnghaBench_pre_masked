
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usba_udc {int lock; TYPE_2__* pdev; } ;
struct TYPE_6__ {int length; scalar_t__ dma; int buf; scalar_t__ no_interrupt; scalar_t__ short_not_ok; scalar_t__ zero; } ;
struct usba_request {int using_dma; int mapped; int ctrl; int queue; TYPE_3__ req; } ;
struct TYPE_4__ {int name; } ;
struct usba_ep {int queue; scalar_t__ desc; scalar_t__ is_in; TYPE_1__ ep; } ;
typedef int gfp_t ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (int ,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (int *,int ,int,int ) ;
 int FUNC_3 (int *,scalar_t__,int,int ) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct usba_ep*,struct usba_request*) ;

__attribute__((used)) static int FUNC_9(struct usba_udc *VAR_13, struct usba_ep *VAR_14,
  struct usba_request *VAR_15, gfp_t VAR_16)
{
 unsigned long VAR_17;
 int VAR_18;

 FUNC_0(VAR_0, "%s: req l/%u d/%08x %c%c%c\n",
  VAR_14->ep.name, VAR_15->req.length, VAR_15->req.dma,
  VAR_15->req.zero ? 'Z' : 'z',
  VAR_15->req.short_not_ok ? 'S' : 's',
  VAR_15->req.no_interrupt ? 'I' : 'i');

 if (VAR_15->req.length > 0x10000) {

  FUNC_0(VAR_1, "invalid request length %u\n", VAR_15->req.length);
  return -VAR_6;
 }

 VAR_15->using_dma = 1;

 if (VAR_15->req.dma == VAR_2) {
  VAR_15->req.dma = FUNC_2(
   &VAR_13->pdev->dev, VAR_15->req.buf, VAR_15->req.length,
   VAR_14->is_in ? VAR_5 : VAR_4);
  VAR_15->mapped = 1;
 } else {
  FUNC_3(
   &VAR_13->pdev->dev, VAR_15->req.dma, VAR_15->req.length,
   VAR_14->is_in ? VAR_5 : VAR_4);
  VAR_15->mapped = 0;
 }

 VAR_15->ctrl = FUNC_1(VAR_3, VAR_15->req.length)
   | VAR_8 | VAR_10
   | VAR_11 | VAR_12;

 if (VAR_14->is_in)
  VAR_15->ctrl |= VAR_9;






 VAR_18 = -VAR_7;
 FUNC_6(&VAR_13->lock, VAR_17);
 if (VAR_14->desc) {
  if (FUNC_5(&VAR_14->queue))
   FUNC_8(VAR_14, VAR_15);

  FUNC_4(&VAR_15->queue, &VAR_14->queue);
  VAR_18 = 0;
 }
 FUNC_7(&VAR_13->lock, VAR_17);

 return VAR_18;
}
