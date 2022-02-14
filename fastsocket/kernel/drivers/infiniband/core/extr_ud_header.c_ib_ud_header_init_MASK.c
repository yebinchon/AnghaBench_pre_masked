
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_8__ {int pad_count; scalar_t__ transport_header_version; int opcode; } ;
struct TYPE_7__ {int ip_version; int next_header; void* payload_length; } ;
struct TYPE_6__ {void* type; } ;
struct TYPE_5__ {void* packet_length; int link_next_header; scalar_t__ link_version; } ;
struct ib_ud_header {int lrh_present; int eth_present; int vlan_present; int grh_present; int immediate_present; TYPE_4__ bth; TYPE_3__ grh; TYPE_2__ eth; TYPE_1__ lrh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct ib_ud_header*,int ,int) ;

void FUNC_2(int VAR_9,
         int VAR_10,
         int VAR_11,
         int VAR_12,
         int VAR_13,
         int VAR_14,
         struct ib_ud_header *VAR_15)
{
 FUNC_1(VAR_15, 0, sizeof *VAR_15);

 if (VAR_10) {
  u16 VAR_16;

  VAR_15->lrh.link_version = 0;
  VAR_15->lrh.link_next_header =
   VAR_13 ? VAR_4 : VAR_5;
  VAR_16 = (VAR_6 +
     VAR_1 +
     VAR_2 +
     (VAR_13 ? VAR_3 : 0) +
     VAR_9 +
     4 +
     3) / 4;
  VAR_15->lrh.packet_length = FUNC_0(VAR_16);
 }

 if (VAR_12)
  VAR_15->eth.type = FUNC_0(VAR_0);

 if (VAR_13) {
  VAR_15->grh.ip_version = 6;
  VAR_15->grh.payload_length =
   FUNC_0((VAR_1 +
         VAR_2 +
         VAR_9 +
         4 +
         3) & ~3);
  VAR_15->grh.next_header = 0x1b;
 }

 if (VAR_14)
  VAR_15->bth.opcode = VAR_8;
 else
  VAR_15->bth.opcode = VAR_7;
 VAR_15->bth.pad_count = (4 - VAR_9) & 3;
 VAR_15->bth.transport_header_version = 0;

 VAR_15->lrh_present = VAR_10;
 VAR_15->eth_present = VAR_11;
 VAR_15->vlan_present = VAR_12;
 VAR_15->grh_present = VAR_13;
 VAR_15->immediate_present = VAR_14;
}
