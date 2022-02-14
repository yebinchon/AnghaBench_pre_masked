
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsb_packet {int ack_code; int* header; int tcode; int node_id; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,int ,...) ;





 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_1(struct hpsb_packet *VAR_8)
{
 switch (VAR_8->ack_code) {
 case 135:
  switch ((VAR_8->header[1] >> 12) & 0xf) {
  case 131:
   return 0;
  case 130:
   return -VAR_1;
  case 129:
   return -VAR_4;
  case 128:
   return -VAR_0;
  case 132:
   return -VAR_3;
  default:
   FUNC_0("received reserved rcode %d from node %d",
     (VAR_8->header[1] >> 12) & 0xf,
     VAR_8->node_id);
   return -VAR_1;
  }

 case 139:
 case 141:
 case 140:
  return -VAR_2;

 case 133:
  return -VAR_0;

 case 138:
  if (VAR_8->tcode == VAR_7
      || VAR_8->tcode == VAR_6) {
   return 0;
  } else {
   FUNC_0("impossible ack_complete from node %d "
     "(tcode %d)", VAR_8->node_id, VAR_8->tcode);
   return -VAR_1;
  }

 case 136:
  if (VAR_8->tcode == VAR_6
      || VAR_8->tcode == VAR_5) {
   return -VAR_1;
  } else {
   FUNC_0("impossible ack_data_error from node %d "
     "(tcode %d)", VAR_8->node_id, VAR_8->tcode);
   return -VAR_1;
  }

 case 142:
  return -VAR_3;

 case 134:
 case 137:
 case 145:
 case 144:
 case 146:
 case 143:

  return -VAR_1;

 default:
  FUNC_0("got invalid ack %d from node %d (tcode %d)",
    VAR_8->ack_code, VAR_8->node_id, VAR_8->tcode);
  return -VAR_1;
 }
}
