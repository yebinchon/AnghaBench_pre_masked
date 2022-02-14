
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct defer_queue {int head; int tail; unsigned int* tag; int defer_bits; } ;
struct nv_swncq_port_priv {struct defer_queue defer_queue; } ;
struct ata_queued_cmd {int dummy; } ;
struct ata_port {struct nv_swncq_port_priv* private_data; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int) ;
 struct ata_queued_cmd* FUNC_1 (struct ata_port*,unsigned int) ;

__attribute__((used)) static struct ata_queued_cmd *FUNC_2(struct ata_port *VAR_2)
{
 struct nv_swncq_port_priv *VAR_3 = VAR_2->private_data;
 struct defer_queue *VAR_4 = &VAR_3->defer_queue;
 unsigned int VAR_5;

 if (VAR_4->head == VAR_4->tail)
  return ((void*)0);

 VAR_5 = VAR_4->tag[VAR_4->head & (VAR_0 - 1)];
 VAR_4->tag[VAR_4->head++ & (VAR_0 - 1)] = VAR_1;
 FUNC_0(!(VAR_4->defer_bits & (1 << VAR_5)));
 VAR_4->defer_bits &= ~(1 << VAR_5);

 return FUNC_1(VAR_2, VAR_5);
}
