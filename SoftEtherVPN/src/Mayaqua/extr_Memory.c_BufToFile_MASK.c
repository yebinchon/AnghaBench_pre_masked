
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int size ;
typedef int hash ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_3__ {int Size; int * Buf; } ;
typedef int IO ;
typedef TYPE_1__ BUF ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *,int) ;

bool FUNC_3(IO *VAR_1, BUF *VAR_2)
{
 UCHAR VAR_3[VAR_0];
 UINT VAR_4;


 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }


 FUNC_2(VAR_3, VAR_2->Buf, VAR_2->Size);

 VAR_4 = FUNC_0(VAR_2->Size);


 if (FUNC_1(VAR_1, &VAR_4, sizeof(VAR_4)) == 0)
 {
  return 0;
 }


 if (FUNC_1(VAR_1, VAR_3, sizeof(VAR_3)) == 0)
 {
  return 0;
 }


 if (FUNC_1(VAR_1, VAR_2->Buf, VAR_2->Size) == 0)
 {
  return 0;
 }

 return 1;
}
