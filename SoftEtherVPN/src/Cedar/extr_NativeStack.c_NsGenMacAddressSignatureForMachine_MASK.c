
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int machine_name ;
typedef int UCHAR ;
struct TYPE_6__ {int Size; int Buf; } ;
typedef TYPE_1__ BUF ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_3 () ;
 int VAR_1 ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_1__*,int *,int) ;
 int FUNC_8 (TYPE_1__*,char*) ;

void FUNC_9(UCHAR *VAR_2, UCHAR *VAR_3)
{
 char VAR_4[VAR_0];
 BUF *VAR_5;
 UCHAR VAR_6[VAR_1];

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_4, sizeof(VAR_4));

 FUNC_6(VAR_4);
 FUNC_5(VAR_4);

 VAR_5 = FUNC_3();
 FUNC_7(VAR_5, VAR_3, 4);
 FUNC_8(VAR_5, VAR_4);

 FUNC_4(VAR_6, VAR_5->Buf, VAR_5->Size);

 FUNC_1(VAR_5);

 FUNC_0(VAR_2, VAR_6, 2);
}
