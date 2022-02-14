
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_2__ {int tls_version; } ;
struct tlsv1_server {int client_version; scalar_t__ const* client_random; size_t num_cipher_suites; int* cipher_suites; int cipher_suite; scalar_t__ const* session_ticket; int session_ticket_len; int state; TYPE_1__ rl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ const VAR_13 ;
 int VAR_14 ;
 scalar_t__ const VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 void* FUNC_0 (scalar_t__ const*) ;
 size_t FUNC_1 (scalar_t__ const*) ;
 int FUNC_2 (scalar_t__ const*) ;
 scalar_t__ const* FUNC_3 (int) ;
 int FUNC_4 (scalar_t__ const*,scalar_t__ const*,int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (struct tlsv1_server*,int ,int ) ;
 int FUNC_8 (int ,char*,scalar_t__ const*,scalar_t__ const) ;
 int FUNC_9 (int ,char*,...) ;

__attribute__((used)) static int FUNC_10(struct tlsv1_server *VAR_20, u8 VAR_21,
        const u8 *VAR_22, size_t *VAR_23)
{
 const u8 *VAR_24, *VAR_25, *VAR_26;
 size_t VAR_27, VAR_28, VAR_29, VAR_30;
 u16 VAR_31;
 u16 VAR_32;
 int VAR_33;
 u16 VAR_34, VAR_35;

 if (VAR_21 != VAR_11) {
  FUNC_9(VAR_0, "TLSv1: Expected Handshake; "
      "received content type 0x%x", VAR_21);
  FUNC_7(VAR_20, VAR_7,
       VAR_9);
  return -1;
 }

 VAR_24 = VAR_22;
 VAR_27 = *VAR_23;

 if (VAR_27 < 4)
  goto decode_error;


 if (*VAR_24 != VAR_13) {
  FUNC_9(VAR_0, "TLSv1: Received unexpected handshake "
      "message %d (expected ClientHello)", *VAR_24);
  FUNC_7(VAR_20, VAR_7,
       VAR_9);
  return -1;
 }
 FUNC_9(VAR_0, "TLSv1: Received ClientHello");
 VAR_24++;

 VAR_28 = FUNC_1(VAR_24);
 VAR_24 += 3;
 VAR_27 -= 4;

 if (VAR_28 > VAR_27)
  goto decode_error;



 FUNC_8(VAR_2, "TLSv1: ClientHello", VAR_24, VAR_28);
 VAR_25 = VAR_24 + VAR_28;


 if (VAR_25 - VAR_24 < 2)
  goto decode_error;
 VAR_20->client_version = FUNC_0(VAR_24);
 FUNC_9(VAR_0, "TLSv1: Client version %d.%d",
     VAR_20->client_version >> 8, VAR_20->client_version & 0xff);
 if (VAR_20->client_version < VAR_17) {
  FUNC_9(VAR_0, "TLSv1: Unexpected protocol version in "
      "ClientHello %u.%u",
      VAR_20->client_version >> 8,
      VAR_20->client_version & 0xff);
  FUNC_7(VAR_20, VAR_7,
       VAR_8);
  return -1;
 }
 VAR_24 += 2;

 if (VAR_16 == VAR_17)
  VAR_20->rl.tls_version = VAR_17;




 else if (VAR_20->client_version > VAR_18)
  VAR_20->rl.tls_version = VAR_18;
 else
  VAR_20->rl.tls_version = VAR_20->client_version;
 FUNC_9(VAR_0, "TLSv1: Using TLS v%s",
     FUNC_5(VAR_20->rl.tls_version));


 if (VAR_25 - VAR_24 < VAR_14)
  goto decode_error;

 FUNC_4(VAR_20->client_random, VAR_24, VAR_14);
 VAR_24 += VAR_14;
 FUNC_8(VAR_2, "TLSv1: client_random",
      VAR_20->client_random, VAR_14);


 if (VAR_25 - VAR_24 < 1)
  goto decode_error;
 if (VAR_25 - VAR_24 < 1 + *VAR_24 || *VAR_24 > VAR_15)
  goto decode_error;
 FUNC_8(VAR_2, "TLSv1: client session_id", VAR_24 + 1, *VAR_24);
 VAR_24 += 1 + *VAR_24;



 if (VAR_25 - VAR_24 < 2)
  goto decode_error;
 VAR_32 = FUNC_0(VAR_24);
 VAR_24 += 2;
 if (VAR_25 - VAR_24 < VAR_32)
  goto decode_error;
 FUNC_8(VAR_2, "TLSv1: client cipher suites",
      VAR_24, VAR_32);
 if (VAR_32 & 1)
  goto decode_error;
 VAR_32 /= 2;

 VAR_31 = 0;
 for (VAR_29 = 0; !VAR_31 && VAR_29 < VAR_20->num_cipher_suites; VAR_29++) {
  VAR_26 = VAR_24;
  for (VAR_30 = 0; VAR_30 < VAR_32; VAR_30++) {
   u16 VAR_36 = FUNC_0(VAR_26);
   VAR_26 += 2;
   if (!VAR_31 && VAR_36 == VAR_20->cipher_suites[VAR_29]) {
    VAR_31 = VAR_36;
    break;
   }
  }
 }
 VAR_24 += VAR_32 * 2;
 if (!VAR_31) {
  FUNC_9(VAR_1, "TLSv1: No supported cipher suite "
      "available");
  FUNC_7(VAR_20, VAR_7,
       VAR_5);
  return -1;
 }

 if (FUNC_6(&VAR_20->rl, VAR_31) < 0) {
  FUNC_9(VAR_0, "TLSv1: Failed to set CipherSuite for "
      "record layer");
  FUNC_7(VAR_20, VAR_7,
       VAR_6);
  return -1;
 }

 VAR_20->cipher_suite = VAR_31;


 if (VAR_25 - VAR_24 < 1)
  goto decode_error;
 VAR_32 = *VAR_24++;
 if (VAR_25 - VAR_24 < VAR_32)
  goto decode_error;
 FUNC_8(VAR_2, "TLSv1: client compression_methods",
      VAR_24, VAR_32);
 VAR_33 = 0;
 for (VAR_29 = 0; VAR_29 < VAR_32; VAR_29++) {
  if (*VAR_24++ == VAR_10)
   VAR_33 = 1;
 }
 if (!VAR_33) {
  FUNC_9(VAR_1, "TLSv1: Client does not accept NULL "
      "compression");
  FUNC_7(VAR_20, VAR_7,
       VAR_5);
  return -1;
 }

 if (VAR_25 - VAR_24 == 1) {
  FUNC_9(VAR_0, "TLSv1: Unexpected extra octet in the "
       "end of ClientHello: 0x%02x", *VAR_24);
  goto decode_error;
 }

 if (VAR_25 - VAR_24 >= 2) {

  VAR_35 = FUNC_0(VAR_24);
  VAR_24 += 2;

  FUNC_9(VAR_0, "TLSv1: %u bytes of ClientHello "
      "extensions", VAR_35);
  if (VAR_25 - VAR_24 != VAR_35) {
   FUNC_9(VAR_0, "TLSv1: Invalid ClientHello "
       "extension list length %u (expected %u)",
       VAR_35, (unsigned int) (VAR_25 - VAR_24));
   goto decode_error;
  }
  while (VAR_24 < VAR_25) {
   if (VAR_25 - VAR_24 < 2) {
    FUNC_9(VAR_0, "TLSv1: Invalid "
        "extension_type field");
    goto decode_error;
   }

   VAR_34 = FUNC_0(VAR_24);
   VAR_24 += 2;

   if (VAR_25 - VAR_24 < 2) {
    FUNC_9(VAR_0, "TLSv1: Invalid "
        "extension_data length field");
    goto decode_error;
   }

   VAR_35 = FUNC_0(VAR_24);
   VAR_24 += 2;

   if (VAR_25 - VAR_24 < VAR_35) {
    FUNC_9(VAR_0, "TLSv1: Invalid "
        "extension_data field");
    goto decode_error;
   }

   FUNC_9(VAR_0, "TLSv1: ClientHello Extension "
       "type %u", VAR_34);
   FUNC_8(VAR_2, "TLSv1: ClientHello "
        "Extension data", VAR_24, VAR_35);

   if (VAR_34 == VAR_12) {
    FUNC_2(VAR_20->session_ticket);
    VAR_20->session_ticket = FUNC_3(VAR_35);
    if (VAR_20->session_ticket) {
     FUNC_4(VAR_20->session_ticket, VAR_24,
        VAR_35);
     VAR_20->session_ticket_len = VAR_35;
    }
   }

   VAR_24 += VAR_35;
  }
 }

 *VAR_23 = VAR_25 - VAR_22;

 FUNC_9(VAR_0, "TLSv1: ClientHello OK - proceed to "
     "ServerHello");
 VAR_20->state = VAR_3;

 return 0;

decode_error:
 FUNC_9(VAR_0, "TLSv1: Failed to decode ClientHello");
 FUNC_7(VAR_20, VAR_7,
      VAR_4);
 return -1;
}
