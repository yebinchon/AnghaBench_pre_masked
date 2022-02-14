
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int IntValue; int Size; int UniStr; int * Str; int * Data; int Int64Value; } ;
typedef TYPE_1__ VALUE ;
typedef int UINT ;
typedef int BYTE ;
typedef int BUF ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int ) ;





 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;
 int * FUNC_7 (int) ;

void FUNC_8(BUF *VAR_0, VALUE *VAR_1, UINT VAR_2)
{
 UINT VAR_3;
 BYTE *VAR_4;
 UINT VAR_5;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }


 switch (VAR_2)
 {
 case 131:
  FUNC_5(VAR_0, VAR_1->IntValue);
  break;
 case 130:
  FUNC_6(VAR_0, VAR_1->Int64Value);
  break;
 case 132:

  FUNC_5(VAR_0, VAR_1->Size);

  FUNC_4(VAR_0, VAR_1->Data, VAR_1->Size);
  break;
 case 129:
  VAR_3 = FUNC_2(VAR_1->Str);

  FUNC_5(VAR_0, VAR_3);

  FUNC_4(VAR_0, VAR_1->Str, VAR_3);
  break;
 case 128:

  VAR_5 = FUNC_0(VAR_1->UniStr) + 1;
  VAR_4 = FUNC_7(VAR_5);
  FUNC_3(VAR_4, VAR_5, VAR_1->UniStr);

  FUNC_5(VAR_0, VAR_5);

  FUNC_4(VAR_0, VAR_4, VAR_5);
  FUNC_1(VAR_4);
  break;
 }
}
