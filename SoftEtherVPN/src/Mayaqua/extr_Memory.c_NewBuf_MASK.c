
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int SizeReserved; scalar_t__ Current; scalar_t__ Size; void* Buf; } ;
typedef TYPE_1__ BUF ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 void* FUNC_1 (int) ;

BUF *FUNC_2()
{
 BUF *VAR_3;


 VAR_3 = FUNC_1(sizeof(BUF));
 VAR_3->Buf = FUNC_1(VAR_0);
 VAR_3->Size = 0;
 VAR_3->Current = 0;
 VAR_3->SizeReserved = VAR_0;


 FUNC_0(VAR_2);
 FUNC_0(VAR_1);

 return VAR_3;
}
