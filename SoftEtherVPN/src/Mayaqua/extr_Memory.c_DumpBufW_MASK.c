
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_3__ {int Size; int Buf; } ;
typedef int IO ;
typedef TYPE_1__ BUF ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;

bool FUNC_3(BUF *VAR_0, wchar_t *VAR_1)
{
 IO *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 == ((void*)0))
 {
  return 0;
 }
 FUNC_2(VAR_2, VAR_0->Buf, VAR_0->Size);
 FUNC_0(VAR_2);

 return 1;
}
