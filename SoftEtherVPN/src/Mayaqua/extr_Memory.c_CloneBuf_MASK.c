
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int Size; int Buf; } ;
typedef TYPE_1__ BUF ;


 TYPE_1__* FUNC_0 (int ,int ) ;

BUF *FUNC_1(BUF *VAR_0)
{
 BUF *VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_1 = FUNC_0(VAR_0->Buf, VAR_0->Size);

 return VAR_1;
}
