
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int key ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
typedef int CRYPT ;
typedef int BUF ;


 int FUNC_0 (int *,int *,char*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int * FUNC_4 (char*,int) ;
 int FUNC_5 (int *,int ,int ) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (int *,int *,scalar_t__) ;
 int * FUNC_8 (scalar_t__) ;

BUF *FUNC_9(char *VAR_0)
{
 UCHAR *VAR_1;
 UINT VAR_2;
 char *VAR_3 = "EncryptPassword";
 CRYPT *VAR_4;
 BUF *VAR_5;

 if (VAR_0 == ((void*)0))
 {
  VAR_0 = "";
 }

 VAR_2 = FUNC_6(VAR_0) + 1;
 VAR_1 = FUNC_8(VAR_2);

 VAR_4 = FUNC_4(VAR_3, sizeof(VAR_3));
 FUNC_0(VAR_4, VAR_1, VAR_0, VAR_2 - 1);
 FUNC_2(VAR_4);

 VAR_5 = FUNC_3();
 FUNC_7(VAR_5, VAR_1, VAR_2 - 1);
 FUNC_5(VAR_5, 0, 0);
 FUNC_1(VAR_1);

 return VAR_5;
}
