
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
typedef int u_int32_t ;
struct necp_session {int proc_pid; int proc_uuid; scalar_t__ proc_locked; } ;
struct necp_packet_header {int packet_type; int message_id; } ;
typedef int proc_uuid ;
typedef int mbuf_t ;
typedef int kern_ctl_ref ;
typedef int header ;
typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int,struct necp_packet_header*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct necp_session*,int ,int ,int) ;
 int FUNC_7 (struct necp_session*,int ,int ,int *,int ,int,int *) ;
 int FUNC_8 (struct necp_session*,int ,int ,int) ;
 int FUNC_9 (struct necp_session*,int ,int ,int) ;
 int FUNC_10 (struct necp_session*,int ,int ,int) ;
 int FUNC_11 (struct necp_session*,int ,int ,int ,int ,int) ;
 int FUNC_12 (struct necp_session*,int ,int ,int) ;
 int FUNC_13 (struct necp_session*,int ,int ,int) ;
 int FUNC_14 (struct necp_session*,int ,int ,int) ;
 int FUNC_15 (struct necp_session*,int ,int ,int) ;
 int FUNC_16 (struct necp_session*,int ,int ,int) ;
 int FUNC_17 (struct necp_session*,int,int ,int ) ;
 int FUNC_18 (int ,int ,int) ;
 int FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (int ,int ) ;

__attribute__((used)) static errno_t
FUNC_21(kern_ctl_ref VAR_5, u_int32_t VAR_6, void *VAR_7, mbuf_t VAR_8, int VAR_9)
{
#pragma unused(kctlref, unit, flags)
 struct necp_session *VAR_10 = (struct necp_session *)VAR_7;
 struct necp_packet_header VAR_11;
 int VAR_12 = 0;

 if (VAR_10 == ((void*)0)) {
  FUNC_1(VAR_2, "Got a NULL session");
  VAR_12 = VAR_0;
  goto done;
 }

 if (FUNC_5(VAR_8) < sizeof(VAR_11)) {
  FUNC_0(VAR_2, "Got a bad packet, length (%lu) < sizeof header (%lu)", FUNC_5(VAR_8), sizeof(VAR_11));
  VAR_12 = VAR_0;
  goto done;
 }

 VAR_12 = FUNC_3(VAR_8, 0, sizeof(VAR_11), &VAR_11);
 if (VAR_12) {
  FUNC_0(VAR_2, "mbuf_copydata failed for the header: %d", VAR_12);
  VAR_12 = VAR_1;
  goto done;
 }

 if (VAR_10->proc_locked) {

  uuid_t VAR_13;
  FUNC_18(FUNC_2(), VAR_13, sizeof(VAR_13));
  if (FUNC_20(VAR_13, VAR_10->proc_uuid) != 0) {
   FUNC_17(VAR_10, VAR_11.packet_type, VAR_11.message_id, VAR_3);
   goto done;
  }
 } else {

  FUNC_18(FUNC_2(), VAR_10->proc_uuid, sizeof(VAR_10->proc_uuid));
  VAR_10->proc_pid = FUNC_19(FUNC_2());
 }

 switch (VAR_11.packet_type) {
  case 137: {
   FUNC_7(VAR_10, VAR_11.message_id, VAR_8, ((void*)0), 0, sizeof(VAR_11), ((void*)0));
   break;
  }
  case 132: {
   FUNC_12(VAR_10, VAR_11.message_id, VAR_8, sizeof(VAR_11));
   break;
  }
  case 135: {
   FUNC_9(VAR_10, VAR_11.message_id, VAR_8, sizeof(VAR_11));
   break;
  }
  case 136: {
   FUNC_8(VAR_10, VAR_11.message_id, VAR_8, sizeof(VAR_11));
   break;
  }
  case 131: {
   FUNC_13(VAR_10, VAR_11.message_id, VAR_8, sizeof(VAR_11));
   break;
  }
  case 134: {
   FUNC_10(VAR_10, VAR_11.message_id, VAR_8, sizeof(VAR_11));
   break;
  }
  case 133: {
   FUNC_11(VAR_10, VAR_11.message_id, VAR_8, 0, 0, sizeof(VAR_11));
   break;
  }
  case 129: {
   FUNC_15(VAR_10, VAR_11.message_id, VAR_8, sizeof(VAR_11));
   break;
  }
  case 138: {
   FUNC_6(VAR_10, VAR_11.message_id, VAR_8, sizeof(VAR_11));
   break;
  }
  case 130: {
   FUNC_14(VAR_10, VAR_11.message_id, VAR_8, sizeof(VAR_11));
   break;
  }
  case 128: {
   FUNC_16(VAR_10, VAR_11.message_id, VAR_8, sizeof(VAR_11));
   break;
  }
  default: {
   FUNC_0(VAR_2, "Received unknown message type %d", VAR_11.packet_type);
   FUNC_17(VAR_10, VAR_11.packet_type, VAR_11.message_id, VAR_4);
   break;
  }
 }

done:
 FUNC_4(VAR_8);
 return (VAR_12);
}
