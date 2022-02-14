
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int tls_version; } ;
struct tlsv1_server {int (* session_ticket_cb ) (int ,scalar_t__,int ,int ,int ,int ) ;int use_session_ticket; TYPE_1__ rl; int verify; int master_secret; int server_random; int client_random; int session_ticket_len; scalar_t__ session_ticket; int session_ticket_cb_ctx; int cipher_suite; scalar_t__ session_id_len; int session_id; } ;
struct os_time {int sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct os_time*) ;
 int FUNC_4 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_7 (int *,int *,int) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int ,int *,int,int *,int,size_t*) ;
 int FUNC_9 (struct tlsv1_server*,int ,int ) ;
 scalar_t__ FUNC_10 (struct tlsv1_server*,int *,int ) ;
 int FUNC_11 (int ,char*,int ,scalar_t__) ;
 int FUNC_12 (int ,char*) ;

__attribute__((used)) static int FUNC_13(struct tlsv1_server *VAR_12,
      u8 **VAR_13, u8 *VAR_14)
{
 u8 *VAR_15, *VAR_16, *VAR_17, *VAR_18;
 struct os_time VAR_19;
 size_t VAR_20;

 VAR_15 = *VAR_13;

 FUNC_12(VAR_0, "TLSv1: Send ServerHello");
 VAR_16 = VAR_15;
 VAR_15 += VAR_10;

 FUNC_3(&VAR_19);
 FUNC_2(VAR_12->server_random, VAR_19.sec);
 if (FUNC_5(VAR_12->server_random + 4, VAR_9 - 4)) {
  FUNC_12(VAR_1, "TLSv1: Could not generate "
      "server_random");
  return -1;
 }
 FUNC_11(VAR_2, "TLSv1: server_random",
      VAR_12->server_random, VAR_9);

 VAR_12->session_id_len = VAR_11;
 if (FUNC_5(VAR_12->session_id, VAR_12->session_id_len)) {
  FUNC_12(VAR_1, "TLSv1: Could not generate "
      "session_id");
  return -1;
 }
 FUNC_11(VAR_2, "TLSv1: session_id",
      VAR_12->session_id, VAR_12->session_id_len);




 VAR_17 = VAR_15;

 *VAR_15++ = VAR_8;

 VAR_18 = VAR_15;
 VAR_15 += 3;


 FUNC_0(VAR_15, VAR_12->rl.tls_version);
 VAR_15 += 2;

 FUNC_4(VAR_15, VAR_12->server_random, VAR_9);
 VAR_15 += VAR_9;

 *VAR_15++ = VAR_12->session_id_len;
 FUNC_4(VAR_15, VAR_12->session_id, VAR_12->session_id_len);
 VAR_15 += VAR_12->session_id_len;

 FUNC_0(VAR_15, VAR_12->cipher_suite);
 VAR_15 += 2;

 *VAR_15++ = VAR_6;

 if (VAR_12->session_ticket && VAR_12->session_ticket_cb) {
  int VAR_21 = VAR_12->session_ticket_cb(
   VAR_12->session_ticket_cb_ctx,
   VAR_12->session_ticket, VAR_12->session_ticket_len,
   VAR_12->client_random, VAR_12->server_random,
   VAR_12->master_secret);
  if (VAR_21 < 0) {
   FUNC_12(VAR_0, "TLSv1: SessionTicket callback "
       "indicated failure");
   FUNC_9(VAR_12, VAR_5,
        VAR_3);
   return -1;
  }
  VAR_12->use_session_ticket = VAR_21;

  if (VAR_12->use_session_ticket) {
   if (FUNC_10(VAR_12, ((void*)0), 0) < 0) {
    FUNC_12(VAR_0, "TLSv1: Failed to "
        "derive keys");
    FUNC_9(VAR_12, VAR_5,
         VAR_4);
    return -1;
   }
  }
 }

 FUNC_1(VAR_18, VAR_15 - VAR_18 - 3);
 FUNC_7(&VAR_12->verify, VAR_17, VAR_15 - VAR_17);

 if (FUNC_8(&VAR_12->rl, VAR_7,
         VAR_16, VAR_14 - VAR_16, VAR_17, VAR_15 - VAR_17,
         &VAR_20) < 0) {
  FUNC_12(VAR_0, "TLSv1: Failed to create TLS record");
  FUNC_9(VAR_12, VAR_5,
       VAR_4);
  return -1;
 }
 VAR_15 = VAR_16 + VAR_20;

 *VAR_13 = VAR_15;

 return 0;
}
