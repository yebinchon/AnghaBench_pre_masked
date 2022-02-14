
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct defer_queue {int tail; int head; int defer_bits; int* tag; } ;
struct nv_swncq_port_priv {struct defer_queue defer_queue; } ;
struct ata_queued_cmd {int tag; } ;
struct ata_port {struct nv_swncq_port_priv* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct ata_port *VAR_1, struct ata_queued_cmd *VAR_2)
{
 struct nv_swncq_port_priv *VAR_3 = VAR_1->private_data;
 struct defer_queue *VAR_4 = &VAR_3->defer_queue;


 FUNC_0(VAR_4->tail - VAR_4->head == VAR_0);
 VAR_4->defer_bits |= (1 << VAR_2->tag);
 VAR_4->tag[VAR_4->tail++ & (VAR_0 - 1)] = VAR_2->tag;
}
