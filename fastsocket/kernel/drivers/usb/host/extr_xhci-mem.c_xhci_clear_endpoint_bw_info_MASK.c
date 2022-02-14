
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_bw_info {scalar_t__ max_esit_payload; scalar_t__ type; scalar_t__ max_packet_size; scalar_t__ num_packets; scalar_t__ mult; scalar_t__ ep_interval; } ;



void FUNC_0(struct xhci_bw_info *VAR_0)
{
 VAR_0->ep_interval = 0;
 VAR_0->mult = 0;
 VAR_0->num_packets = 0;
 VAR_0->max_packet_size = 0;
 VAR_0->type = 0;
 VAR_0->max_esit_payload = 0;
}
