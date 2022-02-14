
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int cipher_suite; } ;
struct tlsv1_client {int state; TYPE_1__ rl; } ;
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
 scalar_t__ VAR_9 ;
 size_t FUNC_0 (scalar_t__ const*) ;
 int FUNC_1 (struct tlsv1_client*,int ,int ) ;
 struct tls_cipher_suite* FUNC_2 (int ) ;
 int FUNC_3 (struct tlsv1_client*,scalar_t__,scalar_t__ const*,size_t*) ;
 int FUNC_4 (struct tlsv1_client*,scalar_t__,scalar_t__ const*,size_t*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct tlsv1_client*,scalar_t__ const*,size_t) ;
 int FUNC_7 (int ,char*,scalar_t__ const*,size_t) ;
 int FUNC_8 (int ,char*,...) ;

__attribute__((used)) static int FUNC_9(struct tlsv1_client *VAR_10, u8 VAR_11,
        const u8 *VAR_12, size_t *VAR_13)
{
 const u8 *VAR_14, *VAR_15;
 size_t VAR_16, VAR_17;
 u8 VAR_18;
 const struct tls_cipher_suite *VAR_19;

 if (VAR_11 != VAR_5) {
  FUNC_8(VAR_0, "TLSv1: Expected Handshake; "
      "received content type 0x%x", VAR_11);
  FUNC_1(VAR_10, VAR_3,
     VAR_4);
  return -1;
 }

 VAR_14 = VAR_12;
 VAR_16 = *VAR_13;

 if (VAR_16 < 4) {
  FUNC_8(VAR_0, "TLSv1: Too short ServerKeyExchange "
      "(Left=%lu)", (unsigned long) VAR_16);
  FUNC_1(VAR_10, VAR_3, VAR_2);
  return -1;
 }

 VAR_18 = *VAR_14++;
 VAR_17 = FUNC_0(VAR_14);
 VAR_14 += 3;
 VAR_16 -= 4;

 if (VAR_17 > VAR_16) {
  FUNC_8(VAR_0, "TLSv1: Mismatch in ServerKeyExchange "
      "length (len=%lu != left=%lu)",
      (unsigned long) VAR_17, (unsigned long) VAR_16);
  FUNC_1(VAR_10, VAR_3, VAR_2);
  return -1;
 }

 VAR_15 = VAR_14 + VAR_17;

 if (VAR_18 == VAR_6)
  return FUNC_3(VAR_10, VAR_11, VAR_12,
             VAR_13);
 if (VAR_18 == VAR_7)
  return FUNC_4(VAR_10, VAR_11, VAR_12,
           VAR_13);
 if (VAR_18 != VAR_8) {
  FUNC_8(VAR_0, "TLSv1: Received unexpected handshake "
      "message %d (expected ServerKeyExchange/"
      "CertificateRequest/ServerHelloDone)", VAR_18);
  FUNC_1(VAR_10, VAR_3,
     VAR_4);
  return -1;
 }

 FUNC_8(VAR_0, "TLSv1: Received ServerKeyExchange");

 if (!FUNC_5(VAR_10->rl.cipher_suite)) {
  FUNC_8(VAR_0, "TLSv1: ServerKeyExchange not allowed "
      "with the selected cipher suite");
  FUNC_1(VAR_10, VAR_3,
     VAR_4);
  return -1;
 }

 FUNC_7(VAR_0, "TLSv1: ServerKeyExchange", VAR_14, VAR_17);
 VAR_19 = FUNC_2(VAR_10->rl.cipher_suite);
 if (VAR_19 && VAR_19->key_exchange == VAR_9) {
  if (FUNC_6(VAR_10, VAR_14, VAR_17) < 0) {
   FUNC_1(VAR_10, VAR_3,
      VAR_2);
   return -1;
  }
 } else {
  FUNC_8(VAR_0, "TLSv1: UnexpectedServerKeyExchange");
  FUNC_1(VAR_10, VAR_3,
     VAR_4);
  return -1;
 }

 *VAR_13 = VAR_15 - VAR_12;
 VAR_10->state = VAR_1;

 return 0;
}
