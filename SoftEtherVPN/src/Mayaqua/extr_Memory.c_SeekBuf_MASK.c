
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {int Size; scalar_t__ Current; } ;
typedef TYPE_1__ BUF ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ) ;

void FUNC_2(BUF *VAR_1, UINT VAR_2, int VAR_3)
{
 UINT VAR_4;

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 if (VAR_3 == 0)
 {

  VAR_4 = VAR_2;
 }
 else
 {
  if (VAR_3 > 0)
  {

   VAR_4 = VAR_1->Current + VAR_2;
  }
  else
  {

   if (VAR_1->Current >= VAR_2)
   {
    VAR_4 = VAR_1->Current - VAR_2;
   }
   else
   {
    VAR_4 = 0;
   }
  }
 }
 VAR_1->Current = FUNC_1(VAR_4, 0, VAR_1->Size);

 FUNC_0(VAR_0);
}
