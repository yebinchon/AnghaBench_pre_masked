
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ Size; int Buf; } ;
typedef TYPE_1__ BUF ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;

bool FUNC_1(BUF *VAR_0, BUF *VAR_1)
{

 if (VAR_0 == ((void*)0) && VAR_1 == ((void*)0))
 {
  return 1;
 }
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 if (VAR_0->Size != VAR_1->Size)
 {
  return 0;
 }

 if (FUNC_0(VAR_0->Buf, VAR_1->Buf, VAR_0->Size) != 0)
 {
  return 0;
 }

 return 1;
}
