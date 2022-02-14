
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct x509_certificate {int public_key_len; int public_key; } ;
struct crypto_public_key {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct crypto_public_key* FUNC_0 (int const*,size_t) ;
 struct crypto_public_key* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,int const*,size_t) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct x509_certificate*) ;
 struct x509_certificate* FUNC_5 (int const*,size_t) ;

int FUNC_6(const u8 *VAR_3, size_t VAR_4, struct crypto_public_key **VAR_5)
{
 struct x509_certificate *VAR_6;

 FUNC_2(VAR_2, "TLSv1: Parse ASN.1 DER certificate",
      VAR_3, VAR_4);

 *VAR_5 = FUNC_0(VAR_3, VAR_4);
 if (*VAR_5)
  return 0;

 VAR_6 = FUNC_5(VAR_3, VAR_4);
 if (VAR_6 == ((void*)0)) {
  FUNC_3(VAR_0, "TLSv1: Failed to parse X.509 "
      "certificate");
  return -1;
 }
 *VAR_5 = FUNC_1(VAR_6->public_key, VAR_6->public_key_len);
 FUNC_4(VAR_6);

 if (*VAR_5 == ((void*)0)) {
  FUNC_3(VAR_1, "TLSv1: Failed to import "
      "server public key");
  return -1;
 }

 return 0;
}
