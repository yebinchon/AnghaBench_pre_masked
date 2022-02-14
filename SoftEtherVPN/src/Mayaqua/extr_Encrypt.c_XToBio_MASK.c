
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x509; } ;
typedef TYPE_1__ X ;
typedef int BIO ;


 int FUNC_0 (int ) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int VAR_0 ;

BIO *FUNC_5(X *VAR_1, bool VAR_2)
{
 BIO *VAR_3;

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_1();

 FUNC_0(VAR_0);
 {
  if (VAR_2 == 0)
  {

   FUNC_4(VAR_3, VAR_1->x509);
  }
  else
  {

   FUNC_2(VAR_3, VAR_1->x509);
  }
 }
 FUNC_3(VAR_0);

 return VAR_3;
}
