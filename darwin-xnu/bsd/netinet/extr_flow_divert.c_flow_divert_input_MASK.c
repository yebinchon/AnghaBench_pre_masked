
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flow_divert_pcb {int dummy; } ;
struct flow_divert_packet_header {scalar_t__ conn_id; int packet_type; } ;
struct flow_divert_group {int ctl_unit; } ;
typedef int mbuf_t ;
typedef int hdr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct flow_divert_pcb*,char*,int,...) ;
 int FUNC_1 (struct flow_divert_pcb*) ;
 int VAR_2 ;







 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct flow_divert_group*,int ,int) ;
 int FUNC_3 (struct flow_divert_pcb*,int ,int) ;
 int FUNC_4 (struct flow_divert_pcb*,int ,int) ;
 int FUNC_5 (struct flow_divert_pcb*,int ,int) ;
 int FUNC_6 (struct flow_divert_group*,int ,int) ;
 int FUNC_7 (struct flow_divert_pcb*,int ,int) ;
 int FUNC_8 (struct flow_divert_pcb*,int ,int) ;
 int FUNC_9 (int) ;
 struct flow_divert_pcb* FUNC_10 (scalar_t__,struct flow_divert_group*) ;
 int FUNC_11 (int ,int ,int,struct flow_divert_packet_header*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 struct flow_divert_pcb VAR_6 ;
 scalar_t__ FUNC_14 (scalar_t__) ;

__attribute__((used)) static int
FUNC_15(mbuf_t VAR_7, struct flow_divert_group *VAR_8)
{
 struct flow_divert_packet_header VAR_9;
 int VAR_10 = 0;
 struct flow_divert_pcb *VAR_11;

 if (FUNC_13(VAR_7) < sizeof(VAR_9)) {
  FUNC_0(VAR_3, &VAR_6, "got a bad packet, length (%lu) < sizeof hdr (%lu)", FUNC_13(VAR_7), sizeof(VAR_9));
  VAR_10 = VAR_0;
  goto done;
 }

 if (FUNC_13(VAR_7) > VAR_2) {
  FUNC_0(VAR_3, &VAR_6, "got a bad packet, length (%lu) > %d", FUNC_13(VAR_7), VAR_2);
  VAR_10 = VAR_0;
  goto done;
 }

 VAR_10 = FUNC_11(VAR_7, 0, sizeof(VAR_9), &VAR_9);
 if (VAR_10) {
  FUNC_0(VAR_3, &VAR_6, "mbuf_copydata failed for the header: %d", VAR_10);
  VAR_10 = VAR_1;
  goto done;
 }

 VAR_9.conn_id = FUNC_14(VAR_9.conn_id);

 if (VAR_9.conn_id == 0) {
  switch (VAR_9.packet_type) {
   case 130:
    FUNC_6(VAR_8, VAR_7, sizeof(VAR_9));
    break;
   case 134:
    FUNC_2(VAR_8, VAR_7, sizeof(VAR_9));
    break;
   default:
    FUNC_0(VAR_5, &VAR_6, "got an unknown message type: %d", VAR_9.packet_type);
    break;
  }
  goto done;
 }

 VAR_11 = FUNC_10(VAR_9.conn_id, VAR_8);
 if (VAR_11 == ((void*)0)) {
  if (VAR_9.packet_type != 133 && VAR_9.packet_type != 128) {
   FUNC_0(VAR_4, &VAR_6, "got a %s message from group %d for an unknown pcb: %u", FUNC_9(VAR_9.packet_type), VAR_8->ctl_unit, VAR_9.conn_id);
  }
  goto done;
 }

 switch (VAR_9.packet_type) {
  case 132:
   FUNC_4(VAR_11, VAR_7, sizeof(VAR_9));
   break;
  case 133:
   FUNC_3(VAR_11, VAR_7, sizeof(VAR_9));
   break;
  case 131:
   FUNC_5(VAR_11, VAR_7, sizeof(VAR_9));
   break;
  case 128:
   FUNC_8(VAR_11, VAR_7, sizeof(VAR_9));
   break;
  case 129:
   FUNC_7(VAR_11, VAR_7, sizeof(VAR_9));
   break;
  default:
   FUNC_0(VAR_5, VAR_11, "got an unknown message type: %d", VAR_9.packet_type);
   break;
 }

 FUNC_1(VAR_11);

done:
 FUNC_12(VAR_7);
 return VAR_10;
}
