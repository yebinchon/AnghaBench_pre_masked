
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node_entry {int nodeid; int generation; int host; } ;
struct hpsb_packet {int node_id; int generation; int host; } ;


 int FUNC_0 () ;

void FUNC_1(struct node_entry *VAR_0, struct hpsb_packet *VAR_1)
{
 VAR_1->host = VAR_0->host;
 VAR_1->generation = VAR_0->generation;
 FUNC_0();
 VAR_1->node_id = VAR_0->nodeid;
}
