
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int USHORT ;
typedef int UINT ;
struct TYPE_6__ {int Size; int* Buf; } ;
typedef TYPE_1__ BUF ;


 TYPE_1__* FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__*,int*,int) ;

void FUNC_5(BUF *VAR_1, char *VAR_2)
{
 USHORT VAR_3;
 USHORT VAR_4, VAR_5;
 UINT VAR_6;
 USHORT VAR_7;
 BUF *VAR_8;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_3 = FUNC_1(0xc00c);
 VAR_4 = FUNC_1(0x000c);
 VAR_5 = FUNC_1(0x0001);
 VAR_6 = FUNC_2(VAR_0);

 VAR_8 = FUNC_0(VAR_2);
 if (VAR_8 == ((void*)0))
 {
  return;
 }
 VAR_7 = FUNC_1((USHORT)VAR_8->Size);

 FUNC_4(VAR_1, &VAR_3, 2);
 FUNC_4(VAR_1, &VAR_4, 2);
 FUNC_4(VAR_1, &VAR_5, 2);
 FUNC_4(VAR_1, &VAR_6, 4);
 FUNC_4(VAR_1, &VAR_7, 2);
 FUNC_4(VAR_1, VAR_8->Buf, VAR_8->Size);
 FUNC_3(VAR_8);
}
