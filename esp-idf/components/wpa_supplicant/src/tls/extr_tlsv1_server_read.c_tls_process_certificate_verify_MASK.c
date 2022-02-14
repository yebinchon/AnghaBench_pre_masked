
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_4__ {scalar_t__ tls_version; } ;
struct TYPE_3__ {int * sha1_cert; int * md5_cert; int * sha256_cert; } ;
struct tlsv1_server {int state; TYPE_2__ rl; int * client_rsa_key; TYPE_1__ verify; scalar_t__ verify_peer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ const VAR_14 ;
 scalar_t__ const VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (scalar_t__ const*) ;
 size_t FUNC_1 (scalar_t__ const*) ;
 scalar_t__ FUNC_2 (int *,scalar_t__*,size_t*) ;
 scalar_t__ FUNC_3 (int *,scalar_t__ const*,int,scalar_t__*,size_t*) ;
 int FUNC_4 (scalar_t__*) ;
 scalar_t__* FUNC_5 (int) ;
 scalar_t__ FUNC_6 (scalar_t__*,...) ;
 int FUNC_7 (scalar_t__*,scalar_t__*,size_t) ;
 int FUNC_8 (struct tlsv1_server*,scalar_t__,scalar_t__ const*,size_t*) ;
 int FUNC_9 (struct tlsv1_server*,int ,int ) ;
 int FUNC_10 (int ,char*,scalar_t__ const*,int) ;
 int FUNC_11 (int ,char*,scalar_t__*,size_t) ;
 int FUNC_12 (int ,char*,...) ;

__attribute__((used)) static int FUNC_13(struct tlsv1_server *VAR_17, u8 VAR_18,
       const u8 *VAR_19, size_t *VAR_20)
{
 const u8 *VAR_21, *VAR_22;
 size_t VAR_23, VAR_24;
 u8 VAR_25;
 size_t VAR_26, VAR_27;
 u8 VAR_28[VAR_1 + VAR_4], *VAR_29, *VAR_30;
 enum { SIGN_ALG_RSA, SIGN_ALG_DSA } VAR_31 = SIGN_ALG_RSA;
 u16 VAR_32;

 if (VAR_18 == VAR_11) {
  if (VAR_17->verify_peer) {
   FUNC_12(VAR_2, "TLSv1: Client did not include "
       "CertificateVerify");
   FUNC_9(VAR_17, VAR_9,
        VAR_10);
   return -1;
  }

  return FUNC_8(VAR_17, VAR_18, VAR_19,
            VAR_20);
 }

 if (VAR_18 != VAR_12) {
  FUNC_12(VAR_2, "TLSv1: Expected Handshake; "
      "received content type 0x%x", VAR_18);
  FUNC_9(VAR_17, VAR_9,
       VAR_10);
  return -1;
 }

 VAR_21 = VAR_19;
 VAR_23 = *VAR_20;

 if (VAR_23 < 4) {
  FUNC_12(VAR_2, "TLSv1: Too short CertificateVerify "
      "message (len=%lu)", (unsigned long) VAR_23);
  FUNC_9(VAR_17, VAR_9,
       VAR_6);
  return -1;
 }

 VAR_25 = *VAR_21++;
 VAR_24 = FUNC_1(VAR_21);
 VAR_21 += 3;
 VAR_23 -= 4;

 if (VAR_24 > VAR_23) {
  FUNC_12(VAR_2, "TLSv1: Unexpected CertificateVerify "
      "message length (len=%lu != left=%lu)",
      (unsigned long) VAR_24, (unsigned long) VAR_23);
  FUNC_9(VAR_17, VAR_9,
       VAR_6);
  return -1;
 }

 VAR_22 = VAR_21 + VAR_24;

 if (VAR_25 != VAR_13) {
  FUNC_12(VAR_2, "TLSv1: Received unexpected handshake "
      "message %d (expected CertificateVerify)", VAR_25);
  FUNC_9(VAR_17, VAR_9,
       VAR_10);
  return -1;
 }

 FUNC_12(VAR_2, "TLSv1: Received CertificateVerify");







 VAR_29 = VAR_28;
 if (VAR_31 == SIGN_ALG_RSA) {
  VAR_26 = VAR_1;
  if (VAR_17->verify.md5_cert == ((void*)0) ||
      FUNC_2(VAR_17->verify.md5_cert, VAR_29, &VAR_26) < 0)
  {
   FUNC_9(VAR_17, VAR_9,
        VAR_8);
   VAR_17->verify.md5_cert = ((void*)0);
   FUNC_2(VAR_17->verify.sha1_cert, ((void*)0), ((void*)0));
   VAR_17->verify.sha1_cert = ((void*)0);
   return -1;
  }
  VAR_29 += VAR_1;
 } else
  FUNC_2(VAR_17->verify.md5_cert, ((void*)0), ((void*)0));

 VAR_17->verify.md5_cert = ((void*)0);
 VAR_26 = VAR_4;
 if (VAR_17->verify.sha1_cert == ((void*)0) ||
     FUNC_2(VAR_17->verify.sha1_cert, VAR_29, &VAR_26) < 0) {
  VAR_17->verify.sha1_cert = ((void*)0);
  FUNC_9(VAR_17, VAR_9,
       VAR_8);
  return -1;
 }
 VAR_17->verify.sha1_cert = ((void*)0);

 if (VAR_31 == SIGN_ALG_RSA)
  VAR_26 += VAR_1;





 FUNC_10(VAR_3, "TLSv1: CertificateVerify hash", VAR_28, VAR_26);

 if (VAR_22 - VAR_21 < 2) {
  FUNC_9(VAR_17, VAR_9,
       VAR_6);
  return -1;
 }
 VAR_32 = FUNC_0(VAR_21);
 VAR_21 += 2;
 if (VAR_22 - VAR_21 < VAR_32) {
  FUNC_9(VAR_17, VAR_9,
       VAR_6);
  return -1;
 }

 FUNC_10(VAR_3, "TLSv1: Signature", VAR_21, VAR_22 - VAR_21);
 if (VAR_17->client_rsa_key == ((void*)0)) {
  FUNC_12(VAR_2, "TLSv1: No client public key to verify "
      "signature");
  FUNC_9(VAR_17, VAR_9,
       VAR_8);
  return -1;
 }

 VAR_27 = VAR_22 - VAR_21;
 VAR_30 = FUNC_5(VAR_22 - VAR_21);
 if (FUNC_3(VAR_17->client_rsa_key,
         VAR_21, VAR_22 - VAR_21, VAR_30, &VAR_27) < 0)
 {
  FUNC_12(VAR_2, "TLSv1: Failed to decrypt signature");
  FUNC_4(VAR_30);
  FUNC_9(VAR_17, VAR_9,
       VAR_7);
  return -1;
 }

 FUNC_11(VAR_3, "TLSv1: Decrypted Signature",
   VAR_30, VAR_27);
 if (VAR_27 != VAR_26 || FUNC_6(VAR_30, VAR_28, VAR_27) != 0) {
  FUNC_12(VAR_2, "TLSv1: Invalid Signature in "
      "CertificateVerify - did not match with calculated "
      "hash");
  FUNC_4(VAR_30);
  FUNC_9(VAR_17, VAR_9,
       VAR_7);
  return -1;
 }

 FUNC_4(VAR_30);

 *VAR_20 = VAR_22 - VAR_19;

 VAR_17->state = VAR_0;

 return 0;
}
