
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
struct TYPE_6__ {int size; void* dmaend; void* dmairq; void* dmastart; scalar_t__ start; } ;
struct TYPE_5__ {int size; void* dmaend; void* dmairq; void* dmastart; scalar_t__ start; } ;
struct tiger_hw {scalar_t__ base; TYPE_3__ recv; int name; scalar_t__ dma; scalar_t__ dma_p; TYPE_2__ send; TYPE_1__* bc; int pdev; } ;
struct TYPE_4__ {void* hrbuf; void* hsbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 void* FUNC_0 (int,int ) ;
 int FUNC_1 (scalar_t__,int,int) ;
 int FUNC_2 (void*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int,scalar_t__*) ;
 int FUNC_4 (char*,int ,...) ;
 int FUNC_5 (char*,int ,void*,void*,void*,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_6(struct tiger_hw *VAR_13)
{
 int VAR_14;

 VAR_13->dma_p = FUNC_3(VAR_13->pdev, VAR_7,
   &VAR_13->dma);
 if (!VAR_13->dma_p) {
  FUNC_4("%s: No DMA memory\n", VAR_13->name);
  return -VAR_1;
 }
 if ((u64)VAR_13->dma > 0xffffffff) {
  FUNC_4("%s: DMA outside 32 bit\n", VAR_13->name);
  return -VAR_1;
 }
 for (VAR_14 = 0; VAR_14 < 2; VAR_14++) {
  VAR_13->bc[VAR_14].hsbuf = FUNC_0(VAR_8, VAR_2);
  if (!VAR_13->bc[VAR_14].hsbuf) {
   FUNC_4("%s: no B%d send buffer\n", VAR_13->name, VAR_14 + 1);
   return -VAR_1;
  }
  VAR_13->bc[VAR_14].hrbuf = FUNC_0(VAR_6, VAR_2);
  if (!VAR_13->bc[VAR_14].hrbuf) {
   FUNC_4("%s: no B%d recv buffer\n", VAR_13->name, VAR_14 + 1);
   return -VAR_1;
  }
 }
 FUNC_1(VAR_13->dma_p, 0xff, VAR_7);

 VAR_13->send.start = VAR_13->dma_p;
 VAR_13->send.dmastart = (u32)VAR_13->dma;
 VAR_13->send.dmaend = VAR_13->send.dmastart +
  (4 * (VAR_8 - 1));
 VAR_13->send.dmairq = VAR_13->send.dmastart +
  (4 * ((VAR_8 / 2) - 1));
 VAR_13->send.size = VAR_8;

 if (VAR_12 & VAR_0)
  FUNC_5("%s: send buffer phy %#x - %#x - %#x  virt %p"
   " size %zu u32\n", VAR_13->name,
   VAR_13->send.dmastart, VAR_13->send.dmairq,
   VAR_13->send.dmaend, VAR_13->send.start, VAR_13->send.size);

 FUNC_2(VAR_13->send.dmastart, VAR_13->base + VAR_5);
 FUNC_2(VAR_13->send.dmairq, VAR_13->base + VAR_4);
 FUNC_2(VAR_13->send.dmaend, VAR_13->base + VAR_3);

 VAR_13->recv.start = VAR_13->dma_p + (VAR_7 / 2);
 VAR_13->recv.dmastart = (u32)VAR_13->dma + (VAR_7 / 2);
 VAR_13->recv.dmaend = VAR_13->recv.dmastart +
  (4 * (VAR_6 - 1));
 VAR_13->recv.dmairq = VAR_13->recv.dmastart +
  (4 * ((VAR_6 / 2) - 1));
 VAR_13->recv.size = VAR_6;

 if (VAR_12 & VAR_0)
  FUNC_5("%s: recv buffer phy %#x - %#x - %#x  virt %p"
   " size %zu u32\n", VAR_13->name,
   VAR_13->recv.dmastart, VAR_13->recv.dmairq,
   VAR_13->recv.dmaend, VAR_13->recv.start, VAR_13->recv.size);

 FUNC_2(VAR_13->recv.dmastart, VAR_13->base + VAR_11);
 FUNC_2(VAR_13->recv.dmairq, VAR_13->base + VAR_10);
 FUNC_2(VAR_13->recv.dmaend, VAR_13->base + VAR_9);
 return 0;
}
