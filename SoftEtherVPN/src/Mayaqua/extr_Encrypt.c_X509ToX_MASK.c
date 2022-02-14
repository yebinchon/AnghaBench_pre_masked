
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_25__ {int root_cert; int has_basic_constraints; int bits; int is_compatible_bit; int * serial; int issuer_url; int subject_name; int issuer_name; int * x509; } ;
typedef TYPE_3__ X ;
typedef scalar_t__ UINT ;
struct TYPE_29__ {TYPE_2__* location; int method; } ;
struct TYPE_28__ {char* data; int length; } ;
struct TYPE_27__ {scalar_t__ Size; } ;
struct TYPE_26__ {int pkey; } ;
struct TYPE_23__ {int uniformResourceIdentifier; } ;
struct TYPE_24__ {scalar_t__ type; TYPE_1__ d; } ;
typedef TYPE_4__ K ;
typedef TYPE_5__ BUF ;
typedef int AUTHORITY_INFO_ACCESS ;
typedef TYPE_6__ ASN1_INTEGER ;
typedef TYPE_7__ ACCESS_DESCRIPTION ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_4__*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 TYPE_4__* FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (char*) ;
 TYPE_5__* FUNC_12 (TYPE_4__*,int,int *) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_15 (char*,int) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int ,int,char*) ;
 int FUNC_18 (int *,int ,int) ;
 scalar_t__ FUNC_19 (int *,int ,int *,int *) ;
 TYPE_6__* FUNC_20 (int *) ;
 TYPE_3__* FUNC_21 (int) ;
 int FUNC_22 (int *) ;
 TYPE_7__* FUNC_23 (int *,int) ;

X *FUNC_24(X509 *VAR_5)
{
 X *VAR_6;
 K *VAR_7;
 BUF *VAR_8;
 UINT VAR_9;
 UINT VAR_10;
 ASN1_INTEGER *VAR_11;

 if (VAR_5 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_6 = FUNC_21(sizeof(X));
 VAR_6->x509 = VAR_5;


 FUNC_14(VAR_6);


 FUNC_13(VAR_6);


 if (FUNC_4(VAR_6->issuer_name, VAR_6->subject_name))
 {
  K *VAR_12 = FUNC_10(VAR_6);
  if (VAR_12 != ((void*)0))
  {
   if (FUNC_3(VAR_6, VAR_12))
   {
    VAR_6->root_cert = 1;
   }
   FUNC_8(VAR_12);
  }
 }


 if (FUNC_18(VAR_5, VAR_3, -1) != -1)
 {
  VAR_6->has_basic_constraints = 1;
 }


 if (VAR_6->root_cert == 0)
 {
  AUTHORITY_INFO_ACCESS *VAR_13 = (AUTHORITY_INFO_ACCESS *)FUNC_19(VAR_5, VAR_4, ((void*)0), ((void*)0));

  if (VAR_13 != ((void*)0))
  {
   int VAR_14;

   for (VAR_14 = 0; VAR_14 < FUNC_22(VAR_13); VAR_14++)
   {
    ACCESS_DESCRIPTION *VAR_15 = FUNC_23(VAR_13, VAR_14);
    if (VAR_15 != ((void*)0))
    {
     if (FUNC_16(VAR_15->method) == VAR_2 && VAR_15->location->type == VAR_1)
     {



      char *VAR_16 = (char *)FUNC_0(VAR_15->location->d.uniformResourceIdentifier);

      if (FUNC_11(VAR_16) == 0)
      {
       FUNC_17(VAR_6->issuer_url, sizeof(VAR_6->issuer_url), VAR_16);
       break;
      }
     }
    }
   }

   FUNC_2(VAR_13);
  }
 }


 VAR_11 = FUNC_20(VAR_5);
 VAR_6->serial = FUNC_15(VAR_11->data, VAR_11->length);
 if (VAR_6->serial == ((void*)0))
 {
  char VAR_17 = 0;
  VAR_6->serial = FUNC_15(&VAR_17, sizeof(char));
 }

 VAR_7 = FUNC_10(VAR_6);
 if (VAR_7 == ((void*)0))
 {
  FUNC_9(VAR_6);
  return ((void*)0);
 }

 VAR_8 = FUNC_12(VAR_7, 0, ((void*)0));

 VAR_9 = VAR_8->Size;
 VAR_10 = FUNC_5(VAR_7->pkey);

 FUNC_7(VAR_8);


 VAR_6->bits = FUNC_6(VAR_7->pkey);

 FUNC_8(VAR_7);

 if (VAR_10 == VAR_0)
 {
  VAR_6->is_compatible_bit = 1;

  if(VAR_6->bits != 1024 && VAR_6->bits != 1536 && VAR_6->bits != 2048 && VAR_6->bits != 3072 && VAR_6->bits != 4096)
  {
   VAR_6->is_compatible_bit = 0;
  }
  else
  {
   VAR_6->is_compatible_bit = 1;
  }
 }

 return VAR_6;
}
