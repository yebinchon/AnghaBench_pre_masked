
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int size; char* data; } ;
typedef TYPE_1__ X_SERIAL ;
typedef int X509_NAME ;
typedef int X509_EXTENSION ;
typedef int X509 ;
typedef int UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_10__ {int length; void* data; } ;
struct TYPE_9__ {int private_key; int pkey; } ;
typedef int NAME ;
typedef TYPE_2__ K ;
typedef int ASN1_TIME ;
typedef TYPE_3__ ASN1_INTEGER ;


 int FUNC_0 (void*,char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int * FUNC_7 () ;
 int FUNC_8 (void*) ;
 void* FUNC_9 (int) ;
 int FUNC_10 () ;
 int FUNC_11 (void*,int) ;
 int FUNC_12 (int ) ;
 int * FUNC_13 (int *,int *,int ,char*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int *,int) ;
 int * FUNC_16 (int *) ;
 int * FUNC_17 (int *) ;
 TYPE_3__* FUNC_18 (int *) ;
 int * FUNC_19 () ;
 int FUNC_20 (int *,int *) ;
 int FUNC_21 (int *,int ) ;
 int FUNC_22 (int *,int *) ;
 int FUNC_23 (int *,long) ;
 int FUNC_24 (int *,int ,int ) ;
 int VAR_1 ;

X509 *FUNC_25(K *VAR_2, K *VAR_3, NAME *VAR_4, UINT VAR_5, X_SERIAL *VAR_6)
{
 X509 *VAR_7;
 UINT64 VAR_8, VAR_9;
 const ASN1_TIME *VAR_10, *VAR_11;
 X509_NAME *VAR_12, *VAR_13;
 X509_EXTENSION *VAR_14 = ((void*)0);
 X509_EXTENSION *VAR_15 = ((void*)0);
 X509_EXTENSION *VAR_16 = ((void*)0);
 ASN1_INTEGER *VAR_17;

 if (VAR_2 == ((void*)0) || VAR_4 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }
 if (VAR_5 == 0)
 {
  VAR_5 = 365;
 }
 if (VAR_3->private_key == 0)
 {
  return ((void*)0);
 }
 if (VAR_2->private_key != 0)
 {
  return ((void*)0);
 }

 VAR_8 = FUNC_10();
 VAR_9 = VAR_8 + (UINT64)VAR_5 * (UINT64)3600 * (UINT64)24 * (UINT64)1000;


 VAR_7 = FUNC_19();
 if (VAR_7 == ((void*)0))
 {
  return ((void*)0);
 }


 FUNC_23(VAR_7, 2L);


 VAR_10 = FUNC_17(VAR_7);
 VAR_11 = FUNC_16(VAR_7);
 if (!FUNC_11((void *)VAR_10, VAR_8))
 {
  FUNC_2(VAR_7);
  return ((void*)0);
 }
 if (!FUNC_11((void *)VAR_11, VAR_9))
 {
  FUNC_2(VAR_7);
  return ((void*)0);
 }


 VAR_12 = FUNC_5(VAR_4);
 if (VAR_12 == ((void*)0))
 {
  FUNC_2(VAR_7);
  return ((void*)0);
 }
 VAR_13 = FUNC_5(VAR_4);
 if (VAR_13 == ((void*)0))
 {
  FUNC_3(VAR_12);
  FUNC_2(VAR_7);
  return ((void*)0);
 }

 FUNC_20(VAR_7, VAR_13);
 FUNC_22(VAR_7, VAR_12);

 FUNC_3(VAR_12);
 FUNC_3(VAR_13);


 VAR_17 = FUNC_18(VAR_7);
 FUNC_8(VAR_17->data);
 if (VAR_6 == ((void*)0))
 {
  char VAR_18 = 0;
  VAR_17->data = FUNC_9(sizeof(char));
  FUNC_0(VAR_17->data, &VAR_18, sizeof(char));
  VAR_17->length = sizeof(char);
 }
 else
 {
  VAR_17->data = FUNC_9(VAR_6->size);
  FUNC_0(VAR_17->data, VAR_6->data, VAR_6->size);
  VAR_17->length = VAR_6->size;
 }


 VAR_14 = FUNC_13(((void*)0), ((void*)0), VAR_0, "critical,CA:TRUE");
 FUNC_15(VAR_7, VAR_14, -1);
 FUNC_14(VAR_14);


 VAR_16 = FUNC_6();
 if (VAR_16 != ((void*)0))
 {
  FUNC_15(VAR_7, VAR_16, -1);
  FUNC_14(VAR_16);
 }


 VAR_15 = FUNC_7();
 if (VAR_15 != ((void*)0))
 {
  FUNC_15(VAR_7, VAR_15, -1);
  FUNC_14(VAR_15);
 }

 FUNC_4(VAR_1);
 {

  FUNC_21(VAR_7, VAR_2->pkey);



  FUNC_24(VAR_7, VAR_3->pkey, FUNC_1());
 }
 FUNC_12(VAR_1);

 return VAR_7;
}
