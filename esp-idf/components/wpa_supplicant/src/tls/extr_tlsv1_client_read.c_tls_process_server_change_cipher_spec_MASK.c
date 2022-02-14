
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct tlsv1_client {int (* session_ticket_cb ) (int ,int *,int ,int *,int *,int *) ;int state; int rl; int session_ticket_cb_ctx; scalar_t__ use_session_ticket; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ const VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *,int ,int *,int *,int *) ;
 int FUNC_2 (struct tlsv1_client*,int ,int ) ;
 int FUNC_3 (struct tlsv1_client*,scalar_t__,scalar_t__ const*,size_t*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static int FUNC_6(struct tlsv1_client *VAR_10,
       u8 VAR_11, const u8 *VAR_12,
       size_t *VAR_13)
{
 const u8 *VAR_14;
 size_t VAR_15;

 if (VAR_11 != VAR_9) {
  FUNC_5(VAR_0, "TLSv1: Expected ChangeCipherSpec; "
      "received content type 0x%x", VAR_11);
  if (VAR_10->use_session_ticket) {
   int VAR_16;
   FUNC_5(VAR_0, "TLSv1: Server may have "
       "rejected SessionTicket");
   VAR_10->use_session_ticket = 0;


   VAR_16 = VAR_10->session_ticket_cb(
    VAR_10->session_ticket_cb_ctx, ((void*)0), 0, ((void*)0),
    ((void*)0), ((void*)0));
   if (VAR_16 < 0) {
    FUNC_5(VAR_0, "TLSv1: SessionTicket "
        "callback indicated failure");
    FUNC_2(VAR_10, VAR_6,
       VAR_4);
    return -1;
   }
            FUNC_0("[Debug] set the state to server certificate \n");
   VAR_10->state = VAR_1;
   return FUNC_3(VAR_10, VAR_11, VAR_12,
             VAR_13);
  }
  FUNC_2(VAR_10, VAR_6,
     VAR_7);
  return -1;
 }

 VAR_14 = VAR_12;
 VAR_15 = *VAR_13;

 if (VAR_15 < 1) {
  FUNC_5(VAR_0, "TLSv1: Too short ChangeCipherSpec");
  FUNC_2(VAR_10, VAR_6, VAR_3);
  return -1;
 }

 if (*VAR_14 != VAR_8) {
  FUNC_5(VAR_0, "TLSv1: Expected ChangeCipherSpec; "
      "received data 0x%x", *VAR_14);
  FUNC_2(VAR_10, VAR_6,
     VAR_7);
  return -1;
 }

 FUNC_5(VAR_0, "TLSv1: Received ChangeCipherSpec");
 if (FUNC_4(&VAR_10->rl) < 0) {
  FUNC_5(VAR_0, "TLSv1: Failed to change read cipher "
      "for record layer");
  FUNC_2(VAR_10, VAR_6,
     VAR_5);
  return -1;
 }

 *VAR_13 = VAR_14 + 1 - VAR_12;
 VAR_10->state = VAR_2;

 return 0;
}
