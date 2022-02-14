
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ tls_key_exchange ;
struct TYPE_2__ {int cipher_suite; } ;
struct tlsv1_server {int state; TYPE_1__ rl; } ;
struct tls_cipher_suite {scalar_t__ key_exchange; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 size_t FUNC_0 (scalar_t__ const*) ;
 struct tls_cipher_suite* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct tlsv1_server*,scalar_t__ const*,scalar_t__ const*) ;
 scalar_t__ FUNC_3 (struct tlsv1_server*,scalar_t__ const*,scalar_t__ const*) ;
 int FUNC_4 (struct tlsv1_server*,int ,int ) ;
 int FUNC_5 (int ,char*,scalar_t__ const*,size_t) ;
 int FUNC_6 (int ,char*,...) ;

__attribute__((used)) static int FUNC_7(struct tlsv1_server *VAR_9, u8 VAR_10,
        const u8 *VAR_11, size_t *VAR_12)
{
 const u8 *VAR_13, *VAR_14;
 size_t VAR_15, VAR_16;
 u8 VAR_17;
 tls_key_exchange VAR_18;
 const struct tls_cipher_suite *VAR_19;

 if (VAR_10 != VAR_5) {
  FUNC_6(VAR_1, "TLSv1: Expected Handshake; "
      "received content type 0x%x", VAR_10);
  FUNC_4(VAR_9, VAR_3,
       VAR_4);
  return -1;
 }

 VAR_13 = VAR_11;
 VAR_15 = *VAR_12;

 if (VAR_15 < 4) {
  FUNC_6(VAR_1, "TLSv1: Too short ClientKeyExchange "
      "(Left=%lu)", (unsigned long) VAR_15);
  FUNC_4(VAR_9, VAR_3,
       VAR_2);
  return -1;
 }

 VAR_17 = *VAR_13++;
 VAR_16 = FUNC_0(VAR_13);
 VAR_13 += 3;
 VAR_15 -= 4;

 if (VAR_16 > VAR_15) {
  FUNC_6(VAR_1, "TLSv1: Mismatch in ClientKeyExchange "
      "length (len=%lu != left=%lu)",
      (unsigned long) VAR_16, (unsigned long) VAR_15);
  FUNC_4(VAR_9, VAR_3,
       VAR_2);
  return -1;
 }

 VAR_14 = VAR_13 + VAR_16;

 if (VAR_17 != VAR_6) {
  FUNC_6(VAR_1, "TLSv1: Received unexpected handshake "
      "message %d (expected ClientKeyExchange)", VAR_17);
  FUNC_4(VAR_9, VAR_3,
       VAR_4);
  return -1;
 }

 FUNC_6(VAR_1, "TLSv1: Received ClientKeyExchange");

 FUNC_5(VAR_1, "TLSv1: ClientKeyExchange", VAR_13, VAR_16);

 VAR_19 = FUNC_1(VAR_9->rl.cipher_suite);
 if (VAR_19 == ((void*)0))
  VAR_18 = VAR_8;
 else
  VAR_18 = VAR_19->key_exchange;

 if (VAR_18 == VAR_7 &&
     FUNC_2(VAR_9, VAR_13, VAR_14) < 0)
  return -1;

 if (VAR_18 != VAR_7 &&
     FUNC_3(VAR_9, VAR_13, VAR_14) < 0)
  return -1;

 *VAR_12 = VAR_14 - VAR_11;

 VAR_9->state = VAR_0;

 return 0;
}
