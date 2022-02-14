
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int pem_password_cb ;
struct TYPE_8__ {char* password; } ;
struct TYPE_7__ {int private_key; int * pkey; } ;
typedef TYPE_1__ K ;
typedef int EVP_PKEY ;
typedef TYPE_2__ CB_PARAM ;
typedef int BIO ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int *,int *,TYPE_2__*) ;
 int * FUNC_2 (int *,int *,int *,TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int) ;
 int * FUNC_6 (int *,int *) ;
 int * FUNC_7 (int *,int *) ;
 int VAR_1 ;

K *FUNC_8(BIO *VAR_2, bool VAR_3, bool VAR_4, char *VAR_5)
{
 EVP_PKEY *VAR_6;
 K *VAR_7;

 if (VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 if (VAR_5 != ((void*)0) && FUNC_3(VAR_5) == 0)
 {
  VAR_5 = ((void*)0);
 }

 if (VAR_3 == 0)
 {

  if (VAR_4 == 0)
  {

   VAR_6 = FUNC_6(VAR_2, ((void*)0));
   if (VAR_6 == ((void*)0))
   {
    return ((void*)0);
   }
  }
  else
  {

   CB_PARAM VAR_8;
   VAR_8.password = VAR_5;
   FUNC_0(VAR_1);
   {
    VAR_6 = FUNC_1(VAR_2, ((void*)0), (pem_password_cb *)VAR_0, &VAR_8);
   }
   FUNC_4(VAR_1);
   if (VAR_6 == ((void*)0))
   {
    return ((void*)0);
   }
  }
 }
 else
 {
  if (VAR_4 == 0)
  {

   FUNC_0(VAR_1);
   {
    VAR_6 = FUNC_7(VAR_2, ((void*)0));
   }
   FUNC_4(VAR_1);
   if (VAR_6 == ((void*)0))
   {
    return ((void*)0);
   }
  }
  else
  {

   CB_PARAM VAR_9;
   VAR_9.password = VAR_5;
   FUNC_0(VAR_1);
   {
    VAR_6 = FUNC_2(VAR_2, ((void*)0), (pem_password_cb *)VAR_0, &VAR_9);
   }
   FUNC_4(VAR_1);
   if (VAR_6 == ((void*)0))
   {
    return ((void*)0);
   }
  }
 }

 VAR_7 = FUNC_5(sizeof(K));
 VAR_7->pkey = VAR_6;
 VAR_7->private_key = VAR_3;

 return VAR_7;
}
