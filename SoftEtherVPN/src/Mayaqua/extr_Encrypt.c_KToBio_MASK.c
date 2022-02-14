
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pem_password_cb ;
struct TYPE_6__ {char* password; } ;
struct TYPE_5__ {int pkey; scalar_t__ private_key; } ;
typedef TYPE_1__ K ;
typedef TYPE_2__ CB_PARAM ;
typedef int BIO ;


 int * FUNC_0 () ;
 int FUNC_1 (int ) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int *,int *,int ,int *,TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int VAR_1 ;

BIO *FUNC_9(K *VAR_2, bool VAR_3, char *VAR_4)
{
 BIO *VAR_5;

 if (VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_5 = FUNC_2();

 if (VAR_2->private_key)
 {

  if (VAR_3 == 0)
  {

   FUNC_1(VAR_1);
   {
    FUNC_8(VAR_5, VAR_2->pkey);
   }
   FUNC_6(VAR_1);
  }
  else
  {

   if (VAR_4 == 0 || FUNC_5(VAR_4) == 0)
   {

    FUNC_1(VAR_1);
    {
     FUNC_4(VAR_5, VAR_2->pkey, ((void*)0), ((void*)0), 0, ((void*)0), ((void*)0));
    }
    FUNC_6(VAR_1);
   }
   else
   {

    CB_PARAM VAR_6;
    VAR_6.password = VAR_4;
    FUNC_1(VAR_1);
    {
     FUNC_4(VAR_5, VAR_2->pkey, FUNC_0(),
      ((void*)0), 0, (pem_password_cb *)VAR_0, &VAR_6);
    }
    FUNC_6(VAR_1);
   }
  }
 }
 else
 {

  if (VAR_3 == 0)
  {

   FUNC_1(VAR_1);
   {
    FUNC_7(VAR_5, VAR_2->pkey);
   }
   FUNC_6(VAR_1);
  }
  else
  {

   FUNC_1(VAR_1);
   {
    FUNC_3(VAR_5, VAR_2->pkey);
   }
   FUNC_6(VAR_1);
  }
 }

 return VAR_5;
}
