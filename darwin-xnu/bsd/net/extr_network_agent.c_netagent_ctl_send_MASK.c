
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct netagent_session {int dummy; } ;
struct netagent_message_header {int message_type; int message_id; int message_payload_length; } ;
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







 int FUNC_2 (int ,int ,int,struct netagent_message_header*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct netagent_session*,int ,int ,int ,int) ;
 int FUNC_6 (struct netagent_session*,int ,int ,int ,int) ;
 int FUNC_7 (struct netagent_session*,int ,int ,int ,int) ;
 int FUNC_8 (struct netagent_session*,int ,int ,int ,int) ;
 int FUNC_9 (struct netagent_session*,int ,int ,int ,int) ;
 int FUNC_10 (struct netagent_session*,int,int ,int ) ;

__attribute__((used)) static errno_t
FUNC_11(kern_ctl_ref VAR_4, u_int32_t VAR_5, void *VAR_6, mbuf_t VAR_7, int VAR_8)
{
#pragma unused(kctlref, unit, flags)
 struct netagent_session *VAR_9 = (struct netagent_session *)VAR_6;
 struct netagent_message_header VAR_10;
 int VAR_11 = 0;

 if (VAR_9 == ((void*)0)) {
  FUNC_1(VAR_2, "Got a NULL session");
  VAR_11 = VAR_0;
  goto done;
 }

 if (FUNC_4(VAR_7) < sizeof(VAR_10)) {
  FUNC_0(VAR_2, "Got a bad packet, length (%lu) < sizeof header (%lu)",
     FUNC_4(VAR_7), sizeof(VAR_10));
  VAR_11 = VAR_0;
  goto done;
 }

 VAR_11 = FUNC_2(VAR_7, 0, sizeof(VAR_10), &VAR_10);
 if (VAR_11) {
  FUNC_0(VAR_2, "mbuf_copydata failed for the header: %d", VAR_11);
  VAR_11 = VAR_1;
  goto done;
 }

 switch (VAR_10.message_type) {
  case 131: {
   FUNC_7(VAR_9, VAR_10.message_id, VAR_10.message_payload_length,
                  VAR_7, sizeof(VAR_10));
   break;
  }
  case 129: {
   FUNC_8(VAR_9, VAR_10.message_id, VAR_10.message_payload_length,
              VAR_7, sizeof(VAR_10));
   break;
  }
  case 128: {
   FUNC_9(VAR_9, VAR_10.message_id, VAR_10.message_payload_length,
           VAR_7, sizeof(VAR_10));
   break;
  }
  case 132: {
   FUNC_6(VAR_9, VAR_10.message_id, VAR_10.message_payload_length,
        VAR_7, sizeof(VAR_10));
   break;
  }
  case 134: {
   FUNC_1(VAR_2, "NETAGENT_MESSAGE_TYPE_ASSERT no longer supported");
   break;
  }
  case 130: {
   FUNC_1(VAR_2, "NETAGENT_MESSAGE_TYPE_UNASSERT no longer supported");
   break;
  }
  case 133: {
   FUNC_5(VAR_9, VAR_10.message_id, VAR_10.message_payload_length,
             VAR_7, sizeof(VAR_10));
   break;
  }
  default: {
   FUNC_0(VAR_2, "Received unknown message type %d", VAR_10.message_type);
   FUNC_10(VAR_9, VAR_10.message_type, VAR_10.message_id,
           VAR_3);
   break;
  }
 }

done:
 FUNC_3(VAR_7);
 return (VAR_11);
}
