
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct x509_certificate {struct x509_certificate* next; } ;
struct tlsv1_client {int state; int disable_time_checks; TYPE_1__* cred; int server_rsa_key; } ;
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
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 size_t FUNC_0 (scalar_t__ const*) ;






 int FUNC_1 (int ) ;
 int FUNC_2 (struct tlsv1_client*,int ,int) ;
 scalar_t__ FUNC_3 (scalar_t__ const*,size_t,int *) ;
 int FUNC_4 (struct tlsv1_client*,scalar_t__,scalar_t__ const*,size_t*) ;
 int FUNC_5 (struct tlsv1_client*,scalar_t__,scalar_t__ const*,size_t*) ;
 int FUNC_6 (struct tlsv1_client*,scalar_t__,scalar_t__ const*,size_t*) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (struct x509_certificate*) ;
 scalar_t__ FUNC_9 (int ,struct x509_certificate*,int*,int ) ;
 struct x509_certificate* FUNC_10 (scalar_t__ const*,size_t) ;

__attribute__((used)) static int FUNC_11(struct tlsv1_client *VAR_16, u8 VAR_17,
       const u8 *VAR_18, size_t *VAR_19)
{
 const u8 *VAR_20, *VAR_21;
 size_t VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
 u8 VAR_27;
 struct x509_certificate *VAR_28 = ((void*)0), *VAR_29 = ((void*)0), *VAR_30;
 int VAR_31;

 if (VAR_17 != VAR_11) {
  FUNC_7(VAR_0, "TLSv1: Expected Handshake; "
      "received content type 0x%x", VAR_17);
  FUNC_2(VAR_16, VAR_7,
     VAR_8);
  return -1;
 }

 VAR_20 = VAR_18;
 VAR_22 = *VAR_19;

 if (VAR_22 < 4) {
  FUNC_7(VAR_0, "TLSv1: Too short Certificate message "
      "(len=%lu)", (unsigned long) VAR_22);
  FUNC_2(VAR_16, VAR_7, VAR_6);
  return -1;
 }

 VAR_27 = *VAR_20++;
 VAR_23 = FUNC_0(VAR_20);
 VAR_20 += 3;
 VAR_22 -= 4;

 if (VAR_23 > VAR_22) {
  FUNC_7(VAR_0, "TLSv1: Unexpected Certificate message "
      "length (len=%lu != left=%lu)",
      (unsigned long) VAR_23, (unsigned long) VAR_22);
  FUNC_2(VAR_16, VAR_7, VAR_6);
  return -1;
 }

 if (VAR_27 == VAR_15)
  return FUNC_6(VAR_16, VAR_17, VAR_18,
             VAR_19);
 if (VAR_27 == VAR_13)
  return FUNC_4(VAR_16, VAR_17, VAR_18,
             VAR_19);
 if (VAR_27 == VAR_14)
  return FUNC_5(VAR_16, VAR_17, VAR_18,
           VAR_19);
 if (VAR_27 != VAR_12) {
  FUNC_7(VAR_0, "TLSv1: Received unexpected handshake "
      "message %d (expected Certificate/"
      "ServerKeyExchange/CertificateRequest/"
      "ServerHelloDone)", VAR_27);
  FUNC_2(VAR_16, VAR_7,
     VAR_8);
  return -1;
 }

 FUNC_7(VAR_0, "TLSv1: Received Certificate (certificate_list len %lu)",
     (unsigned long) VAR_23);
 VAR_21 = VAR_20 + VAR_23;

 if (VAR_21 - VAR_20 < 3) {
  FUNC_7(VAR_0, "TLSv1: Too short Certificate "
      "(left=%lu)", (unsigned long) VAR_22);
  FUNC_2(VAR_16, VAR_7, VAR_6);
  return -1;
 }

 VAR_24 = FUNC_0(VAR_20);
 VAR_20 += 3;

 if ((size_t) (VAR_21 - VAR_20) != VAR_24) {
  FUNC_7(VAR_0, "TLSv1: Unexpected certificate_list "
      "length (len=%lu left=%lu)",
      (unsigned long) VAR_24,
      (unsigned long) (VAR_21 - VAR_20));
  FUNC_2(VAR_16, VAR_7, VAR_6);
  return -1;
 }

 VAR_26 = 0;
 while (VAR_20 < VAR_21) {
  if (VAR_21 - VAR_20 < 3) {
   FUNC_7(VAR_0, "TLSv1: Failed to parse "
       "certificate_list");
   FUNC_2(VAR_16, VAR_7,
      VAR_6);
   FUNC_8(VAR_28);
   return -1;
  }

  VAR_25 = FUNC_0(VAR_20);
  VAR_20 += 3;

  if ((size_t) (VAR_21 - VAR_20) < VAR_25) {
   FUNC_7(VAR_0, "TLSv1: Unexpected certificate "
       "length (len=%lu left=%lu)",
       (unsigned long) VAR_25,
       (unsigned long) (VAR_21 - VAR_20));
   FUNC_2(VAR_16, VAR_7,
      VAR_6);
   FUNC_8(VAR_28);
   return -1;
  }

  FUNC_7(VAR_0, "TLSv1: Certificate %lu (len %lu)",
      (unsigned long) VAR_26, (unsigned long) VAR_25);

  if (VAR_26 == 0) {
   FUNC_1(VAR_16->server_rsa_key);
   if (FUNC_3(VAR_20, VAR_25,
        &VAR_16->server_rsa_key)) {
    FUNC_7(VAR_0, "TLSv1: Failed to parse "
        "the certificate");
    FUNC_2(VAR_16, VAR_7,
       VAR_2);
    FUNC_8(VAR_28);
    return -1;
   }
  }

  VAR_30 = FUNC_10(VAR_20, VAR_25);
  if (VAR_30 == ((void*)0)) {
   FUNC_7(VAR_0, "TLSv1: Failed to parse "
       "the certificate");
   FUNC_2(VAR_16, VAR_7,
      VAR_2);
   FUNC_8(VAR_28);
   return -1;
  }

  if (VAR_29 == ((void*)0))
   VAR_28 = VAR_30;
  else
   VAR_29->next = VAR_30;
  VAR_29 = VAR_30;

  VAR_26++;
  VAR_20 += VAR_25;
 }

 if (VAR_16->cred &&
     FUNC_9(VAR_16->cred->trusted_certs, VAR_28,
         &VAR_31, VAR_16->disable_time_checks)
     < 0) {
  int VAR_32;
  FUNC_7(VAR_0, "TLSv1: Server certificate chain "
      "validation failed (reason=%d)", VAR_31);
  switch (VAR_31) {
  case 133:
   VAR_32 = VAR_2;
   break;
  case 128:
   VAR_32 = VAR_10;
   break;
  case 131:
   VAR_32 = VAR_4;
   break;
  case 132:
   VAR_32 = VAR_3;
   break;
  case 130:
   VAR_32 = VAR_5;
   break;
  case 129:
   VAR_32 = VAR_9;
   break;
  default:
   VAR_32 = VAR_2;
   break;
  }
  FUNC_2(VAR_16, VAR_7, VAR_32);
  FUNC_8(VAR_28);
  return -1;
 }

 FUNC_8(VAR_28);

 *VAR_19 = VAR_21 - VAR_18;
 VAR_16->state = VAR_1;

 return 0;
}
