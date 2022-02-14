
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int SizeReserved; int Buf; } ;
typedef TYPE_1__ BUF ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

void FUNC_2(BUF *VAR_1, UINT VAR_2)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 if (VAR_1->SizeReserved >= VAR_2)
 {
  return;
 }

 while (VAR_1->SizeReserved < VAR_2)
 {
  VAR_1->SizeReserved = VAR_1->SizeReserved * 2;
 }
 VAR_1->Buf = FUNC_1(VAR_1->Buf, VAR_1->SizeReserved);


 FUNC_0(VAR_0);
}
