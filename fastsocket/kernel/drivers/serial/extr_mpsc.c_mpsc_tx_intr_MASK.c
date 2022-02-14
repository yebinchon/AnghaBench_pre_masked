
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ulong ;
struct mpsc_tx_desc {int bytecnt; int cmdstat; } ;
struct TYPE_3__ {int tx; } ;
struct TYPE_4__ {int dev; TYPE_1__ icount; } ;
struct mpsc_port_info {int txr_tail; int txr_head; int tx_lock; scalar_t__ cache_mgmt; TYPE_2__ port; scalar_t__ txr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,void*,int,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (struct mpsc_port_info*) ;
 int FUNC_5 (struct mpsc_port_info*) ;
 int FUNC_6 (struct mpsc_port_info*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct mpsc_port_info *VAR_4)
{
 struct mpsc_tx_desc *VAR_5;
 int VAR_6 = 0;
 unsigned long VAR_7;

 FUNC_7(&VAR_4->tx_lock, VAR_7);

 if (!FUNC_6(VAR_4)) {
  VAR_5 = (struct mpsc_tx_desc *)(VAR_4->txr
    + (VAR_4->txr_tail * VAR_1));

  FUNC_2(VAR_4->port.dev, (void *)VAR_5, VAR_1,
    VAR_0);






  while (!(FUNC_1(VAR_5->cmdstat) & VAR_3)) {
   VAR_6 = 1;
   VAR_4->port.icount.tx += FUNC_0(VAR_5->bytecnt);
   VAR_4->txr_tail = (VAR_4->txr_tail+1) & (VAR_2-1);


   if (VAR_4->txr_head == VAR_4->txr_tail)
    break;

   VAR_5 = (struct mpsc_tx_desc *)(VAR_4->txr
     + (VAR_4->txr_tail * VAR_1));
   FUNC_2(VAR_4->port.dev, (void *)VAR_5,
     VAR_1, VAR_0);





  }

  FUNC_4(VAR_4);
  FUNC_5(VAR_4);
 }

 FUNC_8(&VAR_4->tx_lock, VAR_7);
 return VAR_6;
}
