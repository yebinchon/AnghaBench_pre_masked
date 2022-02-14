
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int alt_dns ;
struct TYPE_13__ {int size; char* data; } ;
typedef TYPE_1__ X_SERIAL ;
typedef int X509_NAME ;
typedef int X509_EXTENSION ;
typedef int X509 ;
struct TYPE_14__ {int x509; } ;
typedef TYPE_2__ X ;
typedef int UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_17__ {int length; void* data; } ;
struct TYPE_16__ {int private_key; int pkey; } ;
struct TYPE_15__ {int CommonName; } ;
typedef TYPE_3__ NAME ;
typedef TYPE_4__ K ;
typedef int ASN1_TIME ;
typedef TYPE_5__ ASN1_INTEGER ;


 int FUNC_0 (void*,char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_6 (TYPE_3__*) ;
 int * FUNC_7 () ;
 int * FUNC_8 () ;
 int FUNC_9 (void*) ;
 void* FUNC_10 (int) ;
 int FUNC_11 () ;
 int FUNC_12 (void*,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int * FUNC_15 (int *,int *,int ,char*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int *,int) ;
 int * FUNC_18 (int *) ;
 int * FUNC_19 (int *) ;
 TYPE_5__* FUNC_20 (int *) ;
 int * FUNC_21 (int ) ;
 int * FUNC_22 () ;
 int FUNC_23 (int *,int *) ;
 int FUNC_24 (int *,int ) ;
 int FUNC_25 (int *,int *) ;
 int FUNC_26 (int *,long) ;
 int FUNC_27 (int *,int ,int ) ;
 int VAR_2 ;

X509 *FUNC_28(K *VAR_3, K *VAR_4, X *VAR_5, NAME *VAR_6, UINT VAR_7, X_SERIAL *VAR_8)
{
 X509 *VAR_9;
 UINT64 VAR_10, VAR_11;
 const ASN1_TIME *VAR_12, *VAR_13;
 X509_NAME *VAR_14, *VAR_15;
 X509_EXTENSION *VAR_16 = ((void*)0);
 X509_EXTENSION *VAR_17 = ((void*)0);
 X509_EXTENSION *VAR_18 = ((void*)0);
 ASN1_INTEGER *VAR_19;

 if (VAR_3 == ((void*)0) || VAR_6 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return ((void*)0);
 }
 if (VAR_3->private_key != 0)
 {
  return ((void*)0);
 }
 if (VAR_4->private_key == 0)
 {
  return ((void*)0);
 }

 VAR_10 = FUNC_11();
 VAR_11 = VAR_10 + (UINT64)VAR_7 * (UINT64)3600 * (UINT64)24 * (UINT64)1000;


 VAR_9 = FUNC_22();
 if (VAR_9 == ((void*)0))
 {
  return ((void*)0);
 }


 FUNC_26(VAR_9, 2L);


 VAR_12 = FUNC_19(VAR_9);
 VAR_13 = FUNC_18(VAR_9);
 if (!FUNC_12((void *)VAR_12, VAR_10))
 {
  FUNC_3(VAR_9);
  return ((void*)0);
 }
 if (!FUNC_12((void *)VAR_13, VAR_11))
 {
  FUNC_3(VAR_9);
  return ((void*)0);
 }


 VAR_14 = FUNC_6(VAR_6);
 if (VAR_14 == ((void*)0))
 {
  FUNC_3(VAR_9);
  return ((void*)0);
 }
 VAR_15 = FUNC_21(VAR_5->x509);
 if (VAR_15 == ((void*)0))
 {
  FUNC_4(VAR_14);
  FUNC_3(VAR_9);
  return ((void*)0);
 }

 FUNC_23(VAR_9, VAR_15);
 FUNC_25(VAR_9, VAR_14);

 FUNC_4(VAR_14);


 VAR_19 = FUNC_20(VAR_9);
 FUNC_9(VAR_19->data);
 if (VAR_8 == ((void*)0))
 {
  char VAR_20 = 0;
  VAR_19->data = FUNC_10(sizeof(char));
  FUNC_0(VAR_19->data, &VAR_20, sizeof(char));
  VAR_19->length = sizeof(char);
 }
 else
 {
  VAR_19->data = FUNC_10(VAR_8->size);
  FUNC_0(VAR_19->data, VAR_8->data, VAR_8->size);
  VAR_19->length = VAR_8->size;
 }
 VAR_18 = FUNC_7();
 if (VAR_18 != ((void*)0))
 {
  FUNC_17(VAR_9, VAR_18, -1);
  FUNC_16(VAR_18);
 }


 VAR_17 = FUNC_8();
 if (VAR_17 != ((void*)0))
 {
  FUNC_17(VAR_9, VAR_17, -1);
  FUNC_16(VAR_17);
 }


 if (FUNC_13(VAR_6->CommonName) == 0)
 {
  char VAR_21[VAR_0];

  FUNC_2(VAR_21, sizeof(VAR_21), "DNS.1:%S", VAR_6->CommonName);

  VAR_16 = FUNC_15(((void*)0), ((void*)0), VAR_1, VAR_21);
  FUNC_17(VAR_9, VAR_16, -1);
  FUNC_16(VAR_16);
 }

 FUNC_5(VAR_2);
 {

  FUNC_24(VAR_9, VAR_3->pkey);



  FUNC_27(VAR_9, VAR_4->pkey, FUNC_1());
 }
 FUNC_14(VAR_2);

 return VAR_9;
}
