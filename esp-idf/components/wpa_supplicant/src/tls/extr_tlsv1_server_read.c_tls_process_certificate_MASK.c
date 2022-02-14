
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct x509_certificate {struct x509_certificate* next; } ;
struct tlsv1_server {int state; TYPE_1__* cred; int client_rsa_key; scalar_t__ verify_peer; } ;
struct TYPE_2__ {int trusted_certs; } ;


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
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 size_t FUNC_0 (scalar_t__ const*) ;






 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__ const*,size_t,int *) ;
 int FUNC_3 (struct tlsv1_server*,scalar_t__,scalar_t__ const*,size_t*) ;
 int FUNC_4 (struct tlsv1_server*,int ,int) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (struct x509_certificate*) ;
 scalar_t__ FUNC_7 (int ,struct x509_certificate*,int*,int ) ;
 struct x509_certificate* FUNC_8 (scalar_t__ const*,size_t) ;

__attribute__((used)) static int FUNC_9(struct tlsv1_server *VAR_14, u8 VAR_15,
       const u8 *VAR_16, size_t *VAR_17)
{
 const u8 *VAR_18, *VAR_19;
 size_t VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
 u8 VAR_25;
 struct x509_certificate *VAR_26 = ((void*)0), *VAR_27 = ((void*)0), *VAR_28;
 int VAR_29;

 if (VAR_15 != VAR_11) {
  FUNC_5(VAR_1, "TLSv1: Expected Handshake; "
      "received content type 0x%x", VAR_15);
  FUNC_4(VAR_14, VAR_7,
       VAR_8);
  return -1;
 }

 VAR_18 = VAR_16;
 VAR_20 = *VAR_17;

 if (VAR_20 < 4) {
  FUNC_5(VAR_1, "TLSv1: Too short Certificate message "
      "(len=%lu)", (unsigned long) VAR_20);
  FUNC_4(VAR_14, VAR_7,
       VAR_6);
  return -1;
 }

 VAR_25 = *VAR_18++;
 VAR_21 = FUNC_0(VAR_18);
 VAR_18 += 3;
 VAR_20 -= 4;

 if (VAR_21 > VAR_20) {
  FUNC_5(VAR_1, "TLSv1: Unexpected Certificate message "
      "length (len=%lu != left=%lu)",
      (unsigned long) VAR_21, (unsigned long) VAR_20);
  FUNC_4(VAR_14, VAR_7,
       VAR_6);
  return -1;
 }

 if (VAR_25 == VAR_13) {
  if (VAR_14->verify_peer) {
   FUNC_5(VAR_1, "TLSv1: Client did not include "
       "Certificate");
   FUNC_4(VAR_14, VAR_7,
        VAR_8);
   return -1;
  }

  return FUNC_3(VAR_14, VAR_15, VAR_16,
             VAR_17);
 }
 if (VAR_25 != VAR_12) {
  FUNC_5(VAR_1, "TLSv1: Received unexpected handshake "
      "message %d (expected Certificate/"
      "ClientKeyExchange)", VAR_25);
  FUNC_4(VAR_14, VAR_7,
       VAR_8);
  return -1;
 }

 FUNC_5(VAR_1, "TLSv1: Received Certificate (certificate_list len %lu)",
     (unsigned long) VAR_21);
 VAR_19 = VAR_18 + VAR_21;

 if (VAR_19 - VAR_18 < 3) {
  FUNC_5(VAR_1, "TLSv1: Too short Certificate "
      "(left=%lu)", (unsigned long) VAR_20);
  FUNC_4(VAR_14, VAR_7,
       VAR_6);
  return -1;
 }

 VAR_22 = FUNC_0(VAR_18);
 VAR_18 += 3;

 if ((size_t) (VAR_19 - VAR_18) != VAR_22) {
  FUNC_5(VAR_1, "TLSv1: Unexpected certificate_list "
      "length (len=%lu left=%lu)",
      (unsigned long) VAR_22,
      (unsigned long) (VAR_19 - VAR_18));
  FUNC_4(VAR_14, VAR_7,
       VAR_6);
  return -1;
 }

 VAR_24 = 0;
 while (VAR_18 < VAR_19) {
  if (VAR_19 - VAR_18 < 3) {
   FUNC_5(VAR_1, "TLSv1: Failed to parse "
       "certificate_list");
   FUNC_4(VAR_14, VAR_7,
        VAR_6);
   FUNC_6(VAR_26);
   return -1;
  }

  VAR_23 = FUNC_0(VAR_18);
  VAR_18 += 3;

  if ((size_t) (VAR_19 - VAR_18) < VAR_23) {
   FUNC_5(VAR_1, "TLSv1: Unexpected certificate "
       "length (len=%lu left=%lu)",
       (unsigned long) VAR_23,
       (unsigned long) (VAR_19 - VAR_18));
   FUNC_4(VAR_14, VAR_7,
        VAR_6);
   FUNC_6(VAR_26);
   return -1;
  }

  FUNC_5(VAR_1, "TLSv1: Certificate %lu (len %lu)",
      (unsigned long) VAR_24, (unsigned long) VAR_23);

  if (VAR_24 == 0) {
   FUNC_1(VAR_14->client_rsa_key);
   if (FUNC_2(VAR_18, VAR_23,
        &VAR_14->client_rsa_key)) {
    FUNC_5(VAR_1, "TLSv1: Failed to parse "
        "the certificate");
    FUNC_4(VAR_14, VAR_7,
         VAR_2);
    FUNC_6(VAR_26);
    return -1;
   }
  }

  VAR_28 = FUNC_8(VAR_18, VAR_23);
  if (VAR_28 == ((void*)0)) {
   FUNC_5(VAR_1, "TLSv1: Failed to parse "
       "the certificate");
   FUNC_4(VAR_14, VAR_7,
        VAR_2);
   FUNC_6(VAR_26);
   return -1;
  }

  if (VAR_27 == ((void*)0))
   VAR_26 = VAR_28;
  else
   VAR_27->next = VAR_28;
  VAR_27 = VAR_28;

  VAR_24++;
  VAR_18 += VAR_23;
 }

 if (FUNC_7(VAR_14->cred->trusted_certs, VAR_26,
         &VAR_29, 0) < 0) {
  int VAR_30;
  FUNC_5(VAR_1, "TLSv1: Server certificate chain "
      "validation failed (reason=%d)", VAR_29);
  switch (VAR_29) {
  case 133:
   VAR_30 = VAR_2;
   break;
  case 128:
   VAR_30 = VAR_10;
   break;
  case 131:
   VAR_30 = VAR_4;
   break;
  case 132:
   VAR_30 = VAR_3;
   break;
  case 130:
   VAR_30 = VAR_5;
   break;
  case 129:
   VAR_30 = VAR_9;
   break;
  default:
   VAR_30 = VAR_2;
   break;
  }
  FUNC_4(VAR_14, VAR_7, VAR_30);
  FUNC_6(VAR_26);
  return -1;
 }

 FUNC_6(VAR_26);

 *VAR_17 = VAR_19 - VAR_16;

 VAR_14->state = VAR_0;

 return 0;
}
