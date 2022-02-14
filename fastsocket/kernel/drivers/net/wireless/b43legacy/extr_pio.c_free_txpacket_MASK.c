
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43legacy_pioqueue {int nr_txfree; int txfree; } ;
struct b43legacy_pio_txpacket {int list; scalar_t__ skb; struct b43legacy_pioqueue* queue; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct b43legacy_pio_txpacket *VAR_0,
     int VAR_1)
{
 struct b43legacy_pioqueue *VAR_2 = VAR_0->queue;

 if (VAR_0->skb) {
  if (VAR_1)
   FUNC_1(VAR_0->skb);
  else
   FUNC_0(VAR_0->skb);
 }
 FUNC_2(&VAR_0->list, &VAR_2->txfree);
 VAR_2->nr_txfree++;
}
