
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43legacy_pioqueue {int nr_txfree; int txfree; struct b43legacy_pio_txpacket* tx_packets_cache; } ;
struct b43legacy_pio_txpacket {int list; struct b43legacy_pioqueue* queue; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct b43legacy_pioqueue *VAR_1)
{
 struct b43legacy_pio_txpacket *VAR_2;
 int VAR_3;

 VAR_1->nr_txfree = VAR_0;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2 = &(VAR_1->tx_packets_cache[VAR_3]);

  VAR_2->queue = VAR_1;
  FUNC_0(&VAR_2->list);

  FUNC_1(&VAR_2->list, &VAR_1->txfree);
 }
}
