
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dma; int name; } ;
struct TYPE_4__ {scalar_t__ direction; scalar_t__ start_time; } ;
struct TYPE_5__ {int hcr_val; int lock; scalar_t__ rx_active; scalar_t__ busy; scalar_t__ dmaing; TYPE_1__ current_dma; } ;
typedef TYPE_2__ elp_device ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 TYPE_2__* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int,struct net_device*) ;
 int FUNC_5 (char*,int ,char*,int ) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 scalar_t__ FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_10(struct net_device *VAR_4)
{
 elp_device *VAR_5 = FUNC_3(VAR_4);
 if (VAR_5->dmaing && FUNC_9(VAR_3, VAR_5->current_dma.start_time + 10)) {
  unsigned long VAR_6, VAR_7;
  FUNC_5("%s: DMA %s timed out, %d bytes left\n", VAR_4->name,
   VAR_5->current_dma.direction ? "download" : "upload",
   FUNC_2(VAR_4->dma));
  FUNC_7(&VAR_5->lock, VAR_6);
  VAR_5->dmaing = 0;
  VAR_5->busy = 0;

  VAR_7=FUNC_0();
  FUNC_1(VAR_4->dma);
  FUNC_6(VAR_7);

  if (VAR_5->rx_active)
   VAR_5->rx_active--;
  FUNC_4(VAR_5->hcr_val & ~(VAR_1 | VAR_2 | VAR_0), VAR_4);
  FUNC_8(&VAR_5->lock, VAR_6);
 }
}
