
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int tmp2 ;
typedef int tmp ;
typedef int UINT ;
typedef int UCHAR ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int * FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int,char**) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (char*) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 int FUNC_24 (int *) ;
 scalar_t__ FUNC_25 () ;
 int VAR_0 ;
 int FUNC_26 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_27 () ;
 int FUNC_28 () ;
 int FUNC_29 () ;
 int FUNC_30 () ;
 int FUNC_31 () ;
 int VAR_3 ;
 int FUNC_32 (int *) ;
 scalar_t__ FUNC_33 (char*,int ) ;
 scalar_t__ FUNC_34 () ;
 int VAR_4 ;
 int FUNC_35 (int *,int,char*,int *) ;
 int FUNC_36 () ;
 int VAR_5 ;
 int FUNC_37 (int ) ;
 int FUNC_38 (int ) ;
 int * VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_39 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_40 (int ,int *) ;
 int FUNC_41 (int ,char*) ;
 int FUNC_42 (int ) ;
 int VAR_14 ;
 int VAR_15 ;

void FUNC_43(bool VAR_16, bool VAR_17, int VAR_18, char **VAR_19)
{
 wchar_t VAR_20[VAR_1];
 UCHAR VAR_21[VAR_3];

 if ((VAR_12++) > 0)
 {
  return;
 }

 FUNC_17();

 VAR_11 = VAR_16;
 VAR_9 = VAR_17;
 VAR_6 = ((void*)0);
 if (VAR_7 == 0)
 {

  FUNC_40(VAR_14, ((void*)0));
 }




 VAR_10 = 0;
 FUNC_2();






 FUNC_41(VAR_0, "");


 FUNC_29();


 FUNC_42((UINT)FUNC_34());

 VAR_15 = FUNC_28();


 FUNC_8();


 FUNC_10();


 FUNC_13();

 if (FUNC_25())
 {

  FUNC_23();
 }


 FUNC_21();


 FUNC_19();


 FUNC_32(((void*)0));


 FUNC_9();


 FUNC_22();


 FUNC_14();


 FUNC_11(VAR_18 >= 1 ? VAR_19[0] : ((void*)0));


 FUNC_7(VAR_18, VAR_19);


 FUNC_15();







 FUNC_18();

 if (FUNC_30() == 0)
 {

  FUNC_39(0);
 }


 if (FUNC_31() == 0)
 {

  FUNC_0("OpenSSL Library Init Failed. (too old?)\nPlease install the latest version of OpenSSL.\n\n", "RsaCheck()");
  FUNC_39(0);
 }


 FUNC_12();


 FUNC_20();

 if (VAR_8 == ((void*)0))
 {

  VAR_8 = FUNC_4("unknown");
 }



 FUNC_6(VAR_20, sizeof(VAR_20));
 if (FUNC_24(VAR_20) == 0)
 {
  wchar_t VAR_22[VAR_2];

  FUNC_35(VAR_22, sizeof(VAR_22),
   L"Error: Executable binary file \"%s\" not found.\r\n\r\n"
   L"Please execute program with full path.\r\n",
   VAR_20);

  FUNC_1(VAR_22, ((void*)0));
  FUNC_38(0);
 }

 FUNC_3();


 FUNC_16();


 FUNC_5(VAR_21);


 FUNC_26();
}
