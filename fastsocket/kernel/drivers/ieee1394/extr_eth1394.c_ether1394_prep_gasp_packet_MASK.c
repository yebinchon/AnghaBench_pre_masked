
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct hpsb_packet {int header_size; int tcode; int* header; int data_size; int node_id; int speed_code; void** data; } ;
struct eth1394_priv {int broadcast_channel; int bc_sspd; TYPE_1__* host; } ;
typedef void* quadlet_t ;
struct TYPE_2__ {int node_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct hpsb_packet *VAR_6,
           struct eth1394_priv *VAR_7,
           struct sk_buff *VAR_8, int VAR_9)
{
 VAR_6->header_size = 4;
 VAR_6->tcode = VAR_5;

 VAR_6->header[0] = VAR_9 << 16 | 3 << 14 | VAR_7->broadcast_channel << 8 |
         VAR_5 << 4;
 VAR_6->data_size = VAR_9;
 VAR_6->data = (quadlet_t *)VAR_8->data - 2;
 VAR_6->data[0] = FUNC_0(VAR_7->host->node_id << 16 |
     VAR_1);
 VAR_6->data[1] = FUNC_0(VAR_2 << 24 |
     VAR_3);

 VAR_6->speed_code = VAR_7->bc_sspd;


 VAR_6->node_id = VAR_4 | VAR_0;
}
