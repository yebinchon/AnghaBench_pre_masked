
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UCHAR ;
struct TYPE_5__ {int Size; int* Buf; } ;
typedef TYPE_1__ BUF ;


 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_1__*) ;

bool FUNC_2(BUF *VAR_0)
{
 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 FUNC_1(VAR_0);

 if (VAR_0->Size >= 3)
 {
  UCHAR *VAR_1 = VAR_0->Buf;

  if (VAR_1[0] == 0xEF && VAR_1[1] == 0xBB && VAR_1[2] == 0xBF)
  {
   FUNC_0(VAR_0, 3, 1);

   return 1;
  }
 }

 return 0;
}
