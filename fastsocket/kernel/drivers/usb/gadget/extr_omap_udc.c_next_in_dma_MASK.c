
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {unsigned int length; unsigned int actual; scalar_t__ dma; } ;
struct omap_req {unsigned int dma_bytes; TYPE_2__ req; } ;
struct TYPE_3__ {int maxpacket; } ;
struct omap_ep {unsigned int maxpacket; int dma_channel; int lch; int dma_counter; TYPE_1__ ep; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 unsigned int FUNC_6 (unsigned int,unsigned int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_10 (int ,int ,int,unsigned int,int const,int,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int,int ) ;

__attribute__((used)) static void FUNC_13(struct omap_ep *VAR_11, struct omap_req *VAR_12)
{
 u16 VAR_13, VAR_14;
 unsigned VAR_15 = VAR_12->req.length - VAR_12->req.actual;
 const int VAR_16 = FUNC_3()
    ? VAR_5
    : VAR_4;
 int VAR_17 = 0;

 if (FUNC_5())
  VAR_17 = FUNC_0(VAR_10, VAR_11->dma_channel);


 if ((FUNC_4() && VAR_15 <= VAR_9)
   || (FUNC_5() && VAR_15 < VAR_11->maxpacket)
   || (FUNC_3() && VAR_15 < VAR_11->maxpacket)) {
  VAR_13 = VAR_7 | VAR_15;
  FUNC_10(VAR_11->lch, VAR_2,
    VAR_15, 1, VAR_16, VAR_17, 0);
 } else {
  VAR_15 = FUNC_6(VAR_15 / VAR_11->maxpacket,
    (unsigned) VAR_9 + 1);
  VAR_13 = VAR_15;
  FUNC_10(VAR_11->lch, VAR_1,
    VAR_11->ep.maxpacket >> 1, VAR_15, VAR_16,
    VAR_17, 0);
  VAR_15 *= VAR_11->maxpacket;
 }
 FUNC_9(VAR_11->lch, VAR_3,
  VAR_0, VAR_12->req.dma + VAR_12->req.actual,
  0, 0);

 FUNC_11(VAR_11->lch);
 VAR_11->dma_counter = FUNC_7(VAR_11->lch);
 VAR_14 = FUNC_8(VAR_6);
 VAR_14 |= FUNC_2(VAR_11->dma_channel);
 FUNC_12(VAR_14, VAR_6);
 FUNC_12(VAR_8 | VAR_13, FUNC_1(VAR_11->dma_channel));
 VAR_12->dma_bytes = VAR_15;
}
