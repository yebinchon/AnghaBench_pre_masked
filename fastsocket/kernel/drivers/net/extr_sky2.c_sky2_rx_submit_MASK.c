
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sky2_port {int rx_data_size; } ;
struct rx_ring_info {int * frag_addr; int skb; int data_addr; } ;
struct TYPE_2__ {int nr_frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (struct sky2_port*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct sky2_port *VAR_3,
      const struct rx_ring_info *VAR_4)
{
 int VAR_5;

 FUNC_1(VAR_3, VAR_1, VAR_4->data_addr, VAR_3->rx_data_size);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4->skb)->nr_frags; VAR_5++)
  FUNC_1(VAR_3, VAR_0, VAR_4->frag_addr[VAR_5], VAR_2);
}
