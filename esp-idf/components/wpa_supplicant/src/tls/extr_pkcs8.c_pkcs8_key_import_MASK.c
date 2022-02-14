
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_private_key {int dummy; } ;
struct bignum {int dummy; } ;
struct asn1_oid {int len; int* oid; } ;
struct asn1_hdr {scalar_t__ tag; int length; int * payload; int class; } ;
typedef int obuf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int const*,int,struct asn1_hdr*) ;
 scalar_t__ FUNC_1 (int *,int,struct asn1_oid*,int const**) ;
 int FUNC_2 (struct asn1_oid*,char*,int) ;
 scalar_t__ FUNC_3 (struct bignum*,int ) ;
 int FUNC_4 (struct bignum*) ;
 struct bignum* FUNC_5 () ;
 scalar_t__ FUNC_6 (struct bignum*,int *,int) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (int ,char*,...) ;

struct crypto_private_key * FUNC_9(const u8 *VAR_5, size_t VAR_6)
{
 struct asn1_hdr VAR_7;
 const u8 *VAR_8, *VAR_9;
 struct bignum *VAR_10;
 struct asn1_oid VAR_11;
 char VAR_12[80];




 if (FUNC_0(VAR_5, VAR_6, &VAR_7) < 0 ||
     VAR_7.class != VAR_0 ||
     VAR_7.tag != VAR_3) {
  FUNC_8(VAR_4, "PKCS #8: Does not start with PKCS #8 "
      "header (SEQUENCE); assume PKCS #8 not used");
  return ((void*)0);
 }
 VAR_8 = VAR_7.payload;
 VAR_9 = VAR_8 + VAR_7.length;


 if (FUNC_0(VAR_8, VAR_9 - VAR_8, &VAR_7) < 0 ||
     VAR_7.class != VAR_0 || VAR_7.tag != VAR_1) {
  FUNC_8(VAR_4, "PKCS #8: Expected INTEGER - found "
      "class %d tag 0x%x; assume PKCS #8 not used",
      VAR_7.class, VAR_7.tag);
  return ((void*)0);
 }

 VAR_10 = FUNC_5();
 if (VAR_10 == ((void*)0))
  return ((void*)0);

 if (FUNC_6(VAR_10, VAR_7.payload, VAR_7.length) < 0) {
  FUNC_8(VAR_4, "PKCS #8: Failed to parse INTEGER");
  FUNC_4(VAR_10);
  return ((void*)0);
 }
 VAR_8 = VAR_7.payload + VAR_7.length;

 if (FUNC_3(VAR_10, 0) != 0) {
  FUNC_8(VAR_4, "PKCS #8: Expected zero INTEGER in the "
      "beginning of private key; not found; assume "
      "PKCS #8 not used");
  FUNC_4(VAR_10);
  return ((void*)0);
 }
 FUNC_4(VAR_10);



 if (FUNC_0(VAR_8, VAR_6, &VAR_7) < 0 ||
     VAR_7.class != VAR_0 ||
     VAR_7.tag != VAR_3) {
  FUNC_8(VAR_4, "PKCS #8: Expected SEQUENCE "
      "(AlgorithmIdentifier) - found class %d tag 0x%x; "
      "assume PKCS #8 not used",
      VAR_7.class, VAR_7.tag);
  return ((void*)0);
 }

 if (FUNC_1(VAR_7.payload, VAR_7.length, &VAR_11, &VAR_8)) {
  FUNC_8(VAR_4, "PKCS #8: Failed to parse OID "
      "(algorithm); assume PKCS #8 not used");
  return ((void*)0);
 }

 FUNC_2(&VAR_11, VAR_12, sizeof(VAR_12));
 FUNC_8(VAR_4, "PKCS #8: algorithm=%s", VAR_12);

 if (VAR_11.len != 7 ||
     VAR_11.oid[0] != 1 ||
     VAR_11.oid[1] != 2 ||
     VAR_11.oid[2] != 840 ||
     VAR_11.oid[3] != 113549 ||
     VAR_11.oid[4] != 1 ||
     VAR_11.oid[5] != 1 ||
     VAR_11.oid[6] != 1 ) {
  FUNC_8(VAR_4, "PKCS #8: Unsupported private key "
      "algorithm %s", VAR_12);
  return ((void*)0);
 }

 VAR_8 = VAR_7.payload + VAR_7.length;


 if (FUNC_0(VAR_8, VAR_9 - VAR_8, &VAR_7) < 0 ||
     VAR_7.class != VAR_0 ||
     VAR_7.tag != VAR_2) {
  FUNC_8(VAR_4, "PKCS #8: Expected OCTETSTRING "
      "(privateKey) - found class %d tag 0x%x",
      VAR_7.class, VAR_7.tag);
  return ((void*)0);
 }
 FUNC_8(VAR_4, "PKCS #8: Try to parse RSAPrivateKey");

 return (struct crypto_private_key *)
  FUNC_7(VAR_7.payload, VAR_7.length);
}
