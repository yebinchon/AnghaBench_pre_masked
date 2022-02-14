
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int Size; int Buf; } ;
typedef TYPE_1__ BUF ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (void*,int ,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_1__*,char*,int ) ;

void FUNC_8(void *VAR_0, char *VAR_1, char *VAR_2)
{
 BUF *VAR_3;
 char *VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_3 = FUNC_3();
 VAR_4 = FUNC_0(VAR_1);
 FUNC_6(VAR_4);
 FUNC_7(VAR_3, VAR_2, FUNC_5(VAR_2));
 FUNC_7(VAR_3, VAR_4, FUNC_5(VAR_4));
 FUNC_4(VAR_0, VAR_3->Buf, VAR_3->Size);

 FUNC_2(VAR_3);
 FUNC_1(VAR_4);
}
