
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct x509_certificate {int public_key_len; int * public_key; int public_key_alg; } ;
struct asn1_hdr {scalar_t__ class; scalar_t__ tag; int length; scalar_t__* payload; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__ const*,int,struct asn1_hdr*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *,scalar_t__ const*,int) ;
 int FUNC_4 (int ,char*,int *,int) ;
 int FUNC_5 (int ,char*,...) ;
 scalar_t__ FUNC_6 (scalar_t__ const*,int,int *,scalar_t__ const**) ;

__attribute__((used)) static int FUNC_7(const u8 *VAR_5, size_t VAR_6,
     struct x509_certificate *VAR_7,
     const u8 **VAR_8)
{
 struct asn1_hdr VAR_9;
 const u8 *VAR_10, *VAR_11;
 VAR_10 = VAR_5;
 VAR_11 = VAR_5 + VAR_6;

 if (FUNC_0(VAR_10, VAR_11 - VAR_10, &VAR_9) < 0 ||
     VAR_9.class != VAR_0 ||
     VAR_9.tag != VAR_2) {
  FUNC_5(VAR_3, "X509: Expected SEQUENCE "
      "(SubjectPublicKeyInfo) - found class %d tag 0x%x",
      VAR_9.class, VAR_9.tag);
  return -1;
 }
 VAR_10 = VAR_9.payload;

 if (VAR_10 + VAR_9.length > VAR_11)
  return -1;
 VAR_11 = VAR_10 + VAR_9.length;
 *VAR_8 = VAR_11;

 if (FUNC_6(VAR_10, VAR_11 - VAR_10,
         &VAR_7->public_key_alg, &VAR_10))
  return -1;

 if (FUNC_0(VAR_10, VAR_11 - VAR_10, &VAR_9) < 0 ||
     VAR_9.class != VAR_0 ||
     VAR_9.tag != VAR_1) {
  FUNC_5(VAR_3, "X509: Expected BITSTRING "
      "(subjectPublicKey) - found class %d tag 0x%x",
      VAR_9.class, VAR_9.tag);
  return -1;
 }
 if (VAR_9.length < 1)
  return -1;
 VAR_10 = VAR_9.payload;
 if (*VAR_10) {
  FUNC_5(VAR_3, "X509: BITSTRING - %d unused bits",
      *VAR_10);






 }
 FUNC_1(VAR_7->public_key);
 VAR_7->public_key = FUNC_2(VAR_9.length - 1);
 if (VAR_7->public_key == ((void*)0)) {
  FUNC_5(VAR_3, "X509: Failed to allocate memory for "
      "public key");
  return -1;
 }
 FUNC_3(VAR_7->public_key, VAR_10 + 1, VAR_9.length - 1);
 VAR_7->public_key_len = VAR_9.length - 1;
 FUNC_4(VAR_4, "X509: subjectPublicKey",
      VAR_7->public_key, VAR_7->public_key_len);

 return 0;
}
