
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int username2 ;
typedef int domainname2 ;
typedef char UCHAR ;
struct TYPE_5__ {int Size; int Buf; } ;
typedef TYPE_1__ BUF ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (char*,char*,int,char*,int,int) ;
 int VAR_1 ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_1__*,char*,int) ;

void FUNC_8(UCHAR *VAR_2, UCHAR *VAR_3, UCHAR *VAR_4, char *VAR_5)
{
 BUF *VAR_6;
 UCHAR VAR_7[VAR_1];
 char VAR_8[VAR_0];
 char VAR_9[VAR_0];

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return;
 }

 VAR_6 = FUNC_3();

 FUNC_7(VAR_6, VAR_3, 16);
 FUNC_7(VAR_6, VAR_4, 16);

 FUNC_4(VAR_5, VAR_8, sizeof(VAR_8), VAR_9, sizeof(VAR_9), 1);

 if (FUNC_2(VAR_8) == 0)
 {
  FUNC_7(VAR_6, VAR_8, FUNC_6(VAR_8));
 }

 FUNC_5(VAR_7, VAR_6->Buf, VAR_6->Size);

 FUNC_1(VAR_6);

 FUNC_0(VAR_2, VAR_7, 8);
}
