
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UCHAR ;
struct TYPE_5__ {int Current; int Size; scalar_t__ Buf; } ;
typedef TYPE_1__ BUF ;


 int FUNC_0 (TYPE_1__*,int *,int) ;

void FUNC_1(BUF *VAR_0, BUF *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0, ((UCHAR *)VAR_1->Buf) + VAR_1->Current, VAR_1->Size - VAR_1->Current);
}
