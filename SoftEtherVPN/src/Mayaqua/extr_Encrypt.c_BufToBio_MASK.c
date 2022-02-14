
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Size; int Buf; } ;
typedef TYPE_1__ BUF ;
typedef int BIO ;


 int * FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;

BIO *FUNC_6(BUF *VAR_1)
{
 BIO *VAR_2;

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_4(VAR_0);
 {
  VAR_2 = FUNC_0(FUNC_1());
  if (VAR_2 == ((void*)0))
  {
   FUNC_5(VAR_0);
   return ((void*)0);
  }
  FUNC_3(VAR_2, VAR_1->Buf, VAR_1->Size);
  FUNC_2(VAR_2, 0);
 }
 FUNC_5(VAR_0);

 return VAR_2;
}
