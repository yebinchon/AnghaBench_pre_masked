
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct b43legacy_wldev {TYPE_1__* wl; } ;
struct b43legacy_dmaring {int stopped; int index; int tx; } ;
struct TYPE_3__ {int* tx_queue_stopped; int hw; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct b43legacy_wldev*,int ) ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct b43legacy_dmaring*,struct sk_buff**) ;
 scalar_t__ FUNC_7 (struct b43legacy_dmaring*) ;
 int FUNC_8 (int ,unsigned int) ;
 struct b43legacy_dmaring* FUNC_9 (struct b43legacy_wldev*,unsigned int) ;
 scalar_t__ FUNC_10 (struct b43legacy_dmaring*) ;
 unsigned int FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (int) ;

int FUNC_13(struct b43legacy_wldev *VAR_4,
       struct sk_buff *VAR_5)
{
 struct b43legacy_dmaring *VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_9(VAR_4, FUNC_11(VAR_5));
 FUNC_0(!VAR_6->tx);

 if (FUNC_12(VAR_6->stopped)) {




  if (FUNC_2(VAR_4, VAR_0))
   FUNC_4(VAR_4->wl, "Packet after queue stopped\n");
  return -VAR_2;
 }

 if (FUNC_12(FUNC_1(FUNC_7(VAR_6) < VAR_3))) {


  FUNC_4(VAR_4->wl, "DMA queue overflow\n");
  return -VAR_2;
 }



 VAR_7 = FUNC_6(VAR_6, &VAR_5);
 if (FUNC_12(VAR_7 == -VAR_1)) {


  FUNC_5(VAR_5);
  return 0;
 }
 if (FUNC_12(VAR_7)) {
  FUNC_4(VAR_4->wl, "DMA tx mapping failure\n");
  return VAR_7;
 }
 if ((FUNC_7(VAR_6) < VAR_3) ||
     FUNC_10(VAR_6)) {

  unsigned int VAR_8 = FUNC_11(VAR_5);
  FUNC_8(VAR_4->wl->hw, VAR_8);
  VAR_4->wl->tx_queue_stopped[VAR_8] = 1;
  VAR_6->stopped = 1;
  if (FUNC_2(VAR_4, VAR_0))
   FUNC_3(VAR_4->wl, "Stopped TX ring %d\n",
          VAR_6->index);
 }
 return VAR_7;
}
