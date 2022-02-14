
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int const u8 ;
struct TYPE_4__ {int len; int* oid; } ;
struct TYPE_3__ {TYPE_2__ oid; } ;
struct x509_certificate {size_t sign_value_len; TYPE_1__ signature; int tbs_cert_len; int tbs_cert_start; int sign_value; int public_key_len; int public_key; } ;
struct crypto_public_key {int dummy; } ;
struct asn1_oid {int* oid; } ;
struct asn1_hdr {scalar_t__ tag; size_t length; int const* payload; int class; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int const*,int,struct asn1_hdr*) ;
 scalar_t__ FUNC_1 (int const*,size_t,struct asn1_oid*,int const**) ;
 scalar_t__ FUNC_2 (struct crypto_public_key*,int ,size_t,int const*,size_t*) ;
 int FUNC_3 (struct crypto_public_key*) ;
 struct crypto_public_key* FUNC_4 (int ,int ) ;
 int FUNC_5 (int,int *,int *,int const*) ;
 int FUNC_6 (int const*) ;
 int const* FUNC_7 (size_t) ;
 scalar_t__ FUNC_8 (int const*,int const*,size_t) ;
 int FUNC_9 (int,int *,int *,int const*) ;
 int FUNC_10 (int,int *,int *,int const*) ;
 int FUNC_11 (int ,char*,int const*,size_t) ;
 int FUNC_12 (int ,char*,...) ;
 int FUNC_13 (struct asn1_oid*) ;
 int FUNC_14 (TYPE_2__*) ;
 scalar_t__ FUNC_15 (struct asn1_oid*) ;
 scalar_t__ FUNC_16 (struct asn1_oid*) ;

int FUNC_17(struct x509_certificate *VAR_6,
         struct x509_certificate *VAR_7)
{
 struct crypto_public_key *VAR_8;
 u8 *VAR_9;
 const u8 *VAR_10, *VAR_11, *VAR_12, *VAR_13;
 size_t VAR_14;
 struct asn1_hdr VAR_15;
 struct asn1_oid VAR_16;
 u8 VAR_17[32];
 size_t VAR_18;

 if (!FUNC_14(&VAR_7->signature.oid) ||
     VAR_7->signature.oid.len != 7 ||
     VAR_7->signature.oid.oid[5] != 1 ) {
  FUNC_12(VAR_3, "X509: Unrecognized signature "
      "algorithm");
  return -1;
 }

 VAR_8 = FUNC_4(VAR_6->public_key,
          VAR_6->public_key_len);
 if (VAR_8 == ((void*)0))
  return -1;

 VAR_14 = VAR_7->sign_value_len;
 VAR_9 = FUNC_7(VAR_14);
 if (VAR_9 == ((void*)0)) {
  FUNC_3(VAR_8);
  return -1;
 }

 if (FUNC_2(VAR_8, VAR_7->sign_value,
         VAR_7->sign_value_len, VAR_9,
         &VAR_14) < 0) {
  FUNC_12(VAR_3, "X509: Failed to decrypt signature");
  FUNC_3(VAR_8);
  FUNC_6(VAR_9);
  return -1;
 }
 FUNC_3(VAR_8);

 FUNC_11(VAR_5, "X509: Signature data D", VAR_9, VAR_14);
 if (FUNC_0(VAR_9, VAR_14, &VAR_15) < 0 ||
     VAR_15.class != VAR_0 ||
     VAR_15.tag != VAR_2) {
  FUNC_12(VAR_3, "X509: Expected SEQUENCE "
      "(DigestInfo) - found class %d tag 0x%x",
      VAR_15.class, VAR_15.tag);
  FUNC_6(VAR_9);
  return -1;
 }

 VAR_10 = VAR_15.payload;
 VAR_11 = VAR_10 + VAR_15.length;
 if (FUNC_0(VAR_10, VAR_11 - VAR_10, &VAR_15) < 0 ||
     VAR_15.class != VAR_0 ||
     VAR_15.tag != VAR_2) {
  FUNC_12(VAR_3, "X509: Expected SEQUENCE "
      "(AlgorithmIdentifier) - found class %d tag 0x%x",
      VAR_15.class, VAR_15.tag);
  FUNC_6(VAR_9);
  return -1;
 }
 VAR_13 = VAR_15.payload + VAR_15.length;

 if (FUNC_1(VAR_15.payload, VAR_15.length, &VAR_16, &VAR_12)) {
  FUNC_12(VAR_3, "X509: Failed to parse digestAlgorithm");
  FUNC_6(VAR_9);
  return -1;
 }

 if (FUNC_15(&VAR_16)) {
  if (VAR_7->signature.oid.oid[6] !=
      5 ) {
   FUNC_12(VAR_3, "X509: digestAlgorithm SHA1 "
       "does not match with certificate "
       "signatureAlgorithm (%lu)",
       VAR_7->signature.oid.oid[6]);
   FUNC_6(VAR_9);
   return -1;
  }
  goto skip_digest_oid;
 }

 if (FUNC_16(&VAR_16)) {
  if (VAR_7->signature.oid.oid[6] !=
      11 ) {
   FUNC_12(VAR_3, "X509: digestAlgorithm SHA256 "
       "does not match with certificate "
       "signatureAlgorithm (%lu)",
       VAR_7->signature.oid.oid[6]);
   FUNC_6(VAR_9);
   return -1;
  }
  goto skip_digest_oid;
 }

 if (!FUNC_13(&VAR_16)) {
  FUNC_12(VAR_3, "X509: Unrecognized digestAlgorithm");
  FUNC_6(VAR_9);
  return -1;
 }
 switch (VAR_16.oid[5]) {
 case 5:
  if (VAR_7->signature.oid.oid[6] != 4 )
  {
   FUNC_12(VAR_3, "X509: digestAlgorithm MD5 does "
       "not match with certificate "
       "signatureAlgorithm (%lu)",
       VAR_7->signature.oid.oid[6]);
   FUNC_6(VAR_9);
   return -1;
  }
  break;
 case 2:
 case 4:
 default:
  FUNC_12(VAR_3, "X509: Unsupported digestAlgorithm "
      "(%lu)", VAR_16.oid[5]);
  FUNC_6(VAR_9);
  return -1;
 }

skip_digest_oid:

 VAR_10 = VAR_13;
 VAR_11 = VAR_9 + VAR_14;

 if (FUNC_0(VAR_10, VAR_11 - VAR_10, &VAR_15) < 0 ||
     VAR_15.class != VAR_0 ||
     VAR_15.tag != VAR_1) {
  FUNC_12(VAR_3, "X509: Expected OCTETSTRING "
      "(Digest) - found class %d tag 0x%x",
      VAR_15.class, VAR_15.tag);
  FUNC_6(VAR_9);
  return -1;
 }
 FUNC_11(VAR_5, "X509: Decrypted Digest",
      VAR_15.payload, VAR_15.length);

 switch (VAR_7->signature.oid.oid[6]) {
 case 4:
  FUNC_5(1, &VAR_7->tbs_cert_start, &VAR_7->tbs_cert_len,
      VAR_17);
  VAR_18 = 16;
  FUNC_11(VAR_5, "X509: Certificate hash (MD5)",
       VAR_17, VAR_18);
  break;
 case 5:
  FUNC_9(1, &VAR_7->tbs_cert_start, &VAR_7->tbs_cert_len,
       VAR_17);
  VAR_18 = 20;
  FUNC_11(VAR_5, "X509: Certificate hash (SHA1)",
       VAR_17, VAR_18);
  break;
 case 11:
  FUNC_10(1, &VAR_7->tbs_cert_start, &VAR_7->tbs_cert_len,
                        VAR_17);
  VAR_18 = 32;
  FUNC_11(VAR_5, "X509: Certificate hash (SHA256)",
       VAR_17, VAR_18);
  break;
 case 2:
 case 12:
 case 13:
 default:
  FUNC_12(VAR_4, "X509: Unsupported certificate signature "
      "algorithm (%lu)", VAR_7->signature.oid.oid[6]);
  FUNC_6(VAR_9);
  return -1;
 }

 if (VAR_15.length != VAR_18 ||
     FUNC_8(VAR_15.payload, VAR_17, VAR_15.length) != 0) {
  FUNC_12(VAR_4, "X509: Certificate Digest does not match "
      "with calculated tbsCertificate hash");
  FUNC_6(VAR_9);
  return -1;
 }

 FUNC_6(VAR_9);

 FUNC_12(VAR_3, "X509: Certificate Digest matches with "
     "calculated tbsCertificate hash");

 return 0;
}
