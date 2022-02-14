
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_rsa_key {int private_key; struct bignum* iqmp; struct bignum* dmq1; struct bignum* dmp1; struct bignum* q; struct bignum* p; struct bignum* d; struct bignum* e; struct bignum* n; } ;
struct bignum {int dummy; } ;
struct asn1_hdr {scalar_t__ class; scalar_t__ tag; int length; int * payload; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int const*,size_t,struct asn1_hdr*) ;
 scalar_t__ FUNC_1 (struct bignum*,int ) ;
 int FUNC_2 (struct bignum*) ;
 void* FUNC_3 () ;
 int FUNC_4 (struct crypto_rsa_key*) ;
 int * FUNC_5 (int const*,int const*,struct bignum*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ,char*,int const*,int) ;
 int FUNC_8 (int ,char*,...) ;

struct crypto_rsa_key *
FUNC_9(const u8 *VAR_3, size_t VAR_4)
{
 struct crypto_rsa_key *VAR_5;
 struct bignum *VAR_6;
 struct asn1_hdr VAR_7;
 const u8 *VAR_8, *VAR_9;

 VAR_5 = (struct crypto_rsa_key *)FUNC_6(sizeof(*VAR_5));
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 VAR_5->private_key = 1;

 VAR_5->n = FUNC_3();
 VAR_5->e = FUNC_3();
 VAR_5->d = FUNC_3();
 VAR_5->p = FUNC_3();
 VAR_5->q = FUNC_3();
 VAR_5->dmp1 = FUNC_3();
 VAR_5->dmq1 = FUNC_3();
 VAR_5->iqmp = FUNC_3();

 if (VAR_5->n == ((void*)0) || VAR_5->e == ((void*)0) || VAR_5->d == ((void*)0) ||
     VAR_5->p == ((void*)0) || VAR_5->q == ((void*)0) || VAR_5->dmp1 == ((void*)0) ||
     VAR_5->dmq1 == ((void*)0) || VAR_5->iqmp == ((void*)0)) {
  FUNC_4(VAR_5);
  return ((void*)0);
 }
 if (FUNC_0(VAR_3, VAR_4, &VAR_7) < 0 ||
     VAR_7.class != VAR_0 ||
     VAR_7.tag != VAR_1) {
  FUNC_8(VAR_2, "RSA: Expected SEQUENCE "
      "(public key) - found class %d tag 0x%x",
      VAR_7.class, VAR_7.tag);
  goto error;
 }
 VAR_8 = VAR_7.payload;
 VAR_9 = VAR_8 + VAR_7.length;

 VAR_6 = FUNC_3();
 if (VAR_6 == ((void*)0))
  goto error;
 VAR_8 = FUNC_5(VAR_8, VAR_9, VAR_6);
 if (VAR_8 == ((void*)0) || FUNC_1(VAR_6, 0) != 0) {
  FUNC_8(VAR_2, "RSA: Expected zero INTEGER in the "
      "beginning of private key; not found");
  FUNC_2(VAR_6);
  goto error;
 }
 FUNC_2(VAR_6);

 VAR_8 = FUNC_5(VAR_8, VAR_9, VAR_5->n);
 VAR_8 = FUNC_5(VAR_8, VAR_9, VAR_5->e);
 VAR_8 = FUNC_5(VAR_8, VAR_9, VAR_5->d);
 VAR_8 = FUNC_5(VAR_8, VAR_9, VAR_5->p);
 VAR_8 = FUNC_5(VAR_8, VAR_9, VAR_5->q);
 VAR_8 = FUNC_5(VAR_8, VAR_9, VAR_5->dmp1);
 VAR_8 = FUNC_5(VAR_8, VAR_9, VAR_5->dmq1);
 VAR_8 = FUNC_5(VAR_8, VAR_9, VAR_5->iqmp);

 if (VAR_8 == ((void*)0))
  goto error;

 if (VAR_8 != VAR_9) {
  FUNC_7(VAR_2,
       "RSA: Extra data in public key SEQUENCE",
       VAR_8, VAR_9 - VAR_8);
  goto error;
 }

 return VAR_5;

error:
 FUNC_4(VAR_5);
 return ((void*)0);
}
