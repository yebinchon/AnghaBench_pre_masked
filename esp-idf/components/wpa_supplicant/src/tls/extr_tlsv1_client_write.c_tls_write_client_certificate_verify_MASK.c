
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int * sha1_cert; int * md5_cert; int * sha256_cert; } ;
struct TYPE_5__ {scalar_t__ tls_version; } ;
struct tlsv1_client {TYPE_3__ verify; TYPE_2__ rl; TYPE_1__* cred; } ;
struct TYPE_4__ {int key; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int *,size_t) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int *,size_t*) ;
 scalar_t__ FUNC_3 (int ,int *,size_t,int *,size_t*) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,int *,size_t) ;
 int FUNC_6 (struct tlsv1_client*,int ,int ) ;
 int FUNC_7 (TYPE_3__*,int *,int) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int ,int *,int,int *,int,size_t*) ;
 int FUNC_9 (int ,char*,int *,size_t) ;
 int FUNC_10 (int ,char*) ;

__attribute__((used)) static int FUNC_11(struct tlsv1_client *VAR_13,
            u8 **VAR_14, u8 *VAR_15)
{
 u8 *VAR_16, *VAR_17, *VAR_18, *VAR_19, *VAR_20;
 size_t VAR_21, VAR_22, VAR_23;
 u8 VAR_24[100], *VAR_25;
 enum { SIGN_ALG_RSA, SIGN_ALG_DSA } VAR_26 = SIGN_ALG_RSA;

 VAR_16 = *VAR_14;

 FUNC_10(VAR_1, "TLSv1: Send CertificateVerify");
 VAR_17 = VAR_16;
 VAR_16 += VAR_10;


 VAR_18 = VAR_16;

 *VAR_16++ = VAR_8;

 VAR_19 = VAR_16;
 VAR_16 += 3;
 VAR_25 = VAR_24;
 if (VAR_26 == SIGN_ALG_RSA) {
  VAR_22 = VAR_0;
  if (VAR_13->verify.md5_cert == ((void*)0) ||
      FUNC_2(VAR_13->verify.md5_cert, VAR_25, &VAR_22) < 0)
  {
   FUNC_6(VAR_13, VAR_6,
      VAR_5);
   VAR_13->verify.md5_cert = ((void*)0);
   FUNC_2(VAR_13->verify.sha1_cert, ((void*)0), ((void*)0));
   VAR_13->verify.sha1_cert = ((void*)0);
   return -1;
  }
  VAR_25 += VAR_0;
 } else
  FUNC_2(VAR_13->verify.md5_cert, ((void*)0), ((void*)0));

 VAR_13->verify.md5_cert = ((void*)0);
 VAR_22 = VAR_3;
 if (VAR_13->verify.sha1_cert == ((void*)0) ||
     FUNC_2(VAR_13->verify.sha1_cert, VAR_25, &VAR_22) < 0) {
  VAR_13->verify.sha1_cert = ((void*)0);
  FUNC_6(VAR_13, VAR_6,
     VAR_5);
  return -1;
 }
 VAR_13->verify.sha1_cert = ((void*)0);

 if (VAR_26 == SIGN_ALG_RSA)
  VAR_22 += VAR_0;





 FUNC_9(VAR_2, "TLSv1: CertificateVerify hash", VAR_24, VAR_22);
 VAR_20 = VAR_16;
 VAR_16 += 2;
 VAR_23 = VAR_15 - VAR_16;
 if (VAR_13->cred == ((void*)0) ||
     FUNC_3(VAR_13->cred->key, VAR_24, VAR_22,
       VAR_16, &VAR_23) < 0) {
  FUNC_10(VAR_1, "TLSv1: Failed to sign hash (PKCS #1)");
  FUNC_6(VAR_13, VAR_6,
     VAR_5);
  return -1;
 }
 FUNC_0(VAR_20, VAR_23);

 VAR_16 += VAR_23;

 FUNC_1(VAR_19, VAR_16 - VAR_19 - 3);

 if (FUNC_8(&VAR_13->rl, VAR_7,
         VAR_17, VAR_15 - VAR_17, VAR_18, VAR_16 - VAR_18,
         &VAR_21) < 0) {
  FUNC_10(VAR_1, "TLSv1: Failed to generate a record");
  FUNC_6(VAR_13, VAR_6,
     VAR_5);
  return -1;
 }
 VAR_16 = VAR_17 + VAR_21;

 FUNC_7(&VAR_13->verify, VAR_18, VAR_16 - VAR_18);

 *VAR_14 = VAR_16;

 return 0;
}
