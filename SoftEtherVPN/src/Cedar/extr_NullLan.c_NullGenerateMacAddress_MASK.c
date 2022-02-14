
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int name ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_6__ {int Size; int Buf; } ;
typedef TYPE_1__ BUF ;


 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,int) ;
 int VAR_0 ;
 int FUNC_3 () ;
 TYPE_1__* FUNC_4 () ;
 int VAR_1 ;
 int FUNC_5 (int*,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,char*) ;

void FUNC_8(UCHAR *VAR_2, UINT VAR_3, UINT VAR_4)
{
 UCHAR VAR_5[VAR_1];
 char VAR_6[VAR_0];
 BUF *VAR_7;

 if (VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_7 = FUNC_4();
 FUNC_6(VAR_7, VAR_3);
 FUNC_6(VAR_7, VAR_4);
 FUNC_2(VAR_6, sizeof(VAR_6));



 FUNC_7(VAR_7, VAR_6);

 FUNC_5(VAR_5, VAR_7->Buf, VAR_7->Size);

 FUNC_1(VAR_7);

 FUNC_0(VAR_2, VAR_5, 6);
 VAR_2[0] = 0x7E;
}
