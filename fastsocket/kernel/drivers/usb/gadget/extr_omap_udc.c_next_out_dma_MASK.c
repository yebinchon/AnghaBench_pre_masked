
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {unsigned int length; unsigned int actual; unsigned int dma; } ;
struct omap_req {unsigned int dma_bytes; TYPE_2__ req; } ;
struct TYPE_3__ {unsigned int maxpacket; } ;
struct omap_ep {unsigned int maxpacket; int bEndpointAddress; int lch; int dma_channel; int dma_counter; TYPE_1__ ep; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 unsigned int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_3 () ;
 unsigned int FUNC_4 (unsigned int,unsigned int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ,unsigned int,int ,int ) ;
 int FUNC_8 (int ,int ,int,unsigned int,int ,int,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int,int ) ;

__attribute__((used)) static void FUNC_11(struct omap_ep *VAR_12, struct omap_req *VAR_13)
{
 unsigned VAR_14 = VAR_13->req.length - VAR_13->req.actual;
 int VAR_15 = 0;
 u16 VAR_16;

 if (FUNC_3())
  VAR_15 = FUNC_0(VAR_11, VAR_12->dma_channel);





 if (FUNC_3() && VAR_14 < VAR_12->maxpacket) {
  FUNC_8(VAR_12->lch, VAR_2,
    VAR_14, 1, VAR_4,
    VAR_15, 0);
  VAR_13->dma_bytes = VAR_14;
 } else {

  VAR_14 /= VAR_12->ep.maxpacket;
  VAR_14 = FUNC_4(VAR_14, (unsigned)VAR_9 + 1);
  VAR_13->dma_bytes = VAR_14 * VAR_12->ep.maxpacket;
  FUNC_8(VAR_12->lch, VAR_1,
    VAR_12->ep.maxpacket >> 1, VAR_14,
    VAR_4,
    VAR_15, 0);
 }
 FUNC_7(VAR_12->lch, VAR_3,
  VAR_0, VAR_13->req.dma + VAR_13->req.actual,
  0, 0);
 VAR_12->dma_counter = FUNC_5(VAR_12->lch);

 FUNC_10(VAR_8 | (VAR_14 - 1), FUNC_1(VAR_12->dma_channel));
 VAR_16 = FUNC_6(VAR_6);
 VAR_16 |= FUNC_2(VAR_12->dma_channel);
 FUNC_10(VAR_16, VAR_6);
 FUNC_10(VAR_12->bEndpointAddress & 0xf, VAR_7);
 FUNC_10(VAR_10, VAR_5);

 FUNC_9(VAR_12->lch);
}
