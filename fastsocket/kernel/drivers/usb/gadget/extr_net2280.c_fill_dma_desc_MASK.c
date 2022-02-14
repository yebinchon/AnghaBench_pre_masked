
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int length; int dma; int no_interrupt; } ;
struct net2280_request {int valid; TYPE_4__ req; struct net2280_dma* td; } ;
struct TYPE_5__ {int maxpacket; } ;
struct net2280_ep {TYPE_3__* dev; TYPE_1__ ep; scalar_t__ is_in; } ;
struct net2280_dma {void* dmacount; void* dmaaddr; } ;
struct TYPE_7__ {TYPE_2__* pdev; } ;
struct TYPE_6__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3 (struct net2280_ep *VAR_5, struct net2280_request *VAR_6, int VAR_7)
{
 struct net2280_dma *VAR_8 = VAR_6->td;
 u32 VAR_9 = VAR_6->req.length;






 if (VAR_5->is_in)
  VAR_9 |= (1 << VAR_0);
 if ((!VAR_5->is_in && (VAR_9 % VAR_5->ep.maxpacket) != 0)
   || VAR_5->dev->pdev->device != 0x2280)
  VAR_9 |= (1 << VAR_2);

 VAR_6->valid = VAR_7;
 if (VAR_7)
  VAR_9 |= (1 << VAR_3);
 if (FUNC_1(!VAR_6->req.no_interrupt || !VAR_4))
  VAR_9 |= (1 << VAR_1);


 VAR_8->dmaaddr = FUNC_0 (VAR_6->req.dma);


 FUNC_2 ();
 VAR_8->dmacount = FUNC_0(VAR_9);
}
