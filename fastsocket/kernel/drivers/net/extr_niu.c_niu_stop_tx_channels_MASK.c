
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_ring_info {int dummy; } ;
struct niu {int num_tx_rings; struct tx_ring_info* tx_rings; } ;


 int FUNC_0 (struct niu*,struct tx_ring_info*) ;

__attribute__((used)) static void FUNC_1(struct niu *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_tx_rings; VAR_1++) {
  struct tx_ring_info *VAR_2 = &VAR_0->tx_rings[VAR_1];

  FUNC_0(VAR_0, VAR_2);
 }
}
