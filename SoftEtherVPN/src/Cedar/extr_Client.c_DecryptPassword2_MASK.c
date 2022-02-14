
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Size; int Buf; } ;
typedef int CRYPT ;
typedef TYPE_1__ BUF ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,int ,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int) ;

char *FUNC_6(BUF *VAR_0)
{
 char *VAR_1;
 char *VAR_2 = "EncryptPassword2";
 CRYPT *VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return FUNC_0("");
 }

 VAR_1 = FUNC_5(VAR_0->Size + 1);
 VAR_3 = FUNC_3(VAR_2, FUNC_4(VAR_2));
 FUNC_1(VAR_3, VAR_1, VAR_0->Buf, VAR_0->Size);
 FUNC_2(VAR_3);

 VAR_1[VAR_0->Size] = 0;

 return VAR_1;
}
