
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_private_key {int dummy; } ;
struct asn1_hdr {scalar_t__ class; scalar_t__ tag; size_t length; int * payload; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int const*,int,struct asn1_hdr*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int const*,size_t,int *,size_t,char const*,size_t*) ;
 struct crypto_private_key* FUNC_3 (int *,size_t) ;
 int FUNC_4 (int ,char*,...) ;

struct crypto_private_key *
FUNC_5(const u8 *VAR_4, size_t VAR_5, const char *VAR_6)
{
 struct asn1_hdr VAR_7;
 const u8 *VAR_8, *VAR_9, *VAR_10;
 size_t VAR_11;
 u8 *VAR_12;
 size_t VAR_13;

 if (VAR_6 == ((void*)0))
  return ((void*)0);
 if (FUNC_0(VAR_4, VAR_5, &VAR_7) < 0 ||
     VAR_7.class != VAR_0 ||
     VAR_7.tag != VAR_2) {
  FUNC_4(VAR_3, "PKCS #8: Does not start with PKCS #8 "
      "header (SEQUENCE); assume encrypted PKCS #8 not "
      "used");
  return ((void*)0);
 }
 VAR_8 = VAR_7.payload;
 VAR_9 = VAR_8 + VAR_7.length;


 if (FUNC_0(VAR_8, VAR_9 - VAR_8, &VAR_7) < 0 ||
     VAR_7.class != VAR_0 ||
     VAR_7.tag != VAR_2) {
  FUNC_4(VAR_3, "PKCS #8: Expected SEQUENCE "
      "(AlgorithmIdentifier) - found class %d tag 0x%x; "
      "assume encrypted PKCS #8 not used",
      VAR_7.class, VAR_7.tag);
  return ((void*)0);
 }
 VAR_10 = VAR_7.payload;
 VAR_11 = VAR_7.length;
 VAR_8 = VAR_7.payload + VAR_7.length;


 if (FUNC_0(VAR_8, VAR_9 - VAR_8, &VAR_7) < 0 ||
     VAR_7.class != VAR_0 ||
     VAR_7.tag != VAR_1) {
  FUNC_4(VAR_3, "PKCS #8: Expected OCTETSTRING "
      "(encryptedData) - found class %d tag 0x%x",
      VAR_7.class, VAR_7.tag);
  return ((void*)0);
 }

 VAR_12 = FUNC_2(VAR_10, VAR_11, VAR_7.payload, VAR_7.length,
        VAR_6, &VAR_13);
 if (VAR_12) {
  struct crypto_private_key *VAR_14;
  VAR_14 = FUNC_3(VAR_12, VAR_13);
  FUNC_1(VAR_12);
  return VAR_14;
 }

 return ((void*)0);
}
